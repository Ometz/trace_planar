function hc = hc_R(q)
    support_foot = ForwardKinematics.RFootPose(q);
    support_foot(1);
    hc = [q(2);
          q(3);
          ForwardKinematics.LFootPose(q)-[support_foot(1);0;0]];
    %hc = [q(2);
    %      q(3);
    %      ForwardKinematics.LFootPose_b(q)];
end