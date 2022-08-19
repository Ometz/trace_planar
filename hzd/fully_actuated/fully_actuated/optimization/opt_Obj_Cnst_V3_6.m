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
        s_transit=0.4351;
        [q_error,q_sol,dq_sol]...
            =opt_inverse_solve_floating_base_equ(options,Alpha_fully_actuated,theta_plus,theta_minus,s_transit);
        
       
        error = q_error;  
 
        ceq1_1 = error;
       
        ceq1 = [ceq1_1];
       

        
        
        %% smooth transition into underactuated domain
        q_transition = q_sol;
        dq_transition = dq_sol;
        hc = [q_transition(4);q_transition(5);q_transition(6);...
            q_transition(7);q_transition(8);q_transition(9)];
        hc_j = [0 0 0 1 0 0 0 0 0;
                0 0 0 0 1 0 0 0 0;
                0 0 0 0 0 1 0 0 0;
                0 0 0 0 0 0 1 0 0;
                0 0 0 0 0 0 0 1 0;
                0 0 0 0 0 0 0 0 1];
        [ph,dph,ddph]=Bezier_6th_under_actuated(Alpha_under_actuated,s_transit);
        phi_transition = ph;
        dphi_transition =dph;
        %{
        
        
        %}
        theta_plus = -0.4092;
        theta_minus = 0.4865;
        %Lheel_pose_unider_initial = Lheel_pose_func(q_transition);
        %theta_plus_under = Lheel_pose_unider_initial(2);
        ds_dtheta = 1/(theta_minus - theta_plus);
        %dLheel_pose_unider_initial = j_Lheel_pose_func(q_transition)*dq_transition;
        dtheta = dq_transition(1);
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
        
        c=[];
        ceq = [ceq1;ceq2];
    end

end