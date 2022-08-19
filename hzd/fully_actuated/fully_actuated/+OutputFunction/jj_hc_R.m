function jj_hc = jj_hc_R(q,dq)
    jj_hc = numeric_jacobian(@testingR,q)*dq;
end

function ans_ = testingR(q)
    global dq_glb
    ans_ = numeric_jacobian(@OutputFunction.hc_R,q)*dq_glb;
end