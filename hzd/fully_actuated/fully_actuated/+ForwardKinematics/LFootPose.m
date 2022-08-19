function l_foot_pose = LFootPose(q)
    Tw2b = [cos(q(3)) 0 sin(q(3)) q(1);
            0         1 0         0;
           -sin(q(3)) 0 cos(q(3)) q(2);
            0         0 0         1];
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
    Tankle2foot_left = [1,0,0,  0;
                       0,1,0, 0;
                       0,0,1,-0.025;
                       0,0,0, 1];  
    Tw2foot_left = Tw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2foot_left;
    X_L_toe = Tw2foot_left(1,4);
    Z_L_toe = Tw2foot_left(3,4);

    Lr31 = Tw2foot_left(3,1);
    Lr32 = Tw2foot_left(3,2);
    Lr33 = Tw2foot_left(3,3);
    LPitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
    l_foot_pose = [X_L_toe;Z_L_toe;LPitch];
end