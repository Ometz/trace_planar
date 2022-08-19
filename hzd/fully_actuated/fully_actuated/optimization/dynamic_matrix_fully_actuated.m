function [D,c_vec,B] = dynamic_matrix_fully_actuated(x)
    q=x(1:9);
    dq=x(10:18);
    D = Mmat_seven_link_walker(q);
    c=zeros(9,1);
    
    c = Ce1_vec1_seven_link_walker(q,dq)+c;
    c = Ce1_vec2_seven_link_walker(q,dq)+c;
    c = Ce1_vec3_seven_link_walker(q,dq)+c;
    c = Ce1_vec4_seven_link_walker(q,dq)+c;
    c = Ce1_vec5_seven_link_walker(q,dq)+c;
    c = Ce1_vec6_seven_link_walker(q,dq)+c;
    c = Ce1_vec7_seven_link_walker(q,dq)+c;
    c = Ce1_vec8_seven_link_walker(q,dq)+c;
    c = Ce1_vec9_seven_link_walker(q,dq)+c;
    
    c = Ce2_vec1_seven_link_walker(q,dq)+c;
    c = Ce2_vec2_seven_link_walker(q,dq)+c;
    c = Ce2_vec3_seven_link_walker(q,dq)+c;
    c = Ce2_vec4_seven_link_walker(q,dq)+c;
    c = Ce2_vec5_seven_link_walker(q,dq)+c;
    c = Ce2_vec6_seven_link_walker(q,dq)+c;
    c = Ce2_vec7_seven_link_walker(q,dq)+c;
    c = Ce2_vec8_seven_link_walker(q,dq)+c;
    c = Ce2_vec9_seven_link_walker(q,dq)+c;
    
    c = Ce3_vec1_seven_link_walker(q,dq)+c;
    c = Ce3_vec2_seven_link_walker(q,dq)+c;
    c = Ce3_vec3_seven_link_walker(q,dq)+c;
    c = Ce3_vec4_seven_link_walker(q,dq)+c;
    c = Ce3_vec5_seven_link_walker(q,dq)+c;
    c = Ce3_vec6_seven_link_walker(q,dq)+c;
    c = Ce3_vec7_seven_link_walker(q,dq)+c;
    c = Ce2_vec8_seven_link_walker(q,dq)+c;
    c = Ce2_vec9_seven_link_walker(q,dq)+c;
    
    c=Ge_vec_seven_link_walker(q,dq)+c;
    
    c_vec = -c;
    
    B=zeros(9,6);
    
    B(4:9,1:6)=eye(6);
    
    
    
end