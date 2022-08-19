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
  double t4245;
  double t4378;
  double t4397;
  double t4381;
  double t4600;
  double t4627;
  double t4730;
  double t4750;
  double t4768;
  double t4814;
  double t4816;
  double t4821;
  double t4825;
  double t4828;
  double t4829;
  double t4830;
  double t4838;
  double t4842;
  double t4846;
  double t4831;
  double t4832;
  double t4836;
  double t4746;
  double t4754;
  double t4766;
  double t4847;
  double t4848;
  double t4849;
  double t4899;
  double t4913;
  double t4932;
  double t4933;
  double t4934;
  double t4952;
  double t4953;
  double t4954;
  double t4957;
  double t4958;
  double t4965;
  double t4966;
  double t4973;
  double t4959;
  double t4960;
  double t4963;
  double t4903;
  double t4917;
  double t4927;
  double t4974;
  double t4975;
  double t4976;
  double t4995;
  double t4996;
  double t4998;
  double t4999;
  double t5000;
  double t5001;
  double t5014;
  double t5002;
  double t5006;
  double t5008;
  double t5009;
  double t5010;
  double t5013;
  double t5015;
  double t5016;
  double t5018;
  double t5019;
  double t5020;
  double t5032;
  double t5051;
  double t5058;
  double t5059;
  double t5017;
  double t5037;
  double t5044;
  double t5045;
  double t5048;
  double t5039;
  double t5042;
  double t5043;
  double t5060;
  double t5061;
  double t5007;
  double t5011;
  double t5012;
  double t5063;
  double t5064;
  double t5065;
  double t5085;
  double t5086;
  double t5087;
  double t5091;
  double t5092;
  double t5093;
  double t5103;
  double t5094;
  double t5095;
  double t5097;
  double t5098;
  double t5099;
  double t5102;
  double t5104;
  double t5105;
  double t5119;
  double t5120;
  double t5121;
  double t5122;
  double t5142;
  double t5144;
  double t5145;
  double t5118;
  double t5123;
  double t5132;
  double t5136;
  double t5138;
  double t5125;
  double t5126;
  double t5127;
  double t5147;
  double t5148;
  double t5096;
  double t5100;
  double t5101;
  double t5152;
  double t5160;
  double t5161;
  double t4499;
  double t4500;
  double t4501;
  double t4527;
  double t4574;
  double t4662;
  double t4663;
  double t4668;
  double t4707;
  double t4720;
  double t4860;
  double t4837;
  double t4850;
  double t4854;
  double t4862;
  double t4863;
  double t4885;
  double t4981;
  double t4964;
  double t4977;
  double t4978;
  double t4988;
  double t4990;
  double t4991;
  double t5038;
  double t5049;
  double t5050;
  double t5080;
  double t5081;
  double t5083;
  double t5124;
  double t5139;
  double t5140;
  double t5172;
  double t5173;
  double t5179;
  double t5298;
  double t5299;
  double t5300;
  double t5278;
  double t5280;
  double t5281;
  double t5284;
  double t5285;
  double t5286;
  double t5287;
  double t5288;
  double t5293;
  double t5294;
  double t5295;
  double t5296;
  double t5297;
  double t5301;
  double t5302;
  double t5303;
  double t5308;
  double t5309;
  double t5310;
  double t5311;
  double t5312;
  double t5313;
  double t5314;
  double t5189;
  double t5192;
  double t5193;
  double t5194;
  double t4859;
  double t4861;
  double t5214;
  double t5329;
  double t5330;
  double t5331;
  double t4767;
  double t4817;
  double t4820;
  double t5326;
  double t5327;
  double t5328;
  double t5332;
  double t5333;
  double t5234;
  double t5062;
  double t5066;
  double t5067;
  double t5243;
  double t5075;
  double t5076;
  double t5077;
  double t4380;
  double t4467;
  double t4493;
  double t4599;
  double t5361;
  double t5362;
  double t5413;
  double t5414;
  double t5415;
  double t5396;
  double t5397;
  double t5398;
  double t5399;
  double t5400;
  double t5401;
  double t5402;
  double t5403;
  double t5408;
  double t5409;
  double t5410;
  double t5411;
  double t5412;
  double t5416;
  double t5417;
  double t5418;
  double t5423;
  double t5424;
  double t5425;
  double t5426;
  double t5427;
  double t5428;
  double t5429;
  double t5195;
  double t5196;
  double t5197;
  double t5210;
  double t4980;
  double t4982;
  double t5228;
  double t5444;
  double t5445;
  double t5446;
  double t4931;
  double t4935;
  double t4947;
  double t5441;
  double t5442;
  double t5443;
  double t5447;
  double t5448;
  double t5253;
  double t5151;
  double t5164;
  double t5167;
  double t5262;
  double t5169;
  double t5170;
  double t5171;
  double t4601;
  double t4637;
  double t4658;
  double t4724;
  double t5476;
  double t5477;
  double t5305;
  double t5306;
  double t5307;
  double t5520;
  double t5521;
  double t5523;
  double t5524;
  double t5525;
  double t5290;
  double t5291;
  double t5292;
  double t5530;
  double t5531;
  double t5532;
  double t5522;
  double t5526;
  double t5527;
  double t5538;
  double t5539;
  double t5540;
  double t5318;
  double t5319;
  double t5320;
  double t5321;
  double t5511;
  double t5512;
  double t5513;
  double t5514;
  double t5515;
  double t5516;
  double t5517;
  double t5323;
  double t5324;
  double t5325;
  double t5339;
  double t5340;
  double t5341;
  double t5519;
  double t5528;
  double t5529;
  double t5533;
  double t5534;
  double t5335;
  double t5336;
  double t5337;
  double t5536;
  double t5537;
  double t5541;
  double t5542;
  double t5543;
  double t5544;
  double t5545;
  double t5546;
  double t5547;
  double t5560;
  double t5561;
  double t5562;
  double t5363;
  double t5365;
  double t5366;
  double t5367;
  double t5368;
  double t5369;
  double t5370;
  double t5382;
  double t5383;
  double t5384;
  double t5375;
  double t5376;
  double t5377;
  double t5345;
  double t5347;
  double t5348;
  double t5349;
  double t5420;
  double t5421;
  double t5422;
  double t5619;
  double t5620;
  double t5622;
  double t5623;
  double t5624;
  double t5405;
  double t5406;
  double t5407;
  double t5629;
  double t5630;
  double t5631;
  double t5621;
  double t5625;
  double t5626;
  double t5637;
  double t5638;
  double t5639;
  double t5433;
  double t5434;
  double t5435;
  double t5436;
  double t5610;
  double t5611;
  double t5612;
  double t5613;
  double t5614;
  double t5615;
  double t5616;
  double t5438;
  double t5439;
  double t5440;
  double t5454;
  double t5455;
  double t5456;
  double t5618;
  double t5627;
  double t5628;
  double t5632;
  double t5633;
  double t5450;
  double t5451;
  double t5452;
  double t5635;
  double t5636;
  double t5640;
  double t5641;
  double t5642;
  double t5643;
  double t5644;
  double t5645;
  double t5646;
  double t5659;
  double t5660;
  double t5661;
  double t5478;
  double t5480;
  double t5481;
  double t5482;
  double t5483;
  double t5484;
  double t5485;
  double t5497;
  double t5498;
  double t5499;
  double t5490;
  double t5491;
  double t5492;
  double t5460;
  double t5462;
  double t5463;
  double t5464;
  double t5565;
  double t5567;
  double t5710;
  double t5571;
  double t5574;
  double t5716;
  double t5588;
  double t5590;
  double t5591;
  double t5592;
  double t5593;
  double t5599;
  double t5601;
  double t5602;
  double t5603;
  double t5604;
  double t5664;
  double t5666;
  double t5743;
  double t5670;
  double t5673;
  double t5749;
  double t5687;
  double t5689;
  double t5690;
  double t5691;
  double t5692;
  double t5698;
  double t5700;
  double t5701;
  double t5702;
  double t5703;
  t4245 = Sin(var1[2]);
  t4378 = Cos(var1[3]);
  t4397 = Sin(var1[3]);
  t4381 = Cos(var1[2]);
  t4600 = Cos(var1[4]);
  t4627 = Sin(var1[4]);
  t4730 = Cos(var1[5]);
  t4750 = Sin(var1[5]);
  t4768 = t4378*t4730;
  t4814 = -1.*t4397*t4750;
  t4816 = t4768 + t4814;
  t4821 = -1.*t4730;
  t4825 = 1. + t4821;
  t4828 = -0.4*t4825;
  t4829 = -0.51*t4730;
  t4830 = t4828 + t4829;
  t4838 = -1.*t4730*t4397;
  t4842 = -1.*t4378*t4750;
  t4846 = t4838 + t4842;
  t4831 = t4830*t4397;
  t4832 = -0.11*t4378*t4750;
  t4836 = t4831 + t4832;
  t4746 = t4730*t4397;
  t4754 = t4378*t4750;
  t4766 = t4746 + t4754;
  t4847 = t4378*t4830;
  t4848 = 0.11*t4397*t4750;
  t4849 = t4847 + t4848;
  t4899 = Cos(var1[6]);
  t4913 = Sin(var1[6]);
  t4932 = t4600*t4899;
  t4933 = -1.*t4627*t4913;
  t4934 = t4932 + t4933;
  t4952 = -1.*t4899;
  t4953 = 1. + t4952;
  t4954 = -0.4*t4953;
  t4957 = -0.51*t4899;
  t4958 = t4954 + t4957;
  t4965 = -1.*t4899*t4627;
  t4966 = -1.*t4600*t4913;
  t4973 = t4965 + t4966;
  t4959 = t4958*t4627;
  t4960 = -0.11*t4600*t4913;
  t4963 = t4959 + t4960;
  t4903 = t4899*t4627;
  t4917 = t4600*t4913;
  t4927 = t4903 + t4917;
  t4974 = t4600*t4958;
  t4975 = 0.11*t4627*t4913;
  t4976 = t4974 + t4975;
  t4995 = Cos(var1[7]);
  t4996 = -1.*t4995;
  t4998 = 1. + t4996;
  t4999 = -0.8*t4998;
  t5000 = -0.8*t4995;
  t5001 = t4999 + t5000;
  t5014 = Sin(var1[7]);
  t5002 = t4730*t5001;
  t5006 = t4828 + t5002;
  t5008 = 0.4*t4750;
  t5009 = t5001*t4750;
  t5010 = t5008 + t5009;
  t5013 = -1.*t4995*t4750;
  t5015 = -1.*t4730*t5014;
  t5016 = t5013 + t5015;
  t5018 = t4730*t4995;
  t5019 = -1.*t4750*t5014;
  t5020 = t5018 + t5019;
  t5032 = t4378*t5020;
  t5051 = t4995*t4750;
  t5058 = t4730*t5014;
  t5059 = t5051 + t5058;
  t5017 = t4397*t5016;
  t5037 = t5017 + t5032;
  t5044 = t4378*t5016;
  t5045 = -1.*t4397*t5020;
  t5048 = t5044 + t5045;
  t5039 = t4378*t5006;
  t5042 = -1.*t4397*t5010;
  t5043 = t5039 + t5042;
  t5060 = -1.*t4397*t5059;
  t5061 = t5060 + t5032;
  t5007 = t5006*t4397;
  t5011 = t4378*t5010;
  t5012 = t5007 + t5011;
  t5063 = t4378*t5059;
  t5064 = t4397*t5020;
  t5065 = t5063 + t5064;
  t5085 = Cos(var1[8]);
  t5086 = -1.*t5085;
  t5087 = 1. + t5086;
  t5091 = -0.8*t5087;
  t5092 = -0.8*t5085;
  t5093 = t5091 + t5092;
  t5103 = Sin(var1[8]);
  t5094 = t4899*t5093;
  t5095 = t4954 + t5094;
  t5097 = 0.4*t4913;
  t5098 = t5093*t4913;
  t5099 = t5097 + t5098;
  t5102 = -1.*t5085*t4913;
  t5104 = -1.*t4899*t5103;
  t5105 = t5102 + t5104;
  t5119 = t4899*t5085;
  t5120 = -1.*t4913*t5103;
  t5121 = t5119 + t5120;
  t5122 = t4600*t5121;
  t5142 = t5085*t4913;
  t5144 = t4899*t5103;
  t5145 = t5142 + t5144;
  t5118 = t4627*t5105;
  t5123 = t5118 + t5122;
  t5132 = t4600*t5105;
  t5136 = -1.*t4627*t5121;
  t5138 = t5132 + t5136;
  t5125 = t4600*t5095;
  t5126 = -1.*t4627*t5099;
  t5127 = t5125 + t5126;
  t5147 = -1.*t4627*t5145;
  t5148 = t5147 + t5122;
  t5096 = t5095*t4627;
  t5100 = t4600*t5099;
  t5101 = t5096 + t5100;
  t5152 = t4600*t5145;
  t5160 = t4627*t5121;
  t5161 = t5152 + t5160;
  t4499 = Power(t4378,2);
  t4500 = -0.11*t4499;
  t4501 = Power(t4397,2);
  t4527 = -0.11*t4501;
  t4574 = t4500 + t4527;
  t4662 = Power(t4600,2);
  t4663 = -0.11*t4662;
  t4668 = Power(t4627,2);
  t4707 = -0.11*t4668;
  t4720 = t4663 + t4707;
  t4860 = -1.*t4245*t4816;
  t4837 = -1.*t4836*t4816;
  t4850 = -1.*t4846*t4849;
  t4854 = t4837 + t4850;
  t4862 = t4836*t4766;
  t4863 = t4816*t4849;
  t4885 = t4862 + t4863;
  t4981 = -1.*t4245*t4934;
  t4964 = -1.*t4963*t4934;
  t4977 = -1.*t4973*t4976;
  t4978 = t4964 + t4977;
  t4988 = t4963*t4927;
  t4990 = t4934*t4976;
  t4991 = t4988 + t4990;
  t5038 = -1.*t5012*t5037;
  t5049 = -1.*t5043*t5048;
  t5050 = t5038 + t5049;
  t5080 = t5043*t5061;
  t5081 = t5012*t5065;
  t5083 = t5080 + t5081;
  t5124 = -1.*t5101*t5123;
  t5139 = -1.*t5127*t5138;
  t5140 = t5124 + t5139;
  t5172 = t5127*t5148;
  t5173 = t5101*t5161;
  t5179 = t5172 + t5173;
  t5298 = -1.*t5006*t4397;
  t5299 = -1.*t4378*t5010;
  t5300 = t5298 + t5299;
  t5278 = t4836*t4816;
  t5280 = -1.*t4830*t4397;
  t5281 = 0.11*t4378*t4750;
  t5284 = t5280 + t5281;
  t5285 = t5284*t4816;
  t5286 = t4846*t4849;
  t5287 = t4766*t4849;
  t5288 = t5278 + t5285 + t5286 + t5287;
  t5293 = -1.*t4397*t5016;
  t5294 = -1.*t4378*t5020;
  t5295 = t5293 + t5294;
  t5296 = -1.*t5043*t5295;
  t5297 = -1.*t5043*t5037;
  t5301 = -1.*t5300*t5048;
  t5302 = -1.*t5012*t5048;
  t5303 = t5296 + t5297 + t5301 + t5302;
  t5308 = t5300*t5061;
  t5309 = t5012*t5061;
  t5310 = -1.*t4378*t5059;
  t5311 = t5310 + t5045;
  t5312 = t5043*t5311;
  t5313 = t5043*t5065;
  t5314 = t5308 + t5309 + t5312 + t5313;
  t5189 = -1.*t4381*t4378;
  t5192 = t4245*t4397;
  t5193 = t5189 + t5192;
  t5194 = -6.8*t5193*t4574;
  t4859 = t4381*t4846;
  t4861 = t4859 + t4860;
  t5214 = -1.*t4245*t4846;
  t5329 = -1.*t4378*t4730;
  t5330 = t4397*t4750;
  t5331 = t5329 + t5330;
  t4767 = -1.*t4245*t4766;
  t4817 = t4381*t4816;
  t4820 = t4767 + t4817;
  t5326 = -1.*t4846*t4836;
  t5327 = -1.*t4846*t5284;
  t5328 = -1.*t4816*t4849;
  t5332 = -1.*t4849*t5331;
  t5333 = t5326 + t5327 + t5328 + t5332;
  t5234 = -1.*t4245*t5061;
  t5062 = t4381*t5061;
  t5066 = -1.*t4245*t5065;
  t5067 = t5062 + t5066;
  t5243 = -1.*t4245*t5048;
  t5075 = -1.*t4245*t5037;
  t5076 = t4381*t5048;
  t5077 = t5075 + t5076;
  t4380 = -1.*t4378*t4245;
  t4467 = -1.*t4381*t4397;
  t4493 = t4380 + t4467;
  t4599 = -6.8*t4493*t4574;
  t5361 = t4245*t4846;
  t5362 = t5361 + t4817;
  t5413 = -1.*t5095*t4627;
  t5414 = -1.*t4600*t5099;
  t5415 = t5413 + t5414;
  t5396 = t4963*t4934;
  t5397 = -1.*t4958*t4627;
  t5398 = 0.11*t4600*t4913;
  t5399 = t5397 + t5398;
  t5400 = t5399*t4934;
  t5401 = t4973*t4976;
  t5402 = t4927*t4976;
  t5403 = t5396 + t5400 + t5401 + t5402;
  t5408 = -1.*t4627*t5105;
  t5409 = -1.*t4600*t5121;
  t5410 = t5408 + t5409;
  t5411 = -1.*t5127*t5410;
  t5412 = -1.*t5127*t5123;
  t5416 = -1.*t5415*t5138;
  t5417 = -1.*t5101*t5138;
  t5418 = t5411 + t5412 + t5416 + t5417;
  t5423 = t5415*t5148;
  t5424 = t5101*t5148;
  t5425 = -1.*t4600*t5145;
  t5426 = t5425 + t5136;
  t5427 = t5127*t5426;
  t5428 = t5127*t5161;
  t5429 = t5423 + t5424 + t5427 + t5428;
  t5195 = -1.*t4381*t4600;
  t5196 = t4245*t4627;
  t5197 = t5195 + t5196;
  t5210 = -6.8*t5197*t4720;
  t4980 = t4381*t4973;
  t4982 = t4980 + t4981;
  t5228 = -1.*t4245*t4973;
  t5444 = -1.*t4600*t4899;
  t5445 = t4627*t4913;
  t5446 = t5444 + t5445;
  t4931 = -1.*t4245*t4927;
  t4935 = t4381*t4934;
  t4947 = t4931 + t4935;
  t5441 = -1.*t4973*t4963;
  t5442 = -1.*t4973*t5399;
  t5443 = -1.*t4934*t4976;
  t5447 = -1.*t4976*t5446;
  t5448 = t5441 + t5442 + t5443 + t5447;
  t5253 = -1.*t4245*t5148;
  t5151 = t4381*t5148;
  t5164 = -1.*t4245*t5161;
  t5167 = t5151 + t5164;
  t5262 = -1.*t4245*t5138;
  t5169 = -1.*t4245*t5123;
  t5170 = t4381*t5138;
  t5171 = t5169 + t5170;
  t4601 = -1.*t4600*t4245;
  t4637 = -1.*t4381*t4627;
  t4658 = t4601 + t4637;
  t4724 = -6.8*t4658*t4720;
  t5476 = t4245*t4973;
  t5477 = t5476 + t4935;
  t5305 = 0.4*t4995;
  t5306 = t5001*t4995;
  t5307 = t5305 + t5306;
  t5520 = 0.4*t4730;
  t5521 = t5520 + t5002;
  t5523 = -0.4*t4750;
  t5524 = -1.*t5001*t4750;
  t5525 = t5523 + t5524;
  t5290 = 0.4*t5014;
  t5291 = t5001*t5014;
  t5292 = t5290 + t5291;
  t5530 = t4378*t5521;
  t5531 = t4397*t5525;
  t5532 = t5530 + t5531;
  t5522 = -1.*t5521*t4397;
  t5526 = t4378*t5525;
  t5527 = t5522 + t5526;
  t5538 = -1.*t4730*t4995;
  t5539 = t4750*t5014;
  t5540 = t5538 + t5539;
  t5318 = t4830*t4730;
  t5319 = Power(t4750,2);
  t5320 = -0.11*t5319;
  t5321 = t5318 + t5320;
  t5511 = 0.11*t4730*t4397;
  t5512 = t5511 + t5281;
  t5513 = t5512*t4816;
  t5514 = -0.11*t4378*t4730;
  t5515 = t5514 + t4848;
  t5516 = t4766*t5515;
  t5517 = t5278 + t5513 + t5286 + t5516;
  t5323 = t4830*t4750;
  t5324 = 0.11*t4730*t4750;
  t5325 = t5323 + t5324;
  t5339 = t5010*t5059;
  t5340 = t5006*t5020;
  t5341 = t5339 + t5340;
  t5519 = t5012*t5037;
  t5528 = t5527*t5061;
  t5529 = t5043*t5048;
  t5533 = t5532*t5065;
  t5534 = t5519 + t5528 + t5529 + t5533;
  t5335 = -1.*t5006*t5016;
  t5336 = -1.*t5010*t5020;
  t5337 = t5335 + t5336;
  t5536 = -1.*t5532*t5037;
  t5537 = -1.*t5527*t5048;
  t5541 = t4378*t5540;
  t5542 = t5293 + t5541;
  t5543 = -1.*t5043*t5542;
  t5544 = t4397*t5540;
  t5545 = t5044 + t5544;
  t5546 = -1.*t5012*t5545;
  t5547 = t5536 + t5537 + t5543 + t5546;
  t5560 = -1.*t4846*t5512;
  t5561 = -1.*t4816*t5515;
  t5562 = t5326 + t5560 + t5561 + t5332;
  t5363 = -6.8*t5362*t4854;
  t5365 = t4245*t5331;
  t5366 = t4859 + t5365;
  t5367 = -6.8*t4885*t5366;
  t5368 = t4381*t4766;
  t5369 = t4245*t4816;
  t5370 = t5368 + t5369;
  t5382 = t4381*t5037;
  t5383 = t4245*t5048;
  t5384 = t5382 + t5383;
  t5375 = t4245*t5061;
  t5376 = t4381*t5065;
  t5377 = t5375 + t5376;
  t5345 = -6.8*t4861*t4854;
  t5347 = t4381*t5331;
  t5348 = t5214 + t5347;
  t5349 = -6.8*t4885*t5348;
  t5420 = 0.4*t5085;
  t5421 = t5093*t5085;
  t5422 = t5420 + t5421;
  t5619 = 0.4*t4899;
  t5620 = t5619 + t5094;
  t5622 = -0.4*t4913;
  t5623 = -1.*t5093*t4913;
  t5624 = t5622 + t5623;
  t5405 = 0.4*t5103;
  t5406 = t5093*t5103;
  t5407 = t5405 + t5406;
  t5629 = t4600*t5620;
  t5630 = t4627*t5624;
  t5631 = t5629 + t5630;
  t5621 = -1.*t5620*t4627;
  t5625 = t4600*t5624;
  t5626 = t5621 + t5625;
  t5637 = -1.*t4899*t5085;
  t5638 = t4913*t5103;
  t5639 = t5637 + t5638;
  t5433 = t4958*t4899;
  t5434 = Power(t4913,2);
  t5435 = -0.11*t5434;
  t5436 = t5433 + t5435;
  t5610 = 0.11*t4899*t4627;
  t5611 = t5610 + t5398;
  t5612 = t5611*t4934;
  t5613 = -0.11*t4600*t4899;
  t5614 = t5613 + t4975;
  t5615 = t4927*t5614;
  t5616 = t5396 + t5612 + t5401 + t5615;
  t5438 = t4958*t4913;
  t5439 = 0.11*t4899*t4913;
  t5440 = t5438 + t5439;
  t5454 = t5099*t5145;
  t5455 = t5095*t5121;
  t5456 = t5454 + t5455;
  t5618 = t5101*t5123;
  t5627 = t5626*t5148;
  t5628 = t5127*t5138;
  t5632 = t5631*t5161;
  t5633 = t5618 + t5627 + t5628 + t5632;
  t5450 = -1.*t5095*t5105;
  t5451 = -1.*t5099*t5121;
  t5452 = t5450 + t5451;
  t5635 = -1.*t5631*t5123;
  t5636 = -1.*t5626*t5138;
  t5640 = t4600*t5639;
  t5641 = t5408 + t5640;
  t5642 = -1.*t5127*t5641;
  t5643 = t4627*t5639;
  t5644 = t5132 + t5643;
  t5645 = -1.*t5101*t5644;
  t5646 = t5635 + t5636 + t5642 + t5645;
  t5659 = -1.*t4973*t5611;
  t5660 = -1.*t4934*t5614;
  t5661 = t5441 + t5659 + t5660 + t5447;
  t5478 = -6.8*t5477*t4978;
  t5480 = t4245*t5446;
  t5481 = t4980 + t5480;
  t5482 = -6.8*t4991*t5481;
  t5483 = t4381*t4927;
  t5484 = t4245*t4934;
  t5485 = t5483 + t5484;
  t5497 = t4381*t5123;
  t5498 = t4245*t5138;
  t5499 = t5497 + t5498;
  t5490 = t4245*t5148;
  t5491 = t4381*t5161;
  t5492 = t5490 + t5491;
  t5460 = -6.8*t4982*t4978;
  t5462 = t4381*t5446;
  t5463 = t5228 + t5462;
  t5464 = -6.8*t4991*t5463;
  t5565 = -1.*t5010*t5016;
  t5567 = -1.*t5006*t5540;
  t5710 = t5519 + t5529;
  t5571 = t5006*t5016;
  t5574 = t5010*t5020;
  t5716 = t5543 + t5546;
  t5588 = -0.3*t5384*t5050;
  t5590 = t4245*t5542;
  t5591 = t4381*t5545;
  t5592 = t5590 + t5591;
  t5593 = -0.3*t5083*t5592;
  t5599 = -0.3*t5077*t5050;
  t5601 = t4381*t5542;
  t5602 = -1.*t4245*t5545;
  t5603 = t5601 + t5602;
  t5604 = -0.3*t5083*t5603;
  t5664 = -1.*t5099*t5105;
  t5666 = -1.*t5095*t5639;
  t5743 = t5618 + t5628;
  t5670 = t5095*t5105;
  t5673 = t5099*t5121;
  t5749 = t5642 + t5645;
  t5687 = -0.3*t5499*t5140;
  t5689 = t4245*t5641;
  t5690 = t4381*t5644;
  t5691 = t5689 + t5690;
  t5692 = -0.3*t5179*t5691;
  t5698 = -0.3*t5171*t5140;
  t5700 = t4381*t5641;
  t5701 = -1.*t4245*t5644;
  t5702 = t5700 + t5701;
  t5703 = -0.3*t5179*t5702;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(2.88*t4245 + t4599 + t4724 - 6.8*t4820*t4854 - 6.8*t4861*t4885 - 6.8*t4947*t4978 - 6.8*t4982*t4991 - 0.3*t5050*t5067 - 0.3*t5077*t5083 - 0.3*t5140*t5167 - 0.3*t5171*t5179)*var2[0] - 0.5*(2.88*t4381 - 6.8*t4854*(-1.*t4381*t4766 + t4860) - 6.8*t4978*(-1.*t4381*t4927 + t4981) + t5194 + t5210 - 6.8*t4885*(-1.*t4381*t4816 + t5214) - 6.8*t4991*(-1.*t4381*t4934 + t5228) - 0.3*t5050*(-1.*t4381*t5065 + t5234) - 0.3*t5083*(-1.*t4381*t5037 + t5243) - 0.3*t5140*(-1.*t4381*t5161 + t5253) - 0.3*t5179*(-1.*t4381*t5123 + t5262))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t4599 - 0.3*t5083*(t5076 + t4245*t5295) - 0.3*t5050*(t5062 + t4245*t5311) - 6.8*t5288*t5362 + t5363 + t5367 - 6.8*t5333*t5370 - 0.3*t5303*t5377 - 0.3*t5314*t5384)*var2[0] - 0.5*(t5194 - 6.8*t4861*t5288 - 0.3*t5083*(t5243 + t4381*t5295) - 0.3*t5067*t5303 - 0.3*t5050*(t5234 + t4381*t5311) - 0.3*t5077*t5314 - 6.8*t4820*t5333 + t5345 + t5349)*var2[1] - 0.5*(-13.6*t4885*t5288 - 0.6*t5050*t5303 - 0.6*t5083*t5314 - 13.6*t4854*t5333)*var2[2] - 0.5*(-6.8*t5288*t5321 - 6.8*t5325*t5333 - 0.3*t5303*t5337 - 0.3*t5314*t5341)*var2[3] - 0.5*(0.748*t5288 - 0.3*t5292*t5303 - 0.3*t5307*t5314)*var2[5]);
  p_output1[4]=var2[2]*(-0.5*(t4724 - 0.3*t5179*(t5170 + t4245*t5410) - 0.3*t5140*(t5151 + t4245*t5426) - 6.8*t5403*t5477 + t5478 + t5482 - 6.8*t5448*t5485 - 0.3*t5418*t5492 - 0.3*t5429*t5499)*var2[0] - 0.5*(t5210 - 6.8*t4982*t5403 - 0.3*t5179*(t5262 + t4381*t5410) - 0.3*t5167*t5418 - 0.3*t5140*(t5253 + t4381*t5426) - 0.3*t5171*t5429 - 6.8*t4947*t5448 + t5460 + t5464)*var2[1] - 0.5*(-13.6*t4991*t5403 - 0.6*t5140*t5418 - 0.6*t5179*t5429 - 13.6*t4978*t5448)*var2[2] - 0.5*(-6.8*t5403*t5436 - 6.8*t5440*t5448 - 0.3*t5418*t5452 - 0.3*t5429*t5456)*var2[4] - 0.5*(0.748*t5403 - 0.3*t5407*t5418 - 0.3*t5422*t5429)*var2[6]);
  p_output1[5]=var2[2]*(-0.5*(t5363 + t5367 - 6.8*t5362*t5517 - 0.3*t5384*t5534 - 0.3*t5377*t5547 - 6.8*t5370*t5562 + t5588 + t5593)*var2[0] - 0.5*(t5345 + t5349 - 6.8*t4861*t5517 - 0.3*t5077*t5534 - 0.3*t5067*t5547 - 6.8*t4820*t5562 + t5599 + t5604)*var2[1] - 0.5*(-13.6*t4885*t5517 - 0.6*t5083*t5534 - 0.6*t5050*t5547 - 13.6*t4854*t5562)*var2[2] - 0.5*(-6.8*(-0.11*t4730*t4750 - 1.*t4750*t4830)*t4885 - 6.8*t4854*(0.11*Power(t4730,2) + t5318) - 6.8*t5321*t5517 - 0.3*t5341*t5534 - 0.3*t5337*t5547 - 6.8*t5325*t5562 - 0.3*t5050*(-1.*t5020*t5521 - 1.*t5016*t5525 + t5565 + t5567) - 0.3*t5083*(t5059*t5521 + t5020*t5525 + t5571 + t5574))*var2[3] - 0.5*(0.748*t5517 - 0.3*t5307*t5534 - 0.3*t5292*t5547)*var2[5]);
  p_output1[6]=var2[2]*(-0.5*(t5478 + t5482 - 6.8*t5477*t5616 - 0.3*t5499*t5633 - 0.3*t5492*t5646 - 6.8*t5485*t5661 + t5687 + t5692)*var2[0] - 0.5*(t5460 + t5464 - 6.8*t4982*t5616 - 0.3*t5171*t5633 - 0.3*t5167*t5646 - 6.8*t4947*t5661 + t5698 + t5703)*var2[1] - 0.5*(-13.6*t4991*t5616 - 0.6*t5179*t5633 - 0.6*t5140*t5646 - 13.6*t4978*t5661)*var2[2] - 0.5*(-6.8*(-0.11*t4899*t4913 - 1.*t4913*t4958)*t4991 - 6.8*t4978*(0.11*Power(t4899,2) + t5433) - 6.8*t5436*t5616 - 0.3*t5456*t5633 - 0.3*t5452*t5646 - 6.8*t5440*t5661 - 0.3*t5140*(-1.*t5121*t5620 - 1.*t5105*t5624 + t5664 + t5666) - 0.3*t5179*(t5145*t5620 + t5121*t5624 + t5670 + t5673))*var2[4] - 0.5*(0.748*t5616 - 0.3*t5422*t5633 - 0.3*t5407*t5646)*var2[6]);
  p_output1[7]=var2[2]*(-0.5*(t5588 + t5593 - 0.3*t5384*t5710 - 0.3*t5377*t5716)*var2[0] - 0.5*(t5599 + t5604 - 0.3*t5077*t5710 - 0.3*t5067*t5716)*var2[1] - 0.5*(-0.6*t5083*t5710 - 0.6*t5050*t5716)*var2[2] - 0.5*(-0.3*t5050*(t5565 + t5567) - 0.3*t5083*(t5571 + t5574) - 0.3*t5341*t5710 - 0.3*t5337*t5716)*var2[3] - 0.5*(-0.3*(-0.4*t5014 - 1.*t5001*t5014)*t5083 - 0.3*t5050*t5307 - 0.3*t5307*t5710 - 0.3*t5292*t5716)*var2[5]);
  p_output1[8]=var2[2]*(-0.5*(t5687 + t5692 - 0.3*t5499*t5743 - 0.3*t5492*t5749)*var2[0] - 0.5*(t5698 + t5703 - 0.3*t5171*t5743 - 0.3*t5167*t5749)*var2[1] - 0.5*(-0.6*t5179*t5743 - 0.6*t5140*t5749)*var2[2] - 0.5*(-0.3*t5140*(t5664 + t5666) - 0.3*t5179*(t5670 + t5673) - 0.3*t5456*t5743 - 0.3*t5452*t5749)*var2[4] - 0.5*(-0.3*(-0.4*t5103 - 1.*t5093*t5103)*t5179 - 0.3*t5140*t5422 - 0.3*t5422*t5743 - 0.3*t5407*t5749)*var2[6]);
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

#include "Ce3_vec3_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec3_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
