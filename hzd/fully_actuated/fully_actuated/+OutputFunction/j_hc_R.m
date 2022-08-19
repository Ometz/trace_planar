function j_hc = j_hc_R(q)
    j_hc = numeric_jacobian(@OutputFunction.hc_R,q);
end