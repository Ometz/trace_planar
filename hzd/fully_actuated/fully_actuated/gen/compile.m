for i=1:3
    for j=1:9
        fileName = "Ce"+num2str(i)+"_vec"+num2str(j)+"_seven_link_walker.cc";
        mex(fileName)
        
    end
end
mex Ge_vec_seven_link_walker.cc
mex H_left_foot_stance_func.cc
mex H_left_stance_foot_func.cc
mex H_right_foot_stance_func.cc
mex H_right_stance_foot_func.cc
mex j_constraint_left_leg_trail_func.cc
mex j_constraint_right_leg_trail_func.cc
mex j_H_left_foot_stance_func.cc
mex j_H_left_stance_foot_func.cc
mex j_H_right_foot_stance_func.cc
mex j_H_right_stance_foot_func.cc
mex j_Left_foot_constraint_func.cc
mex j_Right_foot_constraint_func.cc
mex jj_H_left_foot_stance_func.cc
mex jj_H_left_stance_foot_func.cc
mex jj_H_right_foot_stance_func.cc
mex jj_H_right_stance_foot_func.cc
mex jj_Left_foot_constraint_func.cc
mex jj_Right_foot_constraint_func.cc
mex Lfoot_pose_func.cc
mex Mmat_seven_link_walker.cc
mex Rfoot_pose_func.cc