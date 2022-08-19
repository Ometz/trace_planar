function animation(t,x_sol,contact_vec,want_record,name,landmarks,lidar_vec)
    figure
    %axis(gca,'equal')
    %t,x_sol]=even_time_distribution(t,x_sol);
    axis([-1 4 -1 4])
    axis equal
    file_path=strcat('video/',name);
    xlabel('x')
    ylabel('y')
    if want_record == 1
        video_obj = VideoWriter(file_path);
        open(video_obj)
        
        
    end
 
    %view(0,90)
    %view(90,0)  %z-y plane frontal
    %view(0,0)   %x-z plane sagital 
    num_of_frame=length(t);
    for i = 1:10:num_of_frame
        
        q=x_sol(i,1:9);
        contact = contact_vec(i);
        base = [q(1);q(2)];
        [LHip,LKnee,LAnkle,LToe,LHeel]=L_position(q);
        [RHip,RKnee,RAnkle,RToe,RHeel]=R_position(q);
        Head = upper_body(q);
        
        time_str="t="+num2str(t(i));
        h = text(3,1.1,0,time_str);
      
  
 
        base2Head = line([base(1),Head(1)],[base(2),Head(2)],'Color','yellow','LineWidth',3);
        base2LHip = line([base(1),LHip(1)],[base(2),LHip(2)],'Color','blue','LineWidth',3);
        base2RHip = line([base(1),RHip(1)],[base(2),RHip(2)],'Color','green','LineWidth',3);
        LHip2LKnee = line([LHip(1),LKnee(1)],[LHip(2),LKnee(2)],'Color','blue','LineWidth',3);
        RHip2RKnee = line([RHip(1),RKnee(1)],[RHip(2),RKnee(2)],'Color','green','LineWidth',3);
        LKnee2LAnkle = line([LKnee(1),LAnkle(1)],[LKnee(2),LAnkle(2)],'Color','blue','LineWidth',3);
        RKnee2RAnkle = line([RKnee(1),RAnkle(1)],[RKnee(2),RAnkle(2)],'Color','green','LineWidth',3);
        
        LAnkle2LToe = line([LAnkle(1),LToe(1)],[LAnkle(2),LToe(2)],'Color','blue','LineWidth',3);
        RAnkle2LToe = line([RAnkle(1),RToe(1)],[RAnkle(2),RToe(2)],'Color','green','LineWidth',3);
        LAnkle2LHeel=line([LAnkle(1),LHeel(1)],[LAnkle(2),LHeel(2)],'Color','blue','LineWidth',3);
        RAnkle2LHeel=line([RAnkle(1),RHeel(1)],[RAnkle(2),RHeel(2)],'Color','green','LineWidth',3);
        LHeel2Toe=line([LHeel(1),LToe(1)],[LHeel(2),LToe(2)],'Color','blue','LineWidth',3);
        RHeel2Toe=line([RHeel(1),RToe(1)],[RHeel(2),RToe(2)],'Color','green','LineWidth',3);
        t_i = t(i);
        
        
        
        platform = line([-5,5],[0,0],'Color','black','LineWidth',0.5);
        
        if nargin > 6
            rect_mid_line = 0.05;
            
            landmark1 = rectangle('Position',[landmarks(1,1) landmarks(1,3)...
                rect_mid_line rect_mid_line],'EdgeColor','k','FaceColor',[0 .5 .5]);
            landmark2 = rectangle('Position',[landmarks(2,1) landmarks(2,3)...
                rect_mid_line rect_mid_line],'EdgeColor','k','FaceColor',[0 .5 .5]);
            
            lidar = lidar_vec(i,:);
            lidar1 = lidar(2:4);
            lidar2 = lidar(6:8);
            theta = q(3);
            R = [cos(theta) 0 sin(theta);
                 0          1 0;
                -sin(theta) 0 cos(theta)];
            ray1 = R*lidar1'+[q(1); 0; q(2)];
            ray2 = R*lidar2'+[q(1); 0; q(2)];
            base2ray1 = line([base(1),ray1(1)],[base(2),ray1(3)],'Color','red','LineWidth',3);
            base2ray2 = line([base(1),ray2(1)],[base(2),ray2(3)],'Color','red','LineWidth',3);
        end
            
        
        
        
        pause(0.001)
        if want_record == 1
            F= getframe(gcf);
            writeVideo(video_obj,F)
        end

        delete(base2Head)
        delete(base2LHip)
        delete(base2RHip)
        delete(LHip2LKnee)
        delete(RHip2RKnee)
        delete(LKnee2LAnkle)
        delete(RKnee2RAnkle)
        
        delete(LAnkle2LToe)
        delete(RAnkle2LToe)
        delete(LAnkle2LHeel)
        delete(RAnkle2LHeel)
        delete(LHeel2Toe)
        delete(RHeel2Toe)
        delete(platform)
        delete(h)
        if nargin > 6
            delete(landmark1)
            delete(landmark2)
            delete(base2ray1)
            delete(base2ray2)
        end
    end
    
    if want_record == 1
        close(video_obj)
    end
