/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:20 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t4028;
  double t4025;
  double t4026;
  double t4029;
  double t4087;
  double t4070;
  double t4112;
  double t3999;
  double t4111;
  double t4113;
  double t4114;
  double t4121;
  double t4122;
  double t4123;
  double t4094;
  double t4095;
  double t4101;
  double t4107;
  double t4108;
  double t4124;
  double t4136;
  double t4137;
  double t4138;
  double t4076;
  double t4082;
  double t4083;
  double t4154;
  double t4155;
  double t4156;
  double t4157;
  double t4158;
  double t4027;
  double t4044;
  double t4068;
  double t4069;
  double t4084;
  double t4085;
  double t4115;
  double t4125;
  double t4126;
  double t4127;
  double t4128;
  double t4129;
  double t4130;
  double t4131;
  double t4178;
  double t4179;
  double t4174;
  double t4175;
  double t4176;
  double t4139;
  double t4140;
  double t4141;
  double t4142;
  double t4143;
  double t4144;
  double t4145;
  double t4146;
  double t4192;
  double t4189;
  double t4190;
  double t4193;
  double t4203;
  double t4213;
  double t4212;
  double t4214;
  double t4215;
  double t4217;
  double t4218;
  double t4219;
  double t4205;
  double t4206;
  double t4207;
  double t4208;
  double t4209;
  double t4220;
  double t4232;
  double t4233;
  double t4234;
  double t4197;
  double t4198;
  double t4199;
  double t4250;
  double t4251;
  double t4252;
  double t4253;
  double t4254;
  double t4191;
  double t4194;
  double t4195;
  double t4196;
  double t4200;
  double t4201;
  double t4216;
  double t4221;
  double t4222;
  double t4223;
  double t4224;
  double t4225;
  double t4226;
  double t4227;
  double t4274;
  double t4275;
  double t4270;
  double t4271;
  double t4272;
  double t4235;
  double t4236;
  double t4237;
  double t4238;
  double t4239;
  double t4240;
  double t4241;
  double t4242;
  double t4150;
  double t4151;
  double t4152;
  double t4285;
  double t4286;
  double t4287;
  double t4246;
  double t4247;
  double t4248;
  double t4293;
  double t4294;
  double t4295;
  double t4166;
  double t4162;
  double t4163;
  double t4164;
  double t4165;
  double t4167;
  double t4262;
  double t4258;
  double t4259;
  double t4260;
  double t4261;
  double t4263;
  double t4289;
  double t4290;
  double t4291;
  double t4297;
  double t4298;
  double t4299;
  double t4301;
  double t4302;
  double t4304;
  double t4305;
  double t4306;
  double t4308;
  double t4309;
  double t4311;
  double t4312;
  double t4313;
  double t4315;
  double t4316;
  double t4317;
  double t4319;
  double t4320;
  double t4321;
  double t4323;
  double t4324;
  double t4325;
  double t4327;
  double t4328;
  double t4329;
  double t4412;
  double t4413;
  double t4414;
  double t4416;
  double t4417;
  double t4418;
  double t4426;
  double t4427;
  double t4428;
  double t4430;
  double t4431;
  double t4432;
  double t4444;
  double t4445;
  double t4446;
  double t4440;
  double t4441;
  double t4442;
  double t4458;
  double t4459;
  double t4460;
  double t4454;
  double t4455;
  double t4456;
  double t4093;
  double t4109;
  double t4110;
  double t4133;
  double t4134;
  double t4135;
  double t4153;
  double t4159;
  double t4160;
  double t4161;
  double t4169;
  double t4170;
  double t4171;
  double t4172;
  double t4472;
  double t4473;
  double t4474;
  double t4475;
  double t4476;
  double t4177;
  double t4180;
  double t4181;
  double t4478;
  double t4479;
  double t4480;
  double t4481;
  double t4482;
  double t4183;
  double t4184;
  double t4185;
  double t4484;
  double t4485;
  double t4486;
  double t4487;
  double t4288;
  double t4292;
  double t4333;
  double t4334;
  double t4335;
  double t4336;
  double t4337;
  double t4338;
  double t4339;
  double t4340;
  double t4341;
  double t4351;
  double t4376;
  double t4379;
  double t4400;
  double t4401;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4415;
  double t4419;
  double t4420;
  double t4422;
  double t4423;
  double t4424;
  double t4521;
  double t4522;
  double t4523;
  double t4443;
  double t4447;
  double t4448;
  double t4450;
  double t4451;
  double t4452;
  double t4539;
  double t4540;
  double t4541;
  double t4204;
  double t4210;
  double t4211;
  double t4229;
  double t4230;
  double t4231;
  double t4249;
  double t4255;
  double t4256;
  double t4257;
  double t4265;
  double t4266;
  double t4267;
  double t4268;
  double t4557;
  double t4558;
  double t4559;
  double t4560;
  double t4561;
  double t4273;
  double t4276;
  double t4277;
  double t4563;
  double t4564;
  double t4565;
  double t4566;
  double t4567;
  double t4279;
  double t4280;
  double t4281;
  double t4569;
  double t4570;
  double t4571;
  double t4572;
  double t4296;
  double t4300;
  double t4342;
  double t4343;
  double t4344;
  double t4345;
  double t4346;
  double t4347;
  double t4348;
  double t4349;
  double t4350;
  double t4362;
  double t4388;
  double t4391;
  double t4406;
  double t4407;
  double t4408;
  double t4409;
  double t4410;
  double t4411;
  double t4429;
  double t4433;
  double t4434;
  double t4436;
  double t4437;
  double t4438;
  double t4606;
  double t4607;
  double t4608;
  double t4457;
  double t4461;
  double t4462;
  double t4464;
  double t4465;
  double t4466;
  double t4624;
  double t4625;
  double t4626;
  double t4477;
  double t4643;
  double t4644;
  double t4645;
  double t4491;
  double t4492;
  double t4669;
  double t4670;
  double t4671;
  double t4666;
  double t4667;
  double t4646;
  double t4647;
  double t4648;
  double t4649;
  double t4650;
  double t4651;
  double t4652;
  double t4497;
  double t4498;
  double t4503;
  double t4504;
  double t4505;
  double t4506;
  double t4507;
  double t4508;
  double t4519;
  double t4520;
  double t4525;
  double t4529;
  double t4530;
  double t4698;
  double t4699;
  double t4701;
  double t4702;
  double t4533;
  double t4717;
  double t4718;
  double t4719;
  double t4712;
  double t4713;
  double t4714;
  double t4562;
  double t4735;
  double t4736;
  double t4737;
  double t4576;
  double t4577;
  double t4761;
  double t4762;
  double t4763;
  double t4758;
  double t4759;
  double t4738;
  double t4739;
  double t4740;
  double t4741;
  double t4742;
  double t4743;
  double t4744;
  double t4582;
  double t4583;
  double t4588;
  double t4589;
  double t4590;
  double t4591;
  double t4592;
  double t4593;
  double t4604;
  double t4605;
  double t4610;
  double t4614;
  double t4615;
  double t4790;
  double t4791;
  double t4793;
  double t4794;
  double t4618;
  double t4809;
  double t4810;
  double t4811;
  double t4804;
  double t4805;
  double t4806;
  double t4642;
  double t4653;
  double t4664;
  double t4665;
  double t4673;
  double t4677;
  double t4679;
  double t4682;
  double t4685;
  double t4686;
  double t4689;
  double t4690;
  double t4691;
  double t4692;
  double t4693;
  double t4694;
  double t4695;
  double t4710;
  double t4711;
  double t4716;
  double t4723;
  double t4726;
  double t4727;
  double t4734;
  double t4745;
  double t4756;
  double t4757;
  double t4765;
  double t4769;
  double t4771;
  double t4774;
  double t4777;
  double t4778;
  double t4781;
  double t4782;
  double t4783;
  double t4784;
  double t4785;
  double t4786;
  double t4787;
  double t4802;
  double t4803;
  double t4808;
  double t4815;
  double t4818;
  double t4819;
  t4028 = Cos(var1[3]);
  t4025 = Cos(var1[5]);
  t4026 = Sin(var1[3]);
  t4029 = Sin(var1[5]);
  t4087 = Cos(var1[7]);
  t4070 = Sin(var1[2]);
  t4112 = Sin(var1[7]);
  t3999 = Cos(var1[2]);
  t4111 = -1.*t4087*t4029;
  t4113 = -1.*t4025*t4112;
  t4114 = t4111 + t4113;
  t4121 = t4025*t4087;
  t4122 = -1.*t4029*t4112;
  t4123 = t4121 + t4122;
  t4094 = -1.*t4087;
  t4095 = 1. + t4094;
  t4101 = -0.8*t4095;
  t4107 = -0.8*t4087;
  t4108 = t4101 + t4107;
  t4124 = t4028*t4123;
  t4136 = t4087*t4029;
  t4137 = t4025*t4112;
  t4138 = t4136 + t4137;
  t4076 = t4028*t4025;
  t4082 = -1.*t4026*t4029;
  t4083 = t4076 + t4082;
  t4154 = -1.*t4025;
  t4155 = 1. + t4154;
  t4156 = -0.4*t4155;
  t4157 = -0.51*t4025;
  t4158 = t4156 + t4157;
  t4027 = -1.*t4025*t4026;
  t4044 = -1.*t4028*t4029;
  t4068 = t4027 + t4044;
  t4069 = t3999*t4068;
  t4084 = -1.*t4070*t4083;
  t4085 = t4069 + t4084;
  t4115 = t4026*t4114;
  t4125 = t4115 + t4124;
  t4126 = -1.*t4070*t4125;
  t4127 = t4028*t4114;
  t4128 = -1.*t4026*t4123;
  t4129 = t4127 + t4128;
  t4130 = t3999*t4129;
  t4131 = t4126 + t4130;
  t4178 = t4025*t4108;
  t4179 = t4156 + t4178;
  t4174 = 0.4*t4029;
  t4175 = t4108*t4029;
  t4176 = t4174 + t4175;
  t4139 = -1.*t4026*t4138;
  t4140 = t4139 + t4124;
  t4141 = t3999*t4140;
  t4142 = t4028*t4138;
  t4143 = t4026*t4123;
  t4144 = t4142 + t4143;
  t4145 = -1.*t4070*t4144;
  t4146 = t4141 + t4145;
  t4192 = Cos(var1[4]);
  t4189 = Cos(var1[6]);
  t4190 = Sin(var1[4]);
  t4193 = Sin(var1[6]);
  t4203 = Cos(var1[8]);
  t4213 = Sin(var1[8]);
  t4212 = -1.*t4203*t4193;
  t4214 = -1.*t4189*t4213;
  t4215 = t4212 + t4214;
  t4217 = t4189*t4203;
  t4218 = -1.*t4193*t4213;
  t4219 = t4217 + t4218;
  t4205 = -1.*t4203;
  t4206 = 1. + t4205;
  t4207 = -0.8*t4206;
  t4208 = -0.8*t4203;
  t4209 = t4207 + t4208;
  t4220 = t4192*t4219;
  t4232 = t4203*t4193;
  t4233 = t4189*t4213;
  t4234 = t4232 + t4233;
  t4197 = t4192*t4189;
  t4198 = -1.*t4190*t4193;
  t4199 = t4197 + t4198;
  t4250 = -1.*t4189;
  t4251 = 1. + t4250;
  t4252 = -0.4*t4251;
  t4253 = -0.51*t4189;
  t4254 = t4252 + t4253;
  t4191 = -1.*t4189*t4190;
  t4194 = -1.*t4192*t4193;
  t4195 = t4191 + t4194;
  t4196 = t3999*t4195;
  t4200 = -1.*t4070*t4199;
  t4201 = t4196 + t4200;
  t4216 = t4190*t4215;
  t4221 = t4216 + t4220;
  t4222 = -1.*t4070*t4221;
  t4223 = t4192*t4215;
  t4224 = -1.*t4190*t4219;
  t4225 = t4223 + t4224;
  t4226 = t3999*t4225;
  t4227 = t4222 + t4226;
  t4274 = t4189*t4209;
  t4275 = t4252 + t4274;
  t4270 = 0.4*t4193;
  t4271 = t4209*t4193;
  t4272 = t4270 + t4271;
  t4235 = -1.*t4190*t4234;
  t4236 = t4235 + t4220;
  t4237 = t3999*t4236;
  t4238 = t4192*t4234;
  t4239 = t4190*t4219;
  t4240 = t4238 + t4239;
  t4241 = -1.*t4070*t4240;
  t4242 = t4237 + t4241;
  t4150 = -1.*t4028*t4070;
  t4151 = -1.*t3999*t4026;
  t4152 = t4150 + t4151;
  t4285 = t3999*t4028;
  t4286 = -1.*t4070*t4026;
  t4287 = t4285 + t4286;
  t4246 = -1.*t4192*t4070;
  t4247 = -1.*t3999*t4190;
  t4248 = t4246 + t4247;
  t4293 = t3999*t4192;
  t4294 = -1.*t4070*t4190;
  t4295 = t4293 + t4294;
  t4166 = t3999*t4083;
  t4162 = t4025*t4026;
  t4163 = t4028*t4029;
  t4164 = t4162 + t4163;
  t4165 = -1.*t4070*t4164;
  t4167 = t4165 + t4166;
  t4262 = t3999*t4199;
  t4258 = t4189*t4190;
  t4259 = t4192*t4193;
  t4260 = t4258 + t4259;
  t4261 = -1.*t4070*t4260;
  t4263 = t4261 + t4262;
  t4289 = t4028*t4070;
  t4290 = t3999*t4026;
  t4291 = t4289 + t4290;
  t4297 = t4192*t4070;
  t4298 = t3999*t4190;
  t4299 = t4297 + t4298;
  t4301 = t4070*t4068;
  t4302 = t4301 + t4166;
  t4304 = t3999*t4164;
  t4305 = t4070*t4083;
  t4306 = t4304 + t4305;
  t4308 = t4070*t4195;
  t4309 = t4308 + t4262;
  t4311 = t3999*t4260;
  t4312 = t4070*t4199;
  t4313 = t4311 + t4312;
  t4315 = t3999*t4125;
  t4316 = t4070*t4129;
  t4317 = t4315 + t4316;
  t4319 = t4070*t4140;
  t4320 = t3999*t4144;
  t4321 = t4319 + t4320;
  t4323 = t3999*t4221;
  t4324 = t4070*t4225;
  t4325 = t4323 + t4324;
  t4327 = t4070*t4236;
  t4328 = t3999*t4240;
  t4329 = t4327 + t4328;
  t4412 = t4158*t4026;
  t4413 = -0.11*t4028*t4029;
  t4414 = t4412 + t4413;
  t4416 = t4028*t4158;
  t4417 = 0.11*t4026*t4029;
  t4418 = t4416 + t4417;
  t4426 = t4254*t4190;
  t4427 = -0.11*t4192*t4193;
  t4428 = t4426 + t4427;
  t4430 = t4192*t4254;
  t4431 = 0.11*t4190*t4193;
  t4432 = t4430 + t4431;
  t4444 = t4028*t4179;
  t4445 = -1.*t4026*t4176;
  t4446 = t4444 + t4445;
  t4440 = t4179*t4026;
  t4441 = t4028*t4176;
  t4442 = t4440 + t4441;
  t4458 = t4192*t4275;
  t4459 = -1.*t4190*t4272;
  t4460 = t4458 + t4459;
  t4454 = t4275*t4190;
  t4455 = t4192*t4272;
  t4456 = t4454 + t4455;
  t4093 = 0.4*t4087;
  t4109 = t4108*t4087;
  t4110 = t4093 + t4109;
  t4133 = 0.4*t4112;
  t4134 = t4108*t4112;
  t4135 = t4133 + t4134;
  t4153 = 0.748*t4152;
  t4159 = t4158*t4029;
  t4160 = 0.11*t4025*t4029;
  t4161 = t4159 + t4160;
  t4169 = t4158*t4025;
  t4170 = Power(t4029,2);
  t4171 = -0.11*t4170;
  t4172 = t4169 + t4171;
  t4472 = -1.*t4028*t4025;
  t4473 = t4026*t4029;
  t4474 = t4472 + t4473;
  t4475 = t4070*t4474;
  t4476 = t4069 + t4475;
  t4177 = t4176*t4138;
  t4180 = t4179*t4123;
  t4181 = t4177 + t4180;
  t4478 = -1.*t4026*t4114;
  t4479 = -1.*t4028*t4123;
  t4480 = t4478 + t4479;
  t4481 = t4070*t4480;
  t4482 = t4481 + t4130;
  t4183 = -1.*t4179*t4114;
  t4184 = -1.*t4176*t4123;
  t4185 = t4183 + t4184;
  t4484 = -1.*t4028*t4138;
  t4485 = t4484 + t4128;
  t4486 = t4070*t4485;
  t4487 = t4141 + t4486;
  t4288 = -13.6*t4152*t4287;
  t4292 = -13.6*t4291*t4287;
  t4333 = Power(t4152,2);
  t4334 = -6.8*t4333;
  t4335 = -6.8*t4152*t4291;
  t4336 = Power(t4287,2);
  t4337 = -6.8*t4336;
  t4338 = -1.*t3999*t4028;
  t4339 = t4070*t4026;
  t4340 = t4338 + t4339;
  t4341 = -6.8*t4287*t4340;
  t4351 = -1.*t4070*t4068;
  t4376 = -1.*t4070*t4129;
  t4379 = -1.*t4070*t4140;
  t4400 = Power(t4028,2);
  t4401 = -0.11*t4400;
  t4402 = Power(t4026,2);
  t4403 = -0.11*t4402;
  t4404 = t4401 + t4403;
  t4405 = -6.8*t4152*t4404;
  t4415 = -1.*t4414*t4083;
  t4419 = -1.*t4068*t4418;
  t4420 = t4415 + t4419;
  t4422 = t4414*t4164;
  t4423 = t4083*t4418;
  t4424 = t4422 + t4423;
  t4521 = -1.*t4158*t4026;
  t4522 = 0.11*t4028*t4029;
  t4523 = t4521 + t4522;
  t4443 = -1.*t4442*t4125;
  t4447 = -1.*t4446*t4129;
  t4448 = t4443 + t4447;
  t4450 = t4446*t4140;
  t4451 = t4442*t4144;
  t4452 = t4450 + t4451;
  t4539 = -1.*t4179*t4026;
  t4540 = -1.*t4028*t4176;
  t4541 = t4539 + t4540;
  t4204 = 0.4*t4203;
  t4210 = t4209*t4203;
  t4211 = t4204 + t4210;
  t4229 = 0.4*t4213;
  t4230 = t4209*t4213;
  t4231 = t4229 + t4230;
  t4249 = 0.748*t4248;
  t4255 = t4254*t4193;
  t4256 = 0.11*t4189*t4193;
  t4257 = t4255 + t4256;
  t4265 = t4254*t4189;
  t4266 = Power(t4193,2);
  t4267 = -0.11*t4266;
  t4268 = t4265 + t4267;
  t4557 = -1.*t4192*t4189;
  t4558 = t4190*t4193;
  t4559 = t4557 + t4558;
  t4560 = t4070*t4559;
  t4561 = t4196 + t4560;
  t4273 = t4272*t4234;
  t4276 = t4275*t4219;
  t4277 = t4273 + t4276;
  t4563 = -1.*t4190*t4215;
  t4564 = -1.*t4192*t4219;
  t4565 = t4563 + t4564;
  t4566 = t4070*t4565;
  t4567 = t4566 + t4226;
  t4279 = -1.*t4275*t4215;
  t4280 = -1.*t4272*t4219;
  t4281 = t4279 + t4280;
  t4569 = -1.*t4192*t4234;
  t4570 = t4569 + t4224;
  t4571 = t4070*t4570;
  t4572 = t4237 + t4571;
  t4296 = -13.6*t4248*t4295;
  t4300 = -13.6*t4299*t4295;
  t4342 = Power(t4248,2);
  t4343 = -6.8*t4342;
  t4344 = -6.8*t4248*t4299;
  t4345 = Power(t4295,2);
  t4346 = -6.8*t4345;
  t4347 = -1.*t3999*t4192;
  t4348 = t4070*t4190;
  t4349 = t4347 + t4348;
  t4350 = -6.8*t4295*t4349;
  t4362 = -1.*t4070*t4195;
  t4388 = -1.*t4070*t4225;
  t4391 = -1.*t4070*t4236;
  t4406 = Power(t4192,2);
  t4407 = -0.11*t4406;
  t4408 = Power(t4190,2);
  t4409 = -0.11*t4408;
  t4410 = t4407 + t4409;
  t4411 = -6.8*t4248*t4410;
  t4429 = -1.*t4428*t4199;
  t4433 = -1.*t4195*t4432;
  t4434 = t4429 + t4433;
  t4436 = t4428*t4260;
  t4437 = t4199*t4432;
  t4438 = t4436 + t4437;
  t4606 = -1.*t4254*t4190;
  t4607 = 0.11*t4192*t4193;
  t4608 = t4606 + t4607;
  t4457 = -1.*t4456*t4221;
  t4461 = -1.*t4460*t4225;
  t4462 = t4457 + t4461;
  t4464 = t4460*t4236;
  t4465 = t4456*t4240;
  t4466 = t4464 + t4465;
  t4624 = -1.*t4275*t4190;
  t4625 = -1.*t4192*t4272;
  t4626 = t4624 + t4625;
  t4477 = 0.748*t4476;
  t4643 = -1.*t4025*t4087;
  t4644 = t4029*t4112;
  t4645 = t4643 + t4644;
  t4491 = -6.8*t4161*t4302;
  t4492 = -6.8*t4172*t4476;
  t4669 = -0.4*t4029;
  t4670 = -1.*t4108*t4029;
  t4671 = t4669 + t4670;
  t4666 = 0.4*t4025;
  t4667 = t4666 + t4178;
  t4646 = t4028*t4645;
  t4647 = t4478 + t4646;
  t4648 = t4070*t4647;
  t4649 = t4026*t4645;
  t4650 = t4127 + t4649;
  t4651 = t3999*t4650;
  t4652 = t4648 + t4651;
  t4497 = -13.6*t4302*t4306;
  t4498 = -13.6*t4302*t4476;
  t4503 = -6.8*t4302*t4167;
  t4504 = -6.8*t4085*t4306;
  t4505 = t3999*t4474;
  t4506 = t4351 + t4505;
  t4507 = -6.8*t4302*t4506;
  t4508 = -6.8*t4085*t4476;
  t4519 = -6.8*t4302*t4420;
  t4520 = t4414*t4083;
  t4525 = t4068*t4418;
  t4529 = -6.8*t4424*t4476;
  t4530 = -1.*t4068*t4414;
  t4698 = 0.11*t4025*t4026;
  t4699 = t4698 + t4522;
  t4701 = -0.11*t4028*t4025;
  t4702 = t4701 + t4417;
  t4533 = -1.*t4418*t4474;
  t4717 = t4028*t4667;
  t4718 = t4026*t4671;
  t4719 = t4717 + t4718;
  t4712 = -1.*t4667*t4026;
  t4713 = t4028*t4671;
  t4714 = t4712 + t4713;
  t4562 = 0.748*t4561;
  t4735 = -1.*t4189*t4203;
  t4736 = t4193*t4213;
  t4737 = t4735 + t4736;
  t4576 = -6.8*t4257*t4309;
  t4577 = -6.8*t4268*t4561;
  t4761 = -0.4*t4193;
  t4762 = -1.*t4209*t4193;
  t4763 = t4761 + t4762;
  t4758 = 0.4*t4189;
  t4759 = t4758 + t4274;
  t4738 = t4192*t4737;
  t4739 = t4563 + t4738;
  t4740 = t4070*t4739;
  t4741 = t4190*t4737;
  t4742 = t4223 + t4741;
  t4743 = t3999*t4742;
  t4744 = t4740 + t4743;
  t4582 = -13.6*t4309*t4313;
  t4583 = -13.6*t4309*t4561;
  t4588 = -6.8*t4309*t4263;
  t4589 = -6.8*t4201*t4313;
  t4590 = t3999*t4559;
  t4591 = t4362 + t4590;
  t4592 = -6.8*t4309*t4591;
  t4593 = -6.8*t4201*t4561;
  t4604 = -6.8*t4309*t4434;
  t4605 = t4428*t4199;
  t4610 = t4195*t4432;
  t4614 = -6.8*t4438*t4561;
  t4615 = -1.*t4195*t4428;
  t4790 = 0.11*t4189*t4190;
  t4791 = t4790 + t4607;
  t4793 = -0.11*t4192*t4189;
  t4794 = t4793 + t4431;
  t4618 = -1.*t4432*t4559;
  t4809 = t4192*t4759;
  t4810 = t4190*t4763;
  t4811 = t4809 + t4810;
  t4804 = -1.*t4759*t4190;
  t4805 = t4192*t4763;
  t4806 = t4804 + t4805;
  t4642 = -0.3*t4135*t4317;
  t4653 = -0.3*t4110*t4652;
  t4664 = -0.3*t4185*t4317;
  t4665 = t4179*t4114;
  t4673 = t4176*t4123;
  t4677 = -1.*t4176*t4114;
  t4679 = -1.*t4179*t4645;
  t4682 = -0.3*t4181*t4652;
  t4685 = -0.6*t4317*t4321;
  t4686 = -0.6*t4317*t4652;
  t4689 = -0.3*t4131*t4321;
  t4690 = -0.3*t4317*t4146;
  t4691 = -0.3*t4131*t4652;
  t4692 = t3999*t4647;
  t4693 = -1.*t4070*t4650;
  t4694 = t4692 + t4693;
  t4695 = -0.3*t4317*t4694;
  t4710 = -0.3*t4317*t4448;
  t4711 = t4442*t4125;
  t4716 = t4446*t4129;
  t4723 = -0.3*t4452*t4652;
  t4726 = -1.*t4446*t4647;
  t4727 = -1.*t4442*t4650;
  t4734 = -0.3*t4231*t4325;
  t4745 = -0.3*t4211*t4744;
  t4756 = -0.3*t4281*t4325;
  t4757 = t4275*t4215;
  t4765 = t4272*t4219;
  t4769 = -1.*t4272*t4215;
  t4771 = -1.*t4275*t4737;
  t4774 = -0.3*t4277*t4744;
  t4777 = -0.6*t4325*t4329;
  t4778 = -0.6*t4325*t4744;
  t4781 = -0.3*t4227*t4329;
  t4782 = -0.3*t4325*t4242;
  t4783 = -0.3*t4227*t4744;
  t4784 = t3999*t4739;
  t4785 = -1.*t4070*t4742;
  t4786 = t4784 + t4785;
  t4787 = -0.3*t4325*t4786;
  t4802 = -0.3*t4325*t4462;
  t4803 = t4456*t4221;
  t4808 = t4460*t4225;
  t4815 = -0.3*t4466*t4744;
  t4818 = -1.*t4460*t4739;
  t4819 = -1.*t4456*t4742;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t4288 + t4292 + t4296 + t4300 - 13.6*t4085*t4302 - 13.6*t4167*t4306 - 13.6*t4201*t4309 - 13.6*t4263*t4313 - 0.6*t4131*t4317 - 0.6*t4146*t4321 - 0.6*t4227*t4325 - 0.6*t4242*t4329)*var2[0] - 0.5*(-6.8*Power(t4085,2) - 0.3*Power(t4131,2) - 0.3*Power(t4146,2) - 6.8*Power(t4167,2) - 6.8*Power(t4201,2) - 0.3*Power(t4227,2) - 0.3*Power(t4242,2) - 6.8*Power(t4263,2) - 6.8*(t4084 - 1.*t3999*t4164)*t4306 - 6.8*(t4200 - 1.*t3999*t4260)*t4313 + t4334 + t4335 + t4337 + t4341 + t4343 + t4344 + t4346 + t4350 - 6.8*t4302*(-1.*t3999*t4083 + t4351) - 6.8*t4309*(-1.*t3999*t4199 + t4362) - 0.3*t4317*(-1.*t3999*t4125 + t4376) - 0.3*t4321*(-1.*t3999*t4144 + t4379) - 0.3*t4325*(-1.*t3999*t4221 + t4388) - 0.3*t4329*(-1.*t3999*t4240 + t4391))*var2[1] - 0.5*(2.88*t4070 + t4405 + t4411 - 6.8*t4167*t4420 - 6.8*t4085*t4424 - 6.8*t4263*t4434 - 6.8*t4201*t4438 - 0.3*t4146*t4448 - 0.3*t4131*t4452 - 0.3*t4242*t4462 - 0.3*t4227*t4466)*var2[2] - 0.5*(t4153 - 6.8*t4161*t4167 - 6.8*t4085*t4172 - 0.3*t4131*t4181 - 0.3*t4146*t4185)*var2[3] - 0.5*(t4249 - 6.8*t4257*t4263 - 6.8*t4201*t4268 - 0.3*t4227*t4277 - 0.3*t4242*t4281)*var2[4] - 0.5*(0.748*t4085 - 0.3*t4110*t4131 - 0.3*t4135*t4146)*var2[5] - 0.5*(0.748*t4201 - 0.3*t4211*t4227 - 0.3*t4231*t4242)*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t4288 + t4292 - 0.6*t4317*t4482 - 0.6*t4321*t4487 + t4497 + t4498)*var2[0] - 0.5*(t4334 + t4335 + t4337 + t4341 - 0.3*t4317*(t4376 + t3999*t4480) - 0.3*t4131*t4482 - 0.3*t4321*(t4379 + t3999*t4485) - 0.3*t4146*t4487 + t4503 + t4504 + t4507 + t4508)*var2[1] - 0.5*(t4405 - 0.3*t4452*t4482 - 0.3*t4448*t4487 + t4519 - 6.8*t4302*(t4164*t4418 + t4520 + t4083*t4523 + t4525) + t4529 - 6.8*t4306*(-1.*t4083*t4418 - 1.*t4068*t4523 + t4530 + t4533) - 0.3*t4321*(-1.*t4129*t4442 - 1.*t4125*t4446 - 1.*t4446*t4480 - 1.*t4129*t4541) - 0.3*t4317*(t4140*t4442 + t4144*t4446 + t4446*t4485 + t4140*t4541))*var2[2] - 0.5*(t4153 - 0.3*t4181*t4482 - 0.3*t4185*t4487 + t4491 + t4492)*var2[3] - 0.5*(t4477 - 0.3*t4110*t4482 - 0.3*t4135*t4487)*var2[5]);
  p_output1[4]=var2[0]*(-0.5*(t4296 + t4300 - 0.6*t4325*t4567 - 0.6*t4329*t4572 + t4582 + t4583)*var2[0] - 0.5*(t4343 + t4344 + t4346 + t4350 - 0.3*t4325*(t4388 + t3999*t4565) - 0.3*t4227*t4567 - 0.3*t4329*(t4391 + t3999*t4570) - 0.3*t4242*t4572 + t4588 + t4589 + t4592 + t4593)*var2[1] - 0.5*(t4411 - 0.3*t4466*t4567 - 0.3*t4462*t4572 + t4604 - 6.8*t4309*(t4260*t4432 + t4605 + t4199*t4608 + t4610) + t4614 - 6.8*t4313*(-1.*t4199*t4432 - 1.*t4195*t4608 + t4615 + t4618) - 0.3*t4329*(-1.*t4225*t4456 - 1.*t4221*t4460 - 1.*t4460*t4565 - 1.*t4225*t4626) - 0.3*t4325*(t4236*t4456 + t4240*t4460 + t4460*t4570 + t4236*t4626))*var2[2] - 0.5*(t4249 - 0.3*t4277*t4567 - 0.3*t4281*t4572 + t4576 + t4577)*var2[4] - 0.5*(t4562 - 0.3*t4211*t4567 - 0.3*t4231*t4572)*var2[6]);
  p_output1[5]=var2[0]*(-0.5*(t4497 + t4498 + t4685 + t4686)*var2[0] - 0.5*(t4503 + t4504 + t4507 + t4508 + t4689 + t4690 + t4691 + t4695)*var2[1] - 0.5*(t4519 + t4529 - 6.8*t4306*(t4530 + t4533 - 1.*t4068*t4699 - 1.*t4083*t4702) - 6.8*t4302*(t4520 + t4525 + t4083*t4699 + t4164*t4702) + t4710 - 0.3*t4317*(t4711 + t4140*t4714 + t4716 + t4144*t4719) + t4723 - 0.3*t4321*(-1.*t4129*t4714 - 1.*t4125*t4719 + t4726 + t4727))*var2[2] - 0.5*(-6.8*(-0.11*t4025*t4029 - 1.*t4029*t4158)*t4302 - 6.8*(0.11*Power(t4025,2) + t4169)*t4306 + t4491 + t4492 + t4664 - 0.3*t4317*(t4665 + t4138*t4667 + t4123*t4671 + t4673) - 0.3*t4321*(-1.*t4123*t4667 - 1.*t4114*t4671 + t4677 + t4679) + t4682)*var2[3] - 0.5*(t4477 + t4642 + t4653)*var2[5]);
  p_output1[6]=var2[0]*(-0.5*(t4582 + t4583 + t4777 + t4778)*var2[0] - 0.5*(t4588 + t4589 + t4592 + t4593 + t4781 + t4782 + t4783 + t4787)*var2[1] - 0.5*(t4604 + t4614 - 6.8*t4313*(t4615 + t4618 - 1.*t4195*t4791 - 1.*t4199*t4794) - 6.8*t4309*(t4605 + t4610 + t4199*t4791 + t4260*t4794) + t4802 - 0.3*t4325*(t4803 + t4236*t4806 + t4808 + t4240*t4811) + t4815 - 0.3*t4329*(-1.*t4225*t4806 - 1.*t4221*t4811 + t4818 + t4819))*var2[2] - 0.5*(-6.8*(-0.11*t4189*t4193 - 1.*t4193*t4254)*t4309 - 6.8*(0.11*Power(t4189,2) + t4265)*t4313 + t4576 + t4577 + t4756 - 0.3*t4325*(t4757 + t4234*t4759 + t4219*t4763 + t4765) - 0.3*t4329*(-1.*t4219*t4759 - 1.*t4215*t4763 + t4769 + t4771) + t4774)*var2[4] - 0.5*(t4562 + t4734 + t4745)*var2[6]);
  p_output1[7]=var2[0]*(-0.5*(t4685 + t4686)*var2[0] - 0.5*(t4689 + t4690 + t4691 + t4695)*var2[1] - 0.5*(t4710 - 0.3*t4317*(t4711 + t4716) + t4723 - 0.3*t4321*(t4726 + t4727))*var2[2] - 0.5*(t4664 - 0.3*t4317*(t4665 + t4673) - 0.3*t4321*(t4677 + t4679) + t4682)*var2[3] - 0.5*(-0.3*(-0.4*t4112 - 1.*t4108*t4112)*t4317 - 0.3*t4110*t4321 + t4642 + t4653)*var2[5]);
  p_output1[8]=var2[0]*(-0.5*(t4777 + t4778)*var2[0] - 0.5*(t4781 + t4782 + t4783 + t4787)*var2[1] - 0.5*(t4802 - 0.3*t4325*(t4803 + t4808) + t4815 - 0.3*t4329*(t4818 + t4819))*var2[2] - 0.5*(t4756 - 0.3*t4325*(t4757 + t4765) - 0.3*t4329*(t4769 + t4771) + t4774)*var2[4] - 0.5*(-0.3*(-0.4*t4213 - 1.*t4209*t4213)*t4325 - 0.3*t4211*t4329 + t4734 + t4745)*var2[6]);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec1_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec1_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
