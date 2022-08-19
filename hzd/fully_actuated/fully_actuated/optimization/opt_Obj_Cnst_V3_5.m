function [Cost,Cnst] = opt_Obj_Cnst_V3_5




Cost = @obj;
Cnst = @constr;

%% cost function
    function J = obj(Alpha)

        
        J = 0;
        
    end

%% constraints
    function [c,ceq] = constr(Alpha)
        Alpha_fully_actuated =[0.7, 0.7, 0.75, 0.75, 0.7, 0.7, 0.7,...
             0.3,   0.31,   0.37,   0.4,   0.37,   0.31,   0.3,...
            -0.4,-0.28,-0.16,0,  0.16,0.28,0.4,...
             0,   0.13, 0.16, 0.17,0.16, 0.13, 0,...
             0,   0,  0,0, 0,0,0];
        theta_plus = -0.4092;
        theta_minus = 0.4865;
        
        
        %Alpha_fully_actuated = Alpha(1:35);
        %theta_plus = Alpha(36);
        %theta_minus = Alpha(37);
        Alpha_under_actuated = Alpha;
        %Alpha_over_actuated = Alpha(78:105);
        %% calculate the correspoinding q and dq during a step
        %options = optimoptions('lsqnonlin','Algorithm','levenberg-marquardt',...
        %                        'Display','final','MaxFunEvals',1e10, ...
        %                        'TolFun',1e-10);
        options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
            'TolFun',1e-8); 
        
        %% compute the time instant of the transition from fully actuated phase to under actuated phase
        %[s_transit,transit_flag]=compute_transition_from_full2under(Alpha_fully_actuated,options);
        
        
        [q_error,q_sol_whole_step,Fr,dq_sol_whole_step,~,u_norm_overall,s_under]...
            =opt_inverse_solve_floating_base_equ(options,Alpha_fully_actuated,theta_plus,theta_minus);
        %the function has slution
        error = q_error;  
 
        ceq1_1 = error(1:7);
        c1_1 = Fr(6:end,3);
        %swing foot is above the ground
        swing_foot_pose = zeros(8,3);
        for i=1:8
           swing_foot_pose(i+1,:)=Lfoot_pose_func(q_sol_whole_step(i+1,:)); 
        end
        c1_2 = -swing_foot_pose(:,2);
        % the range of the changeing point from f2u
        c1_3 = [s_under(1)-1;-s_under(1)+0.45];
        % theta_minus is positive theta_plus is negtive
        c1_4 = [theta_plus;-theta_minus];
        ceq1 = [ceq1_1];
        % at transition to underactuation point, the velocity of swing foot
        % is down
        transition_index = s_under(2);
        q_transition = q_sol_whole_step(transition_index,:)';
        dq_transition = dq_sol_whole_step(transition_index,:)';
        swing_foot_velocity = j_Lheel_pose_func(q_transition)*dq_transition;
        c1_5 = swing_foot_velocity(2);
        c1 = [c1_1;c1_2;c1_3;c1_4;c1_5];
        
        
        %% smooth transition into underactuated domain
        q_transition = q_sol_whole_step(s_under(2),:)';
        dq_transition = dq_sol_whole_step(s_under(2),:)';
        hc = [q_transition(4);q_transition(5);q_transition(6);...
            q_transition(7);q_transition(8);q_transition(9)];
        hc_j = [0 0 0 1 0 0 0 0 0;
                0 0 0 0 1 0 0 0 0;
                0 0 0 0 0 1 0 0 0;
                0 0 0 0 0 0 1 0 0;
                0 0 0 0 0 0 0 1 0;
                0 0 0 0 0 0 0 0 1];
        %[ph,dph,ddph]=Bezier_6th_under_actuated(Alpha_under_actuated,0);
        phi_transition = [Alpha_under_actuated(1);
                          Alpha_under_actuated(8);
                          Alpha_under_actuated(15);
                          Alpha_under_actuated(22);
                          Alpha_under_actuated(29);
                          Alpha_under_actuated(36)];
        dphi_transition = 6*[Alpha_under_actuated(2)-Alpha_under_actuated(1);
                             Alpha_under_actuated(9)-Alpha_under_actuated(8);
                             Alpha_under_actuated(16)-Alpha_under_actuated(15);
                             Alpha_under_actuated(23)-Alpha_under_actuated(22);
                             Alpha_under_actuated(30)-Alpha_under_actuated(29);
                             Alpha_under_actuated(37)-Alpha_under_actuated(36);];
        %{
        
        
        %}
        theta_minus_under = 0;
        Lheel_pose_unider_initial = Lheel_pose_func(q_transition);
        theta_plus_under = Lheel_pose_unider_initial(2);
        ds_dtheta = 1/(theta_minus_under - theta_plus_under);
        dLheel_pose_unider_initial = j_Lheel_pose_func(q_transition)*dq_transition;
        dtheta = dLheel_pose_unider_initial(2);
        dphi = ds_dtheta*dphi_transition*dtheta;
        y_u_transition = hc - phi_transition ;
        dy_u_transition = hc_j*dq_transition-dphi;
        ceq2 = [y_u_transition;dy_u_transition];
        %fprintf('error of lsqnonlin solver is %f \n',max(abs(error)));
        %% The joint has to be within its range
            %leg_lb = [-1.15; -0.38; -1.77; 0.00; -1.19; -0.40; -1.15; -0.74; -1.77; 0.00; -1.19; -0.77];
            %leg_ub = [ 0.74;  0.79;  0.48; 2.11;  0.92;  0.77;  0.74;  0.45;  0.48; 2.11;  0.93;  0.4];
            %lb=[-5;-1; 0; -pi/2; -pi/2; -pi/2; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; leg_lb];
            %ub=[5; 1; 0.5; pi/2;  pi/2;  pi/2;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1; leg_ub];
        
        c=c1;
        ceq = [ceq1;ceq2];
    end

end