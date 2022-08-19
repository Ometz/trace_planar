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

Lr31 = Tw2heel_left(3,1);
Lr31 = Lr31(1);
Lr32 = Tw2heel_left(3,2);
Lr32 = Lr32(1);
Lr33 = Tw2heel_left(3,3);
Lr33 = Lr33(1);
L_heel_Pitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
Lheel_pose = [X_L_heel;Z_L_heel;L_heel_Pitch];
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

Rr31 = Tw2heel_right(3,1);
Rr31 = Rr31(1);
Rr32 = Tw2heel_right(3,2);
Rr32 = Rr32(1);
Rr33 = Tw2heel_right(3,3);
Rr33 = Rr33(1);
R_heelPitch = atan2(-Rr31,sqrt(Rr32*Rr32+Rr33*Rr33));

Rheel_pose = [X_R_heel;Z_R_heel;R_heelPitch];
%% symbolic expression for toe and heel
Ltoe_pose_fun = SymFunction('Ltoe_pose_func',Ltoe_pose,sym_var);
Lheel_pose_fun = SymFunction('Lheel_pose_func',Lheel_pose,sym_var);

Rtoe_pose_fun = SymFunction('Rtoe_pose_func',Rtoe_pose,sym_var);
Rheel_pose_fun = SymFunction('Rheel_pose_func',Rheel_pose,sym_var);
%% export executable file
export(Ltoe_pose_fun,'gen')
export(Lheel_pose_fun,'gen')
export(Rtoe_pose_fun,'gen')
export(Rheel_pose_fun,'gen')
%% compute correspoding jacobian
j_Ltoe_pose = jacobian(Ltoe_pose,sym_var);
j_Lheel_pose = jacobian(Lheel_pose,sym_var);
j_Rtoe_pose = jacobian(Rtoe_pose,sym_var);
j_Rheel_pose = jacobian(Rheel_pose,sym_var);

j_Ltoe_pose_fun = SymFunction('j_Ltoe_pose_func',j_Ltoe_pose,sym_var);
j_Lheel_pose_fun = SymFunction('j_Lheel_pose_func',j_Lheel_pose,sym_var);
j_Rtoe_pose_fun = SymFunction('j_Rtoe_pose_func',j_Rtoe_pose,sym_var);
j_Rheel_pose_fun = SymFunction('j_Rheel_pose_func',j_Rheel_pose,sym_var);

%export(j_Ltoe_pose_fun,'gen')
%export(j_Lheel_pose_fun,'gen')
%export(j_Rtoe_pose_fun,'gen')
%export(j_Rheel_pose_fun,'gen')

%% compute second order derivative

jj_Ltoe_pose = jacobian(j_Ltoe_pose*dq,sym_var)*dq;
jj_Lheel_pose = jacobian(j_Lheel_pose*dq,sym_var)*dq;
jj_Rtoe_pose = jacobian(j_Rtoe_pose*dq,sym_var)*dq;
jj_Rheel_pose = jacobian(j_Rheel_pose*dq,sym_var)*dq;

jj_Ltoe_pose_fun = SymFunction('jj_Ltoe_pose_func',jj_Ltoe_pose,sym_var,dsym_var);
jj_Lheel_pose_fun = SymFunction('jj_Lheel_pose_func',jj_Lheel_pose,sym_var,dsym_var);
jj_Rtoe_pose_fun = SymFunction('jj_Rtoe_pose_func',jj_Rtoe_pose,sym_var,dsym_var);
jj_Rheel_pose_fun = SymFunction('jj_Rheel_pose_func',jj_Rheel_pose,sym_var,dsym_var);

%export(jj_Ltoe_pose_fun,'gen')
%export(jj_Lheel_pose_fun,'gen')
%export(jj_Rtoe_pose_fun,'gen')
%export(jj_Rheel_pose_fun,'gen')

%% under-actuated computation
Ltoe_pose_under_actuated = [X_L_toe;Z_L_toe];
Rtoe_pose_under_actuated = [X_R_toe;Z_R_toe];
Lheel_pose_under_actuated = [X_L_heel;Z_L_heel];
Rheel_pose_under_actuated = [X_R_heel;Z_R_heel];

