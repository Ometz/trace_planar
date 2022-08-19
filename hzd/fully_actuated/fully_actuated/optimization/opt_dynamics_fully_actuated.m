function [F_c_,u]= opt_dynamics_fully_actuated(s,q_sol,dq_sol,Alpha_fully_actuated...
    ,theta_plus,theta_minus)



    q = q_sol;
    dq = dq_sol;
    
    x=[q;dq];



    j_c = j_Right_foot_constraint_func(q);
    jj_c = jj_Right_foot_constraint_func(q,dq);
    

    
    [D,c_vec,B] = dynamic_matrix_fully_actuated(x);
    
    c_overall = c_vec-j_c'/(j_c/D*j_c')*(j_c/D*c_vec-jj_c);
    B_overall = B-j_c'/(j_c/D*j_c')*j_c/D*B;
    
    
    %Fx = [dq;(D)\(-c_overall)];
    %Gx = [zeros(30,23);(D)\B_overall];

    

    u=opt_feedback_linearization(s,x,D,c_overall,B_overall,Alpha_fully_actuated,...
        theta_plus,theta_minus);
    %u=0.5*ones(23,1);

    F_c = (j_c/D*j_c')\(j_c/D*c_vec-jj_c)-(j_c/D*j_c')\j_c/D*B*u;
    Fr_heel = F_c(3);
    F_c_=[F_c(1);F_c(2);Fr_heel];


end