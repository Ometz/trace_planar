sym_var=SymVariable('q',[9,1]);
dsym_var=SymVariable('dq',[9,1]);
q = [sym_var(1);sym_var(2);sym_var(3);
    sym_var(4);sym_var(5);sym_var(6);sym_var(7);
    sym_var(8);sym_var(9)];
dq = [dsym_var(1);dsym_var(2);dsym_var(3);
    dsym_var(4);dsym_var(5);dsym_var(6);dsym_var(7);
    dsym_var(8);dsym_var(9)];


Tw2b = [cos(q(3)) 0 sin(q(3)) q(1);
        0         1 0         0;
       -sin(q(3)) 0 cos(q(3)) q(2);
        0         0 0         1];
Tb2hip_right = [cos(q(4)) 0 sin(q(4)) 0;
                 0         1 0         0;
                -sin(q(4)) 0 cos(q(4)) 0;
                 0         0 0         1];

Thip2knee_right = [cos(q(6)) 0 sin(q(6))  0;
                   0         1 0          0;
                  -sin(q(6)) 0 cos(q(6)) -0.4;
                   0         0 0          1];
  
Tknee2ankle_right = [cos(q(8)) 0 sin(q(8))  0;
                     0         1 0          0;
                    -sin(q(8)) 0 cos(q(8)) -0.4;
                     0         0 0          1];            
Tankle2toe_right=[1,0,0, 0.075;
                  0,1,0, 0;
                  0,0,1,-0.025;
                  0,0,0,1];
Tankle2heel_right=[1,0,0,-0.075;
                   0,1,0, 0;
                   0,0,1,-0.025;
                   0,0,0,1]; 

Tankle2foot_right=[1,0,0, 0;
                  0,1,0, 0;
                  0,0,1,-0.025;
                  0,0,0, 1];  
              
Tb2hip_left = [cos(q(5)) 0 sin(q(5)) 0;
               0         1 0         0;
              -sin(q(5)) 0 cos(q(5)) 0;
               0         0 0         1];

Thip2knee_left = [cos(q(7)) 0 sin(q(7))  0;
                  0         1 0          0;
                 -sin(q(7)) 0 cos(q(7)) -0.4;
                  0         0 0          1];
  
Tknee2ankle_left = [cos(q(9)) 0 sin(q(9))  0;
                    0         1 0          0;
                   -sin(q(9)) 0 cos(q(9)) -0.4;
                    0         0 0          1];
Tankle2toe_left=[1,0,0, 0.075;
                  0,1,0, 0;
                  0,0,1,-0.025;
                  0,0,0,1];
Tankle2heel_left=[1,0,0,-0.075;
                   0,1,0, 0;
                   0,0,1,-0.025;
                   0,0,0,1];  
Tankle2foot_left=[1,0,0,  0;
                   0,1,0, 0;
                   0,0,1,-0.025;
                   0,0,0, 1];                 
Tw2toe_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2toe_right;
Tw2heel_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2heel_right;
Tw2foot_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2foot_right;

Tw2toe_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2toe_left;
Tw2heel_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2heel_left;
Tw2foot_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2foot_left;
%% left toe pose
X_L_toe = Tw2toe_left(1,4);
X_L_toe = X_L_toe(1);
Z_L_toe = Tw2toe_left(3,4);
Z_L_toe = Z_L_toe(1);

Lr31 = Tw2toe_left(3,1);
Lr31 = Lr31(1);
Lr32 = Tw2toe_left(3,2);
Lr32 = Lr32(1);
Lr33 = Tw2toe_left(3,3);
Lr33 = Lr33(1);
LPitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
Ltoe_pose = [X_L_toe;Z_L_toe;LPitch];
%% left heel pose
X_L_heel = Tw2heel_left(1,4);
X_L_heel = X_L_heel(1);
Z_L_heel = Tw2heel_left(3,4);
Z_L_heel = Z_L_heel(1);

Lheel_pose = [X_L_heel;Z_L_heel;LPitch];
%% left foot pose
X_L_foot = Tw2foot_left(1,4);
X_L_foot = X_L_foot(1);
Z_L_foot = Tw2foot_left(3,4);
Z_L_foot = Z_L_foot(1);

Lfoot_pose = [X_L_foot;Z_L_foot;LPitch];
%% right toe pose
X_R_toe = Tw2toe_right(1,4);
X_R_toe = X_R_toe(1);
Z_R_toe = Tw2toe_right(3,4);
Z_R_toe = Z_R_toe(1);

