function jj_hc = jj_hc_L(q,dq)
    jj_hc = numeric_jacobian(@testingL,q)*dq;
end

function ans_ = testingL(q)
    global dq_glb
    ans_ = numeric_jacobian(@OutputFunction.hc_L,q)*dq_glb;
end