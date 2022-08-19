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
  double t5184;
  double t4979;
  double t4992;
  double t4858;
  double t5215;
  double t4361;
  double t5185;
  double t5186;
  double t5188;
  double t5211;
  double t5212;
  double t5232;
  double t5236;
  double t5237;
  double t5289;
  double t5304;
  double t5315;
  double t5316;
  double t5317;
  double t5322;
  double t5343;
  double t5353;
  double t5354;
  double t5355;
  double t5358;
  double t5359;
  double t5360;
  double t5351;
  double t5352;
  double t5277;
  double t5334;
  double t5338;
  double t5342;
  double t5344;
  double t5346;
  double t5371;
  double t5252;
  double t5256;
  double t5259;
  double t5260;
  double t5261;
  double t5263;
  double t5213;
  double t5216;
  double t5217;
  double t5218;
  double t5219;
  double t5224;
  double t5230;
  double t5265;
  double t5350;
  double t5356;
  double t5357;
  double t5364;
  double t5372;
  double t5374;
  double t5378;
  double t5379;
  double t5386;
  double t5387;
  double t5388;
  double t5389;
  double t5390;
  double t5392;
  double t5393;
  double t5394;
  double t4889;
  double t5073;
  double t5084;
  double t5168;
  double t5465;
  double t5466;
  double t5231;
  double t5380;
  double t5391;
  double t5432;
  double t5437;
  double t5449;
  double t5453;
  double t5458;
  double t5493;
  double t5494;
  double t5495;
  double t5502;
  double t5503;
  double t5504;
  double t5469;
  double t5472;
  double t5508;
  double t5509;
  double t5579;
  double t5580;
  double t5581;
  double t5569;
  double t5570;
  double t5572;
  double t5575;
  double t5576;
  double t5577;
  double t5597;
  double t5598;
  double t5600;
  double t5607;
  double t5608;
  double t5609;
  double t5634;
  double t5647;
  double t5648;
  double t5680;
  double t5681;
  double t5682;
  double t5677;
  double t5678;
  double t5667;
  double t5668;
  double t5669;
  double t5676;
  double t5679;
  double t5683;
  double t5684;
  double t5685;
  double t5695;
  double t5696;
  double t5697;
  double t5699;
  double t5704;
  double t5705;
  double t5706;
  double t5707;
  double t5550;
  double t5551;
  double t5552;
  double t5712;
  double t5713;
  double t5714;
  double t5553;
  double t5554;
  double t5555;
  double t5727;
  double t5728;
  double t5729;
  double t5457;
  double t5459;
  double t5489;
  double t5496;
  double t5500;
  double t5501;
  double t5468;
  double t5470;
  double t5473;
  double t5474;
  double t5736;
  double t5737;
  double t5739;
  double t5740;
  double t5573;
  double t5582;
  double t5586;
  double t5767;
  double t5768;
  double t5770;
  double t5771;
  double t5594;
  double t5789;
  double t5790;
  double t5791;
  double t5784;
  double t5785;
  double t5786;
  double t5672;
  double t5674;
  double t5675;
  double t5688;
  double t5693;
  double t5694;
  double t5814;
  double t5816;
  double t5730;
  double t5732;
  double t5733;
  double t5734;
  double t5738;
  double t5741;
  double t5742;
  double t5744;
  double t5750;
  double t5753;
  double t5754;
  double t5755;
  double t5756;
  double t5779;
  double t5780;
  double t5781;
  double t5783;
  double t5788;
  double t5795;
  double t5796;
  double t5797;
  double t5801;
  double t5802;
  t5184 = Cos(var1[5]);
  t4979 = Sin(var1[2]);
  t4992 = Sin(var1[3]);
  t4858 = Cos(var1[3]);
  t5215 = Sin(var1[5]);
  t4361 = Cos(var1[2]);
  t5185 = -1.*t5184;
  t5186 = 1. + t5185;
  t5188 = -0.4*t5186;
  t5211 = -0.51*t5184;
  t5212 = t5188 + t5211;
  t5232 = t4858*t5184;
  t5236 = -1.*t4992*t5215;
  t5237 = t5232 + t5236;
  t5289 = Cos(var1[7]);
  t5304 = -1.*t5289;
  t5315 = 1. + t5304;
  t5316 = -0.8*t5315;
  t5317 = -0.8*t5289;
  t5322 = t5316 + t5317;
  t5343 = Sin(var1[7]);
  t5353 = t5184*t5289;
  t5354 = -1.*t5215*t5343;
  t5355 = t5353 + t5354;
  t5358 = -1.*t5289*t5215;
  t5359 = -1.*t5184*t5343;
  t5360 = t5358 + t5359;
  t5351 = t5184*t5322;
  t5352 = t5188 + t5351;
  t5277 = 0.4*t5215;
  t5334 = t5322*t5215;
  t5338 = t5277 + t5334;
  t5342 = t5289*t5215;
  t5344 = t5184*t5343;
  t5346 = t5342 + t5344;
  t5371 = t4858*t5355;
  t5252 = t5212*t5215;
  t5256 = 0.11*t5184*t5215;
  t5259 = t5252 + t5256;
  t5260 = t5184*t4992;
  t5261 = t4858*t5215;
  t5263 = t5260 + t5261;
  t5213 = t5212*t5184;
  t5216 = Power(t5215,2);
  t5217 = -0.11*t5216;
  t5218 = t5213 + t5217;
  t5219 = -1.*t5184*t4992;
  t5224 = -1.*t4858*t5215;
  t5230 = t5219 + t5224;
  t5265 = -1.*t4979*t5237;
  t5350 = t5338*t5346;
  t5356 = t5352*t5355;
  t5357 = t5350 + t5356;
  t5364 = t4992*t5360;
  t5372 = t5364 + t5371;
  t5374 = t4858*t5360;
  t5378 = -1.*t4992*t5355;
  t5379 = t5374 + t5378;
  t5386 = -1.*t5352*t5360;
  t5387 = -1.*t5338*t5355;
  t5388 = t5386 + t5387;
  t5389 = -1.*t4992*t5346;
  t5390 = t5389 + t5371;
  t5392 = t4858*t5346;
  t5393 = t4992*t5355;
  t5394 = t5392 + t5393;
  t4889 = -1.*t4361*t4858;
  t5073 = t4979*t4992;
  t5084 = t4889 + t5073;
  t5168 = 0.748*t5084;
  t5465 = t4361*t5230;
  t5466 = t5465 + t5265;
  t5231 = -1.*t4979*t5230;
  t5380 = -1.*t4979*t5379;
  t5391 = -1.*t4979*t5390;
  t5432 = -1.*t4858*t4979;
  t5437 = -1.*t4361*t4992;
  t5449 = t5432 + t5437;
  t5453 = 0.748*t5449;
  t5458 = t4361*t5237;
  t5493 = -1.*t4858*t5184;
  t5494 = t4992*t5215;
  t5495 = t5493 + t5494;
  t5502 = -1.*t4992*t5360;
  t5503 = -1.*t4858*t5355;
  t5504 = t5502 + t5503;
  t5469 = t4361*t5379;
  t5472 = t4361*t5390;
  t5508 = -1.*t4858*t5346;
  t5509 = t5508 + t5378;
  t5579 = t4858*t5212;
  t5580 = 0.11*t4992*t5215;
  t5581 = t5579 + t5580;
  t5569 = t5212*t4992;
  t5570 = -0.11*t4858*t5215;
  t5572 = t5569 + t5570;
  t5575 = -1.*t5212*t4992;
  t5576 = 0.11*t4858*t5215;
  t5577 = t5575 + t5576;
  t5597 = t4858*t5352;
  t5598 = -1.*t4992*t5338;
  t5600 = t5597 + t5598;
  t5607 = -1.*t5352*t4992;
  t5608 = -1.*t4858*t5338;
  t5609 = t5607 + t5608;
  t5634 = t5352*t4992;
  t5647 = t4858*t5338;
  t5648 = t5634 + t5647;
  t5680 = -0.4*t5215;
  t5681 = -1.*t5322*t5215;
  t5682 = t5680 + t5681;
  t5677 = 0.4*t5184;
  t5678 = t5677 + t5351;
  t5667 = -1.*t5212*t5215;
  t5668 = -0.11*t5184*t5215;
  t5669 = t5667 + t5668;
  t5676 = t5352*t5360;
  t5679 = t5678*t5346;
  t5683 = t5682*t5355;
  t5684 = t5338*t5355;
  t5685 = t5676 + t5679 + t5683 + t5684;
  t5695 = -1.*t5682*t5360;
  t5696 = -1.*t5338*t5360;
  t5697 = -1.*t5678*t5355;
  t5699 = -1.*t5184*t5289;
  t5704 = t5215*t5343;
  t5705 = t5699 + t5704;
  t5706 = -1.*t5352*t5705;
  t5707 = t5695 + t5696 + t5697 + t5706;
  t5550 = t4979*t5230;
  t5551 = t5550 + t5458;
  t5552 = -6.8*t5259*t5551;
  t5712 = Power(t5184,2);
  t5713 = 0.11*t5712;
  t5714 = t5213 + t5713;
  t5553 = t4979*t5495;
  t5554 = t5465 + t5553;
  t5555 = -6.8*t5218*t5554;
  t5727 = t4361*t5372;
  t5728 = t4979*t5379;
  t5729 = t5727 + t5728;
  t5457 = -1.*t4979*t5263;
  t5459 = t5457 + t5458;
  t5489 = -6.8*t5259*t5466;
  t5496 = t4361*t5495;
  t5500 = t5231 + t5496;
  t5501 = -6.8*t5218*t5500;
  t5468 = -1.*t4979*t5372;
  t5470 = t5468 + t5469;
  t5473 = -1.*t4979*t5394;
  t5474 = t5472 + t5473;
  t5736 = t4858*t5705;
  t5737 = t5502 + t5736;
  t5739 = t4992*t5705;
  t5740 = t5374 + t5739;
  t5573 = t5572*t5237;
  t5582 = t5230*t5581;
  t5586 = -1.*t5230*t5572;
  t5767 = 0.11*t5184*t4992;
  t5768 = t5767 + t5576;
  t5770 = -0.11*t4858*t5184;
  t5771 = t5770 + t5580;
  t5594 = -1.*t5581*t5495;
  t5789 = t4858*t5678;
  t5790 = t4992*t5682;
  t5791 = t5789 + t5790;
  t5784 = -1.*t5678*t4992;
  t5785 = t4858*t5682;
  t5786 = t5784 + t5785;
  t5672 = 0.4*t5289;
  t5674 = t5322*t5289;
  t5675 = t5672 + t5674;
  t5688 = 0.4*t5343;
  t5693 = t5322*t5343;
  t5694 = t5688 + t5693;
  t5814 = t5676 + t5684;
  t5816 = t5696 + t5706;
  t5730 = -0.3*t5388*t5729;
  t5732 = t4979*t5390;
  t5733 = t4361*t5394;
  t5734 = t5732 + t5733;
  t5738 = t4979*t5737;
  t5741 = t4361*t5740;
  t5742 = t5738 + t5741;
  t5744 = -0.3*t5357*t5742;
  t5750 = -0.3*t5388*t5470;
  t5753 = t4361*t5737;
  t5754 = -1.*t4979*t5740;
  t5755 = t5753 + t5754;
  t5756 = -0.3*t5357*t5755;
  t5779 = -1.*t5648*t5372;
  t5780 = -1.*t5600*t5379;
  t5781 = t5779 + t5780;
  t5783 = t5648*t5372;
  t5788 = t5600*t5379;
  t5795 = t5600*t5390;
  t5796 = t5648*t5394;
  t5797 = t5795 + t5796;
  t5801 = -1.*t5600*t5737;
  t5802 = -1.*t5648*t5740;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t5453 - 6.8*t5259*t5459 - 6.8*t5218*t5466 - 0.3*t5357*t5470 - 0.3*t5388*t5474)*var2[0] - 0.5*(t5168 - 6.8*t5218*(t5231 - 1.*t4361*t5237) - 6.8*t5259*(-1.*t4361*t5263 + t5265) - 0.3*t5357*(-1.*t4361*t5372 + t5380) - 0.3*t5388*(t5391 - 1.*t4361*t5394))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t5453 - 0.3*t5357*(t5469 + t4979*t5504) - 0.3*t5388*(t5472 + t4979*t5509) + t5552 + t5555)*var2[0] - 0.5*(t5168 + t5489 + t5501 - 0.3*t5357*(t5380 + t4361*t5504) - 0.3*t5388*(t5391 + t4361*t5509))*var2[1] - 0.5*(-6.8*t5218*(t5573 + t5237*t5577 + t5263*t5581 + t5582) - 6.8*t5259*(-1.*t5230*t5577 - 1.*t5237*t5581 + t5586 + t5594) - 0.3*t5388*(-1.*t5372*t5600 - 1.*t5504*t5600 - 1.*t5379*t5609 - 1.*t5379*t5648) - 0.3*t5357*(t5394*t5600 + t5509*t5600 + t5390*t5609 + t5390*t5648))*var2[2])*var2[3];
  p_output1[4]=0;
  p_output1[5]=var2[3]*(-0.5*(t5552 + t5555 - 6.8*t5551*t5669 - 6.8*(t4979*t5237 + t4361*t5263)*t5714 - 0.3*t5685*t5729 + t5730 - 0.3*t5707*t5734 + t5744)*var2[0] - 0.5*(t5489 + t5501 - 6.8*t5466*t5669 - 0.3*t5470*t5685 - 0.3*t5474*t5707 - 6.8*t5459*t5714 + t5750 + t5756)*var2[1] - 0.5*(-6.8*(t5263*t5572 + t5237*t5581)*t5669 - 6.8*(-1.*t5237*t5572 - 1.*t5230*t5581)*t5714 - 6.8*t5259*(t5586 + t5594 - 1.*t5230*t5768 - 1.*t5237*t5771) - 6.8*t5218*(t5573 + t5582 + t5237*t5768 + t5263*t5771) - 0.3*t5707*t5781 - 0.3*t5357*(t5783 + t5390*t5786 + t5788 + t5394*t5791) - 0.3*t5685*t5797 - 0.3*t5388*(-1.*t5379*t5786 - 1.*t5372*t5791 + t5801 + t5802))*var2[2] - 0.5*(-13.6*t5218*t5669 - 0.6*t5357*t5685 - 0.6*t5388*t5707 - 13.6*t5259*t5714)*var2[3] - 0.5*(0.748*t5669 - 0.3*t5675*t5685 - 0.3*t5694*t5707)*var2[5]);
  p_output1[6]=0;
  p_output1[7]=var2[3]*(-0.5*(t5730 + t5744 - 0.3*t5729*t5814 - 0.3*t5734*t5816)*var2[0] - 0.5*(t5750 + t5756 - 0.3*t5470*t5814 - 0.3*t5474*t5816)*var2[1] - 0.5*(-0.3*t5357*(t5783 + t5788) - 0.3*t5388*(t5801 + t5802) - 0.3*t5797*t5814 - 0.3*t5781*t5816)*var2[2] - 0.5*(-0.6*t5357*t5814 - 0.6*t5388*t5816)*var2[3] - 0.5*(-0.3*(-0.4*t5343 - 1.*t5322*t5343)*t5357 - 0.3*t5388*t5675 - 0.3*t5675*t5814 - 0.3*t5694*t5816)*var2[5]);
  p_output1[8]=0;
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

#include "Ce3_vec4_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec4_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
