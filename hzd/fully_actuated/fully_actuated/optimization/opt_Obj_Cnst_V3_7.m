function [Cost,Cnst] = opt_Obj_Cnst_V3_7




Cost = @obj;
Cnst = @constr;

%% cost function
    function J = obj(Alpha)

        
        J = 0;
        
    end

%% constraints
    function [c,ceq] = constr(Alpha)

       
        Alpha_under_actuated = Alpha;
        Alpha1 = Alpha(1:7);
        Alpha2 = Alpha(8:14);
        Alpha3 = Alpha(15:21);
        Alpha4 = Alpha(22:28);
        Alpha5 = Alpha(29:35);
        Alpha6 = Alpha(36:42);
        Alpha_reformat = [Alpha1;Alpha2;Alpha3;Alpha4;Alpha5;Alpha6];
        
        s_transit=0.4439;

 
        
       
        %ceq1 = [ceq1_1];
        Alpha_under_d=[-0.8092, -0.4073,  -0.734,  -0.734,  -0.734,  -0.734,  -0.734;
                     -1.2040, -1.3417, -1.2085, -1.2085, -1.2085, -1.2085, -1.2085;
                      1.0118,  1.0810,  0.8654,  0.8654,  0.8654,  0.8654,  0.8654;
                      1.6324,  1.3454,  1.2191,  0.85,    0.8,     0.7,     0.5236;
                     -0.5667, -0.4934, -0.4919, -0.4919, -0.4919, -0.4919, -0.4919;
                     -0.7924, -0.6422, -0.4712, -0.3712, -0.6712, -0.5712, -0.5712];
        Alpha_under_d = Alpha_under_d(:,3:7);
        
        ceq1 = Alpha_reformat(:,3:7)-Alpha_under_d;
        ceq1 = ceq1(:);
        %% smooth transition into underactuated domain
        q_transition = [0;0;0; -0.7174; -0.9013;1.3749;1.0410;-0.9692;-0.5066];
        dq_transition = [0; 0; 0; -2.4746; 0.002; 2.1402; -0.3099; -0.4353; -0.0756];
        
        hc = [q_transition(4);q_transition(5);q_transition(6);...
            q_transition(7);q_transition(8);q_transition(9)];
        hc_j = [0 0 0 1 0 0 0 0 0;
                0 0 0 0 1 0 0 0 0;
                0 0 0 0 0 1 0 0 0;
                0 0 0 0 0 0 1 0 0;
                0 0 0 0 0 0 0 1 0;
                0 0 0 0 0 0 0 0 1];
        [ph,dph,ddph]=Bezier_6th_under_actuated(Alpha_under_actuated,0.2968);
        phi_transition = ph;
        dphi_transition =dph;
        %{
        
        
        %}
        theta_plus = -0.4092;
        theta_minus = 0.4865;

        ds_dtheta = 1/(theta_minus - theta_plus);
        %dLheel_pose_unider_initial = j_Lheel_pose_func(q_transition)*dq_transition;
        dtheta = 0.1582;
        coefficient = 1.2;
        %dphi = ds_dtheta*dphi_transition*dtheta;
        dphi = coefficient*ds_dtheta*dphi_transition*dtheta;
        y_u_transition = hc - phi_transition ;
        dy_u_transition = hc_j*dq_transition-dphi;
        ceq2 = [y_u_transition];
        %fprintf('error of lsqnonlin solver is %f \n',max(abs(error)));
        %% The joint has to be within its range
            %leg_lb = [-1.15; -0.38; -1.77; 0.00; -1.19; -0.40; -1.15; -0.74; -1.77; 0.00; -1.19; -0.77];
            %leg_ub = [ 0.74;  0.79;  0.48; 2.11;  0.92;  0.77;  0.74;  0.45;  0.48; 2.11;  0.93;  0.4];
            %lb=[-5;-1; 0; -pi/2; -pi/2; -pi/2; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; leg_lb];
            %ub=[5; 1; 0.5; pi/2;  pi/2;  pi/2;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1; leg_ub];
        
        c=[];
        ceq = [ceq1;ceq2]
    end

end