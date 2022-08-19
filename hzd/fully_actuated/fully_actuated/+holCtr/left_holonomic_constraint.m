function hol_ctr = left_holonomic_constraint(q)
    hol_ctr = ForwardKinematics.LFootPose(q);
end