Rr31 = Tw2toe_right(3,1);
Rr31 = Rr31(1);
Rr32 = Tw2toe_right(3,2);
Rr32 = Rr32(1);
Rr33 = Tw2toe_right(3,3);
Rr33 = Rr33(1);
RPitch = atan2(-Rr31,sqrt(Rr32*Rr32+Rr33*Rr33));
Rtoe_pose = [X_R_toe;Z_R_toe;RPitch];
%% right heel pose
X_R_heel = Tw2heel_right(1,4);
X_R_heel = X_R_heel(1);
Z_R_heel = Tw2heel_right(3,4);
Z_R_heel = Z_R_heel(1);

Rheel_pose = [X_R_heel;Z_R_heel;RPitch];
%% right foot pose 
X_R_foot = Tw2foot_right(1,4);
X_R_foot = X_R_foot(1);
Z_R_foot = Tw2foot_right(3,4);
Z_R_foot = Z_R_foot(1);

Rfoot_pose = [X_R_foot;Z_R_foot;RPitch];

%%
taget_path = 'gen';
%% symbolic expression for foot
Lfoot_pose_fun = SymFunction('Lfoot_pose_func',Lfoot_pose,sym_var);
Rfoot_pose_fun = SymFunction('Rfoot_pose_func',Rfoot_pose,sym_var);
export(Lfoot_pose_fun,taget_path)
export(Rfoot_pose_fun,taget_path)
%% symbolic expression for heel and toe
Ltoe_pose_fun = SymFunction('Ltoe_pose_func',Ltoe_pose,sym_var);
Rtoe_pose_fun = SymFunction('Rtoe_pose_func',Rtoe_pose,sym_var);
Lheel_pose_fun = SymFunction('Lheel_pose_func',Lheel_pose,sym_var);
Rheel_pose_fun = SymFunction('Rheel_pose_func',Rheel_pose,sym_var);
export(Ltoe_pose_fun,taget_path)
export(Rtoe_pose_fun,taget_path)
export(Lheel_pose_fun,taget_path)
export(Rheel_pose_fun,taget_path)
%% jacobian of pose of the foot
j_Lfoot_pose = jacobian(Lfoot_pose,sym_var);
j_Rfoot_pose = jacobian(Rfoot_pose,sym_var);
j_Lfoot_pose_fun = SymFunction('j_Lfoot_pose_func',j_Lfoot_pose,sym_var);
j_Rfoot_pose_fun = SymFunction('j_Rfoot_pose_func',j_Rfoot_pose,sym_var);
export(j_Lfoot_pose_fun,taget_path)
export(j_Rfoot_pose_fun,taget_path)
%% second order derivative of the pose of the foot
jj_Lfoot_pose = jacobian(j_Lfoot_pose*dq,sym_var)*dq;
jj_Rfoot_pose = jacobian(j_Rfoot_pose*dq,sym_var)*dq;
jj_Lfoot_pose_fun = SymFunction('jj_Lfoot_pose_func',jj_Lfoot_pose,sym_var,dsym_var);
jj_Rfoot_pose_fun = SymFunction('jj_Rfoot_pose_func',jj_Rfoot_pose,sym_var,dsym_var);
export(jj_Lfoot_pose_fun,taget_path)
export(jj_Rfoot_pose_fun,taget_path)
%% output function
H_left_stance_foot = [q(1);q(2);q(3);Rfoot_pose];
H_right_stance_foot = [q(1);q(2);q(3);Lfoot_pose];
H_left_stance_foot_fun = SymFunction('H_left_stance_foot_func',H_left_stance_foot,sym_var);
H_right_stance_foot_fun = SymFunction('H_right_stance_foot_func',H_right_stance_foot,sym_var);
export(H_left_stance_foot_fun,'executable_file')
export(H_right_stance_foot_fun,'executable_file')
%% compute jacobian
j_H_left_stance_foot = jacobian(H_left_stance_foot,sym_var);
j_H_right_stance_foot = jacobian(H_right_stance_foot,sym_var);
j_H_left_stance_foot_fun = SymFunction('j_H_left_stance_foot_func',j_H_left_stance_foot,sym_var);
j_H_right_stance_foot_fun = SymFunction('j_H_right_stance_foot_func',j_H_right_stance_foot,sym_var);
export(j_H_left_stance_foot_fun,'executable_file')
export(j_H_right_stance_foot_fun,'executable_file')
%% derivative of jacobian
jj_H_left_stance_foot = jacobian(j_H_left_stance_foot*dq,sym_var)*dq;
jj_H_right_stance_foot = jacobian(j_H_right_stance_foot*dq,sym_var)*dq;
jj_H_left_stance_foot_fun = SymFunction('jj_H_left_stance_foot_func',jj_H_left_stance_foot,sym_var,dsym_var);
jj_H_right_stance_foot_fun = SymFunction('jj_H_right_stance_foot_func',jj_H_right_stance_foot,sym_var,dsym_var);
export(jj_H_left_stance_foot_fun,'executable_file')
export(jj_H_right_stance_foot_fun,'executable_file')
%% symbolic expression for foot in optimization fully actuated
H_right_stance_foot_opt = [q(1);q(2);q(3);Lfoot_pose,Rfoot_pose];
j_H_right_stance_foot_opt=jacobian(H_right_stance_foot_opt,sym_var);
H_right_stance_foot_opt_fun = SymFunction('H_right_stance_foot_opt_func',H_right_stance_foot_opt,sym_var);
j_H_right_stance_foot_opt_fun=SymFunction('j_H_right_stance_foot_opt_func',j_H_right_stance_foot_opt,sym_var);
export(H_right_stance_foot_opt_fun,'executable_file')
export(j_H_right_stance_foot_opt_fun,'executable_file')
%% underactuated stance foot 
j_Ltoe_pose=jacobian(Ltoe_pose,sym_var);
j_Rtoe_pose=jacobian(Rtoe_pose,sym_var);
j_Ltoe_pose_fun=SymFunction('j_Ltoe_pose_func',j_Ltoe_pose,sym_var);
j_Rtoe_pose_fun=SymFunction('j_Rtoe_pose_func',j_Rtoe_pose,sym_var);
export(j_Ltoe_pose_fun,'executable_file')
export(j_Rtoe_pose_fun,'executable_file')
%% underactuated stance foot second order derivative 
jj_Ltoe_pose=jacobian(j_Ltoe_pose*dq,sym_var)*dq;
jj_Rtoe_pose=jacobian(j_Rtoe_pose*dq,sym_var)*dq;
jj_Ltoe_pose_fun = SymFunction('jj_Ltoe_pose_func',jj_Ltoe_pose,sym_var,dsym_var);
jj_Rtoe_pose_fun = SymFunction('jj_Rtoe_pose_func',jj_Rtoe_pose,sym_var,dsym_var);
export(jj_Ltoe_pose_fun,'executable_file')
export(jj_Rtoe_pose_fun,'executable_file')
%% jacobian of pose of the heel
j_Lheel_pose=jacobian(Lheel_pose,sym_var);
j_Rheel_pose=jacobian(Rheel_pose,sym_var);
j_Lheel_pose_fun=SymFunction('j_Lheel_pose_func',j_Lheel_pose,sym_var);
j_Rheel_pose_fun=SymFunction('j_Rheel_pose_func',j_Rheel_pose,sym_var);
export(j_Lheel_pose_fun,'executable_file')
export(j_Rheel_pose_fun,'executable_file')

