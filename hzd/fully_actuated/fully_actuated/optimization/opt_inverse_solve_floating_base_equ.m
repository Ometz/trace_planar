function [q_error,q_sol,dq_sol]...
    =opt_inverse_solve_floating_base_equ(options,Alpha_right_stance_foot,theta_plus,theta_minus,s_transit)

    
    q0 = [0; 0.75; 0.3001; -0.9169; -0.3775; 0.6972; 0.6946; -0.0804; -0.6172];

    coefficient = 1.2;

    s=s_transit;
    ds_dtheta = 1/(theta_minus - theta_plus);
    theta = (s/ds_dtheta + theta_plus)/coefficient;
    stance_foot_pose=[0;0;0];


    q1 = theta+stance_foot_pose(1);


    [ph,dph,~]=Bezier_6th(Alpha_right_stance_foot,s);


    phi = [q1;ph;stance_foot_pose];

    %[q_sol,q_fval]=lsqnonlin(@(q) opt_floating_base_hc(q,phi),q0,lb,ub,options);

    [q_sol,q_fval]=fsolve(@(q) opt_floating_base_hc(q,phi),q0,options);


    q_fval = norm(q_fval);
    q_error = q_fval;

    %% below is used to calculate the velocity of the robot in joint space

    dtheta = 0.2;

    stance_foot_velocity = zeros(3,1);

    dphi = [dtheta; dph*ds_dtheta*dtheta*coefficient;stance_foot_velocity];
    j_hc = j_opt_hc_func(q_sol);
    dq_sol = j_hc\dphi;

    %dq0 = dq_sol;

    %% calculate COP



        

    %error = norm(q_error)+norm(dq_error);
end