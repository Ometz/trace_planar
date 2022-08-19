function [torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory(t)
    global t_global x_torso_desired_overall 
        
    
    

    %a=0.2*sin(pi/8);
    %a=0.009;
    %b=0.05;
    %b=0;
    %b= -0.3333;
    a = 0.55;
    b= 0;
    x_torso_desired = b+a*t_global(end);

        
    x_torso_desired_overall=[x_torso_desired_overall;x_torso_desired];
    torso_desired=x_torso_desired;
    dx_torso_desired=a;

    dtorso_desired=dx_torso_desired;

    ddx_torso_desired=0;

    ddtorso_desired=ddx_torso_desired;


        
   
    
    
end