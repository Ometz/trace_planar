function dq_plus=resetmap_(x,foot_index,t_end)
    q=x(1:9);
    dq=x(10:18);
    [D,~,~] = dynamics.dynamic_matrix(x,foot_index);
    if foot_index == -1
        swing_foot_jacobian = numeric_jacobian(@holCtr.left_holonomic_constraint,q);
        suppport_foot_jacobian = numeric_jacobian(@holCtr.right_holonomic_constraint,q);
    elseif foot_index == 1
        swing_foot_jacobian = numeric_jacobian(@holCtr.right_holonomic_constraint,q);
        suppport_foot_jacobian = numeric_jacobian(@holCtr.left_holonomic_constraint,q);
    end
    %support_foot_velocity = suppport_foot_jacobian*dq';

    b=[D*dq';zeros(3,1)];
    A=[D,-swing_foot_jacobian';
       swing_foot_jacobian,zeros(3,3)];
    dq_plus=A\b;
    dq_plus=dq_plus(1:9);
    
    swing_foot_velocity = swing_foot_jacobian*dq_plus

end