%% over actuated constraint
constraint_right_leg_trail=[Rtoe_pose(1);Rtoe_pose(2);Lheel_pose(1);Lheel_pose(2)];
constraint_left_leg_trail=[Ltoe_pose(1);Ltoe_pose(2);Rheel_pose(1);Rheel_pose(2)];
j_constraint_right_leg_trail = jacobian(constraint_right_leg_trail,sym_var);
j_constraint_left_leg_trail = jacobian(constraint_left_leg_trail,sym_var);
j_constraint_right_leg_trail_fun=SymFunction('j_constraint_right_leg_trail_func',j_constraint_right_leg_trail,sym_var);
j_constraint_left_leg_trail_fun=SymFunction('j_constraint_left_leg_trail_func',j_constraint_left_leg_trail,sym_var);
export(j_constraint_right_leg_trail_fun,'executable_file')
export(j_constraint_left_leg_trail_fun,'executable_file')
%% second derivative over actuated constraint
jj_constrint_right_leg_trail=jacobian(j_constraint_right_leg_trail*dq,sym_var)*dq;
jj_constrint_left_leg_trail=jacobian(j_constraint_left_leg_trail*dq,sym_var)*dq;
jj_constrint_right_leg_trail_fun = SymFunction('jj_constraint_right_leg_trail_func',jj_constrint_right_leg_trail,sym_var,dsym_var);
jj_constrint_left_leg_trail_fun = SymFunction('jj_constraint_left_leg_trail_func',jj_constrint_left_leg_trail,sym_var,dsym_var);
export(jj_constrint_right_leg_trail_fun,'executable_file')
export(jj_constrint_left_leg_trail_fun,'executable_file')
%% output function overactuated 
H_o_right_leg_trail=[q(1);q(2);q(3);RPitch;LPitch];
H_o_left_leg_trail=[q(1);q(2);q(3);LPitch;RPitch];
H_o_right_leg_trail_fun = SymFunction('H_o_right_leg_trail_func',H_o_right_leg_trail,sym_var);
H_o_left_leg_trail_fun = SymFunction('H_o_left_leg_trail_func',H_o_left_leg_trail,sym_var);
export(H_o_right_leg_trail_fun,'executable_file')
export(H_o_left_leg_trail_fun,'executable_file')
%% first derivative of overactuated
j_H_o_right_leg_trail=jacobian(H_o_right_leg_trail,sym_var);
j_H_o_left_leg_trail=jacobian(H_o_left_leg_trail,sym_var);
j_H_o_right_leg_trail_fun=SymFunction('j_H_o_right_leg_trail_func',j_H_o_right_leg_trail,sym_var);
j_H_o_left_leg_trail_fun=SymFunction('j_H_o_left_leg_trail_func',j_H_o_left_leg_trail,sym_var);
export(j_H_o_right_leg_trail_fun,'executable_file')
export(j_H_o_left_leg_trail_fun,'executable_file')
%% second derivative overactuated
jj_H_o_right_leg_trail=jacobian(j_H_o_right_leg_trail*dq,sym_var)*dq;
jj_H_o_left_leg_trail=jacobian(j_H_o_left_leg_trail*dq,sym_var)*dq;
jj_H_o_right_leg_trail_fun=SymFunction('jj_H_o_right_leg_trail_func',jj_H_o_right_leg_trail,sym_var,dsym_var);
jj_H_o_left_leg_trail_fun=SymFunction('jj_H_o_left_leg_trail_func',jj_H_o_left_leg_trail,sym_var,dsym_var);
export(jj_H_o_right_leg_trail_fun,'executable_file')
export(jj_H_o_left_leg_trail_fun,'executable_file')

