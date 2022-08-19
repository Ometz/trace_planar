function r_foot_pose = RFootPose_b(q)
    Tw2b = [cos(q(3)) 0 sin(q(3)) 0;
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
    Tankle2foot_right=[1,0,0, 0;
                      0,1,0, 0;
                      0,0,1,-0.025;
                      0,0,0, 1]; 
    Tw2foot_right = Tw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2foot_right;              
    X_R_toe = Tw2foot_right(1,4);
    Z_R_toe = Tw2foot_right(3,4);
    Rr31 = Tw2foot_right(3,1);
    Rr32 = Tw2foot_right(3,2);
    Rr33 = Tw2foot_right(3,3);
    RPitch = atan2(-Rr31,sqrt(Rr32*Rr32+Rr33*Rr33));
    r_foot_pose = [X_R_toe;Z_R_toe;RPitch];
end