end

function [LHip,LKnee,LAnkle,LToe,LHeel]=L_position(q)
    Aw2b = [cos(q(3)) 0 sin(q(3)) q(1);
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
    Tankle2toe_left=[1,0,0, 0.075;
                      0,1,0, 0;
                      0,0,1,-0.025;
                      0,0,0,1];
    Tankle2heel_left=[1,0,0,-0.075;
                       0,1,0, 0;
                       0,0,1,-0.025;
                       0,0,0,1]; 
    Tw2Lhip=Aw2b*Tb2hip_left;
    Tw2Lknee=Aw2b*Tb2hip_left*Thip2knee_left;
    Tw2Lankle=Aw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left;
    Tw2Ltoe=Aw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2toe_left;
    Tw2Lheel=Aw2b*Tb2hip_left*Thip2knee_left*Tknee2ankle_left*Tankle2heel_left;
    LHip=[Tw2Lhip(1,4),Tw2Lhip(3,4)];
    LKnee=[Tw2Lknee(1,4),Tw2Lknee(3,4)];
    LAnkle=[Tw2Lankle(1,4),Tw2Lankle(3,4)];
    LToe=[Tw2Ltoe(1,4),Tw2Ltoe(3,4)];
    LHeel=[Tw2Lheel(1,4),Tw2Lheel(3,4)];
end
function [RHip,RKnee,RAnkle,RToe,RHeel]=R_position(q)
    % world frame to base frame
    Aw2b = [cos(q(3)) 0 sin(q(3)) q(1);
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
    Tw2Rhip=Aw2b*Tb2hip_right;
    Tw2Rknee=Aw2b*Tb2hip_right*Thip2knee_right;
    Tw2Rankle=Aw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right;
    Tw2Rtoe=Aw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2toe_right;
    Tw2Rheel=Aw2b*Tb2hip_right*Thip2knee_right*Tknee2ankle_right*Tankle2heel_right;
    RHip=[Tw2Rhip(1,4),Tw2Rhip(3,4)];
    RKnee=[Tw2Rknee(1,4),Tw2Rknee(3,4)];
    RAnkle=[Tw2Rankle(1,4),Tw2Rankle(3,4)];
    RToe=[Tw2Rtoe(1,4),Tw2Rtoe(3,4)];
    RHeel=[Tw2Rheel(1,4),Tw2Rheel(3,4)];
end
function Head=upper_body(q)
    Aw2b = [cos(q(3)) 0 sin(q(3)) q(1);
            0         1 0         0;
           -sin(q(3)) 0 cos(q(3)) q(2);
            0         0 0         1];

    Tb2head = [1 0 0 0;
               0 1 0 0;
               0 0 1 0.3;
               0 0 0 1];

    
    Tw2head = Aw2b*Tb2head;
    Head = [Tw2head(1,4),Tw2head(3,4)];
end