Right_foot_constraint = [X_R_toe;Z_R_toe;Z_R_heel];
Left_foot_constraint = [X_L_toe;Z_L_toe;Z_L_heel];
j_Right_foot_constraint = jacobian(Right_foot_constraint,sym_var);
j_Left_foot_constraint  = jacobian(Left_foot_constraint,sym_var);
j_Right_foot_constraint_fun = SymFunction('j_Right_foot_constraint_func',j_Right_foot_constraint,sym_var);
j_Left_foot_constraint_fun = SymFunction('j_Left_foot_constraint_func',j_Left_foot_constraint,sym_var);
jj_Right_foot_constraint = jacobian(j_Right_foot_constraint*dq,sym_var)*dq;
jj_Left_foot_constraint = jacobian(j_Left_foot_constraint*dq,sym_var)*dq;
jj_Right_foot_constraint_fun = SymFunction('jj_Right_foot_constraint_func',jj_Right_foot_constraint,sym_var,dsym_var);
jj_Left_foot_constraint_fun = SymFunction('jj_Left_foot_constraint_func',jj_Left_foot_constraint,sym_var,dsym_var);
export(j_Right_foot_constraint_fun,'gen');
export(j_Left_foot_constraint_fun,'gen');
export(jj_Right_foot_constraint_fun,'gen');
export(jj_Left_foot_constraint_fun,'gen');
%%

Lfoot_pose_fun = SymFunction('Lfoot_pose_func',Lfoot_pose,sym_var);
Rfoot_pose_fun = SymFunction('Rfoot_pose_func',Rfoot_pose,sym_var);

export(Lfoot_pose_fun,'gen');
export(Rfoot_pose_fun,'gen');
%% opt hc and its jacobian
opt_hc = [q(1);q(2);q(3);Lfoot_pose;Rfoot_pose];
j_opt_hc = jacobian(opt_hc,sym_var);
opt_hc_fun = SymFunction('opt_hc_func',opt_hc,sym_var);
j_opt_hc_fun  = SymFunction('j_opt_hc_func',j_opt_hc,sym_var);
export(opt_hc_fun)
export(j_opt_hc_fun)

