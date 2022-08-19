function F = opt_floating_base_hc(q,desired_value)
    %% world frame to base frame
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
    %{                 
    Tankle2toe_right=[1,0,0, 0.075;
                      0,1,0, 0;
                      0,0,1,-0.025;
                      0,0,0,1];
    Tankle2heel_right=[1,0,0,-0.075;
                       0,1,0, 0;
                       0,0,1,-0.025;
                       0,0,0,1]; 
    %}
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
    %{                
    Tankle2toe_left=[1,0,0, 0.075;
                      0,1,0, 0;
                      0,0,1,-0.025;
                      0,0,0,1];
    Tankle2heel_left=[1,0,0,-0.075;
                       0,1,0, 0;
                       0,0,1,-0.025;
                       0,0,0,1];  
    %}               
    Tankle2foot_left=[1,0,0,  0;
                       0,1,0, 0;
                       0,0,1,-0.025;
                       0,0,0, 1];                 
    %Tw2toe_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2toe_right;
    %Tw2heel_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2heel_right;
    Tw2foot_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2foot_right;
    X_R_foot = Tw2foot_right(1,4);
    Z_R_foot = Tw2foot_right(3,4);
    Rr31 = Tw2foot_right(3,1);
    Rr32 = Tw2foot_right(3,2);
    Rr33 = Tw2foot_right(3,3);
    
    RPitch = atan2(-Rr31,sqrt(Rr32*Rr32+Rr33*Rr33));
    
    Rfoot_pose = [X_R_foot;Z_R_foot;RPitch];
    %Tw2heel_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2heel_left;
    %Tw2toe_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2toe_left;
    Tw2foot_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2foot_left;
    Lr31 = Tw2foot_left(3,1);
    Lr32 = Tw2foot_left(3,2);
    Lr33 = Tw2foot_left(3,3);

    LPitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
    %Ltoe_pose = [X_L_toe;Z_L_toe;LPitch];
    
    X_L_foot = Tw2foot_left(1,4);

    Z_L_foot = Tw2foot_left(3,4);


    Lfoot_pose = [X_L_foot;Z_L_foot;LPitch];
    
    H_right_stance_foot = [q(1);q(2);q(3);Lfoot_pose;Rfoot_pose];
    F = H_right_stance_foot - desired_value;
end