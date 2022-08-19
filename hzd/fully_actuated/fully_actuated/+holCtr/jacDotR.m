function jj_c = jacDotR(q,dq)
    jj_c = numeric_jacobian(@testingR,q)*dq;
end

function ans_ = testingR(q)
    global dq_glb
    ans_ = numeric_jacobian(@holCtr.right_holonomic_constraint,q)*dq_glb;
end