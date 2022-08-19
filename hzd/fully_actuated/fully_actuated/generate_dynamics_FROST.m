clear; close all; clc;
restoredefaultpath; matlabrc;

% specify the path to the FROST
frost_path  = '/home/yuan/Dropbox/UML/research/FROST/frost-dev';
addpath(frost_path);
frost_addpath; % initialize FROST
export_path = 'gen/opt'; % path to export compiled C++ and MEX files
utils.init_path(export_path);
%%
robot= RobotLinks('seven_link_walker.urdf','planar');
robot.configureDynamics;
%%
Mass=robot.Mmat;
export(Mass,'gen_v2')
%%
Fvec=robot.Fvec;
for i=1:28
    c=Fvec{i};
    export(c,'gen_v2')
end