j_Ltoe_pose_under_actuated=jacobian(Ltoe_pose_under_actuated,sym_var);
j_Rtoe_pose_under_actuated=jacobian(Rtoe_pose_under_actuated,sym_var);
j_Lheel_pose_under_actuated=jacobian(Lheel_pose_under_actuated,sym_var);
j_Rheel_pose_under_actuated=jacobian(Rheel_pose_under_actuated,sym_var);

j_Ltoe_pose_under_actuated_fun=SymFunction('j_Ltoe_pose_under_actuated_func',j_Ltoe_pose_under_actuated,sym_var);
j_Rtoe_pose_under_actuated_fun=SymFunction('j_Rtoe_pose_under_actuated_func',j_Rtoe_pose_under_actuated,sym_var);
j_Lheel_pose_under_actuated_fun=SymFunction('j_Lheel_pose_under_actuated_func',j_Lheel_pose_under_actuated,sym_var);
j_Rheel_pose_under_actuated_fun=SymFunction('j_Rheel_pose_under_actuated_func',j_Rheel_pose_under_actuated,sym_var);

jj_Ltoe_pose_under_actuated=jacobian(j_Ltoe_pose_under_actuated*dq,sym_var)*dq;
jj_Rtoe_pose_under_actuated=jacobian(j_Rtoe_pose_under_actuated*dq,sym_var)*dq;
jj_Lheel_pose_under_actuated=jacobian(j_Lheel_pose_under_actuated*dq,sym_var)*dq;
jj_Rheel_pose_under_actuated=jacobian(j_Rheel_pose_under_actuated*dq,sym_var)*dq;

jj_Ltoe_pose_under_actuated_fun = SymFunction('jj_Ltoe_pose_under_actuated_func',...
    jj_Ltoe_pose_under_actuated,sym_var,dsym_var);
jj_Rtoe_pose_under_actuated_fun = SymFunction('jj_Rtoe_pose_under_actuated_func',...
    jj_Rtoe_pose_under_actuated,sym_var,dsym_var);
jj_Lheel_pose_under_actuated_fun = SymFunction('jj_Lheel_pose_under_actuated_func',...
    jj_Lheel_pose_under_actuated,sym_var,dsym_var);
jj_Rheel_pose_under_actuated_fun = SymFunction('jj_Rheel_pose_under_actuated_func',...
    jj_Rheel_pose_under_actuated,sym_var,dsym_var);
%% export the executable file for underactuated constraint
export(j_Ltoe_pose_under_actuated_fun,'gen')
export(j_Rtoe_pose_under_actuated_fun,'gen')
export(jj_Ltoe_pose_under_actuated_fun,'gen')
export(jj_Rtoe_pose_under_actuated_fun,'gen')
%%
export(j_Lheel_pose_under_actuated_fun,'gen')
export(j_Rheel_pose_under_actuated_fun,'gen')
export(jj_Lheel_pose_under_actuated_fun,'gen')
export(jj_Rheel_pose_under_actuated_fun,'gen')
%% output function left stance foot
X_R_foot = Tw2foot_right(1,4);
X_R_foot = X_R_foot(1);
Z_R_foot = Tw2foot_right(3,4);
Z_R_foot = Z_R_foot(1);

Rfoot_pose = [X_R_foot;Z_R_foot;RPitch];
H_left_foot_stance = [q(1);q(2);q(3);Rfoot_pose];
H_left_foot_stance_fun = SymFunction('H_left_foot_stance_func',H_left_foot_stance,sym_var);
j_H_left_foot_stance = jacobian(H_left_foot_stance,sym_var);
j_H_left_foot_stance_fun = SymFunction('j_H_left_foot_stance_func',j_H_left_foot_stance,sym_var);
jj_H_left_foot_stance = jacobian(j_H_left_foot_stance*dq,sym_var)*dq;
jj_H_left_foot_stance_fun = SymFunction('jj_H_left_foot_stance_func',jj_H_left_foot_stance,sym_var,dsym_var);
export(H_left_foot_stance_fun,'gen')
export(j_H_left_foot_stance_fun,'gen')
export(jj_H_left_foot_stance_fun,'gen')
%% output function right stance foot
X_L_foot = Tw2foot_left(1,4);
X_L_foot = X_L_foot(1);
Z_L_foot = Tw2foot_left(3,4);
Z_L_foot = Z_L_foot(1);

