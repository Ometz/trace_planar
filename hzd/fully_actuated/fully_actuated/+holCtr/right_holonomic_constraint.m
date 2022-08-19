function hol_ctr = right_holonomic_constraint(q)
    hol_ctr = ForwardKinematics.RFootPose(q);
end