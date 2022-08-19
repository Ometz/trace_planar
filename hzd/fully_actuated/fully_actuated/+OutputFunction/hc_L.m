function hc = hc_L(q)
    support_foot = ForwardKinematics.LFootPose(q);
    support_foot(1);
    hc = [q(2);
          q(3);
          ForwardKinematics.RFootPose(q)-[support_foot(1);0;0]];
    %hc = [q(2);
    %      q(3);
    %      ForwardKinematics.RFootPose_b(q)];
end