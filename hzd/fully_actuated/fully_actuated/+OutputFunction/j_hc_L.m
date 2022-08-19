function j_hc = j_hc_L(q)
    j_hc = numeric_jacobian(@OutputFunction.hc_L,q);
end