Lfoot_pose = [X_L_foot;Z_L_foot;LPitch];
H_right_foot_stance = [q(1);q(2);q(3);Lfoot_pose];
H_right_foot_stance_fun = SymFunction('H_right_foot_stance_func',H_right_foot_stance,sym_var);
j_H_right_foot_stance = jacobian(H_right_foot_stance,sym_var);
j_H_right_foot_stance_fun = SymFunction('j_H_right_foot_stance_func',j_H_right_foot_stance,sym_var);
jj_H_right_foot_stance = jacobian(j_H_right_foot_stance*dq,sym_var)*dq;
jj_H_right_foot_stance_fun = SymFunction('jj_H_right_foot_stance_func',jj_H_right_foot_stance,sym_var,dsym_var);
export(H_right_foot_stance_fun,'gen')
export(j_H_right_foot_stance_fun,'gen')
export(jj_H_right_foot_stance_fun,'gen')
%% output function left stance foot (under actuated)
X_R_heel = Tw2heel_right(1,4);
X_R_heel = X_R_heel(1);
Z_R_heel = Tw2heel_right(3,4);
Z_R_heel = Z_R_heel(1);

Rheel_pose = [X_R_heel;Z_R_heel;RPitch];
H_u_left_foot_stance = [q(1);q(2);q(3);Rheel_pose];
H_u_left_foot_stance_fun = SymFunction('H_u_left_foot_stance_func',H_u_left_foot_stance,sym_var);
j_H_u_left_foot_stance = jacobian(H_u_left_foot_stance,sym_var);
j_H_u_left_foot_stance_fun = SymFunction('j_H_u_left_foot_stance_func',j_H_u_left_foot_stance,sym_var);
jj_H_u_left_foot_stance = jacobian(j_H_u_left_foot_stance*dq,sym_var)*dq;
jj_H_u_left_foot_stance_fun = SymFunction('jj_H_u_left_foot_stance_func',jj_H_u_left_foot_stance,sym_var,dsym_var);
export(H_u_left_foot_stance_fun,'gen')
export(j_H_u_left_foot_stance_fun,'gen')
export(jj_H_u_left_foot_stance_fun,'gen')
%% output function right stance foot (under actuated)
X_L_heel = Tw2heel_left(1,4);
X_L_heel = X_L_heel(1);
Z_L_heel = Tw2heel_left(3,4);
Z_L_heel = Z_L_heel(1);

Lheel_pose = [X_L_heel;Z_L_heel;LPitch];
H_u_right_foot_stance = [q(1);q(2);q(3);Lheel_pose];
H_u_right_foot_stance_fun = SymFunction('H_u_right_foot_stance_func',H_u_right_foot_stance,sym_var);
j_H_u_right_foot_stance = jacobian(H_u_right_foot_stance,sym_var);
j_H_u_right_foot_stance_fun = SymFunction('j_H_u_right_foot_stance_func',j_H_u_right_foot_stance,sym_var);
jj_H_u_right_foot_stance = jacobian(j_H_u_right_foot_stance*dq,sym_var)*dq;
jj_H_u_right_foot_stance_fun = SymFunction('jj_H_u_right_foot_stance_func',jj_H_u_right_foot_stance,sym_var,dsym_var);
export(H_u_right_foot_stance_fun,'gen')
export(j_H_u_right_foot_stance_fun,'gen')
export(jj_H_u_right_foot_stance_fun,'gen')
%% over actuated constraint
Ltoe_pose_over_actuated = [X_L_toe;Z_L_toe];
Rtoe_pose_over_actuated = [X_R_toe;Z_R_toe];
Lheel_pose_over_actuated = [X_L_heel;Z_L_heel];
Rheel_pose_over_actuated = [X_R_heel;Z_R_heel];


constraint_right_leg_trail = [Rtoe_pose_over_actuated;Lheel_pose_over_actuated];
constraint_left_leg_trail = [Ltoe_pose_over_actuated;Rheel_pose_over_actuated];

j_constraint_right_leg_trail = jacobian(constraint_right_leg_trail,sym_var);
j_constraint_left_leg_trail = jacobian(constraint_left_leg_trail,sym_var);

jj_constraint_right_leg_trail = jacobian(j_constraint_right_leg_trail*dq,sym_var)*dq;
jj_constraint_left_leg_trail = jacobian(j_constraint_left_leg_trail*dq,sym_var)*dq;

