function [value,isterminal,direction] = switch_event(t,x,foot_index)
    global t_global
    q=x(1:9);
    
    %value=10;
    
    if foot_index == -1
        swing_foot_pose=ForwardKinematics.LFootPose(q);
        %support_foot_pose = Rfoot_pose_func(q);
    elseif foot_index == 1
        swing_foot_pose=ForwardKinematics.RFootPose(q);
        %support_foot_pose = Lfoot_pose_func(q);
    end
    %[p_pf,~,~] = dynamics.platform_motion(t_global(end),foot_index);
    %[p_pf,~,~] = pitching_platform(t_global(end),x,foot_index);
    if t>0.1
       
        value = swing_foot_pose(2)
        value = 10;
    else 
        value=10;
    end

    isterminal=1;
    direction=-1;
end