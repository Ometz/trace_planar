function u=opt_feedback_linearization(s,x,D,c_overall,B_overall,Alpha_fully_actuated...
    ,theta_plus,theta_minus)
    q=x(1:9);
    dq=x(10:18);
    %current_stance_foot_position=Rfoot_pose_func(q);
    %hc = H_right_stance_foot_func(q)-[0;0;0;current_stance_foot_position(1);0;0];
    hc_j = j_H_right_foot_stance_func(q);
    hc_jj = jj_H_right_foot_stance_func(q,dq);

    dtheta = dq(1);

    
    coefficient=1.2;
    %theta_plus = Alpha_fully_actuated(36);
    %theta_minus = Alpha_fully_actuated(37);
    ds_dtheta = 1/(theta_minus-theta_plus);
    %s=(coefficient*theta-theta_plus)/ds_dtheta;


    
    [~,dph,ddph]=Bezier_6th(Alpha_fully_actuated,s);

    ddphi = [0;(coefficient*ds_dtheta)^2*(ddph*dtheta^2)];
    pphipq = [0;dph*coefficient*ds_dtheta];


    v=zeros(6,1);
    

    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
end