j_constraint_right_leg_trail_fun = SymFunction('j_constraint_right_leg_trail_func',j_constraint_right_leg_trail,sym_var);
j_constraint_left_leg_trail_fun = SymFunction('j_constraint_left_leg_trail_func',j_constraint_left_leg_trail,sym_var);

jj_constraint_right_leg_trail_fun = SymFunction('jj_constraint_right_leg_trail_func',jj_constraint_right_leg_trail,sym_var,dsym_var);
jj_constraint_left_leg_trail_fun = SymFunction('jj_constraint_left_leg_trail_func',jj_constraint_left_leg_trail,sym_var,dsym_var);

export(j_constraint_right_leg_trail_fun,'gen')
export(j_constraint_left_leg_trail_fun,'gen')
export(jj_constraint_right_leg_trail_fun,'gen')
export(jj_constraint_left_leg_trail_fun,'gen')
%% over actuated output function
H_o_right_trail = [q(1);q(2);q(3);LPitch;RPitch];
H_o_left_trail = [q(1);q(2);q(3);RPitch;LPitch];
H_o_right_trail_fun = SymFunction('H_o_right_trail_func',H_o_right_trail,sym_var);
H_o_left_trail_fun = SymFunction('H_o_left_trail_func',H_o_left_trail,sym_var);

j_H_o_right_trail = jacobian(H_o_right_trail,sym_var);
j_H_o_left_trail = jacobian(H_o_left_trail,sym_var);
j_H_o_right_trail_fun = SymFunction('j_H_o_right_trail_func',j_H_o_right_trail,sym_var);
j_H_o_left_trail_fun = SymFunction('j_H_o_left_trail_func',j_H_o_left_trail,sym_var);

jj_H_o_right_trail = jacobian(j_H_o_right_trail*dq,sym_var)*dq;
jj_H_o_left_trail = jacobian(j_H_o_left_trail*dq,sym_var)*dq;
jj_H_o_right_trail_fun = SymFunction('jj_H_o_right_trail_func',jj_H_o_right_trail,sym_var,dsym_var);
jj_H_o_left_trail_fun = SymFunction('jj_H_o_left_trail_func',jj_H_o_left_trail,sym_var,dsym_var);

export(H_o_right_trail_fun,'gen')
export(H_o_left_trail_fun,'gen')
export(j_H_o_right_trail_fun,'gen')
export(j_H_o_left_trail_fun,'gen')
export(jj_H_o_right_trail_fun,'gen')
export(jj_H_o_left_trail_fun,'gen')
%% opt output function
opt_H = [q(1);q(2);q(3);Lfoot_pose;Rfoot_pose];
opt_H_fun = SymFunction('opt_H_func',opt_H,sym_var);
j_opt_H = jacobian(opt_H_fun,sym_var);
j_opt_H_fun = SymFunction('j_opt_H_func',j_opt_H,sym_var);
export(opt_H_fun,'ex2_motion_generation')
export(j_opt_H_fun,'ex2_motion_generation')
%%
Rfoot_pose = [X_R_foot;Z_R_foot;RPitch];
j_Rfoot_pose = jacobian(Rfoot_pose,sym_var);
j_Rfoot_pose_fun = SymFunction('j_Rfoot_pose_func',j_Rfoot_pose,sym_var);
jj_Rfoot_pose = jacobian(j_Rfoot_pose*dq,sym_var)*dq;
jj_Rfoot_pose_fun = SymFunction('jj_Rfoot_pose_func',jj_Rfoot_pose,sym_var,dsym_var);
export(j_Rfoot_pose_fun,'ex2_motion_generation')
export(jj_Rfoot_pose_fun,'ex2_motion_generation')
%% constraint for sittting pose
double_foot_constraint = [Rfoot_pose;Lfoot_pose];
j_double_foot_constraint = jacobian(double_foot_constraint,sym_var);
j_double_foot_constraint_fun = SymFunction('j_double_foot_constraint_func',j_double_foot_constraint,sym_var);
jj_double_foot_constraint = jacobian(j_double_foot_constraint*dq,sym_var)*dq;
jj_double_foot_constraint_fun = SymFunction('jj_double_foot_constraint_func',jj_double_foot_constraint,sym_var,dsym_var);
export(j_double_foot_constraint_fun,'')
export(jj_double_foot_constraint_fun,'')