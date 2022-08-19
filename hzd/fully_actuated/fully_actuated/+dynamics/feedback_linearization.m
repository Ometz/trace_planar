function u = feedback_linearization(t,t_i_global,x,D,c_overall,B_overall,foot_index,Alpha,...
    current_stance_foot_position)
    global y_overall dy_overall norm_u_overall error_overall
    %u = zeros(6,1);
    
    
            if foot_index==1
            
                %is it alpha(?) or current_stance_foot_position
            theta_plus = alpha(?) -
            theta_minus = (Alpha(42)-StanceFeet(1))/4;
        
        elseif foot_index==2
            
            theta_plus = (Alpha(36)-StanceFeet(7))/4;
            theta_minus = (Alpha(42)-StanceFeet(7))/4;
            
            
    
    [ph,dph,~]=laikago_new_Bezier_6th(Alpha,s);
   
    
    
end