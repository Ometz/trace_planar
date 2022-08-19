/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 16:13:29 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t369;
  double t393;
  double t398;
  double t424;
  double t438;
  double t441;
  double t453;
  double t461;
  double t473;
  double t477;
  double t482;
  double t489;
  double t468;
  double t494;
  double t500;
  double t502;
  double t511;
  double t513;
  double t514;
  double t538;
  double t580;
  double t584;
  double t585;
  double t589;
  double t590;
  double t603;
  double t605;
  double t609;
  double t602;
  double t613;
  double t615;
  double t517;
  double t540;
  double t551;
  double t558;
  double t559;
  double t561;
  double t661;
  double t663;
  double t664;
  double t665;
  double t666;
  double t667;
  double t668;
  double t459;
  double t501;
  double t554;
  double t563;
  double t566;
  double t579;
  double t596;
  double t616;
  double t619;
  double t639;
  double t653;
  double t657;
  double t658;
  double t662;
  double t672;
  double t676;
  double t679;
  double t681;
  double t682;
  double t684;
  double t685;
  double t686;
  double t687;
  double t691;
  double t692;
  double t693;
  double t696;
  double t698;
  double t714;
  double t715;
  double t717;
  double t718;
  double t702;
  double t705;
  double t760;
  double t762;
  double t763;
  double t741;
  t369 = Cos(var1[2]);
  t393 = Cos(var1[4]);
  t398 = t369*t393;
  t424 = Sin(var1[2]);
  t438 = Sin(var1[4]);
  t441 = -1.*t424*t438;
  t453 = t398 + t441;
  t461 = Cos(var1[6]);
  t473 = -1.*t393*t424;
  t477 = -1.*t369*t438;
  t482 = t473 + t477;
  t489 = Sin(var1[6]);
  t468 = t461*t453;
  t494 = t482*t489;
  t500 = t468 + t494;
  t502 = Cos(var1[8]);
  t511 = t461*t482;
  t513 = -1.*t453*t489;
  t514 = t511 + t513;
  t538 = Sin(var1[8]);
  t580 = -1.*t369*t393;
  t584 = t424*t438;
  t585 = t580 + t584;
  t589 = t585*t489;
  t590 = t511 + t589;
  t603 = t461*t585;
  t605 = -1.*t482*t489;
  t609 = t603 + t605;
  t602 = t502*t590;
  t613 = t609*t538;
  t615 = t602 + t613;
  t517 = t502*t514;
  t540 = -1.*t500*t538;
  t551 = t517 + t540;
  t558 = t502*t500;
  t559 = t514*t538;
  t561 = t558 + t559;
  t661 = Power(t561,2);
  t663 = -1.*t502*t514;
  t664 = t500*t538;
  t665 = t663 + t664;
  t666 = Power(t665,2);
  t667 = t666 + t661;
  t668 = 1/t667;
  t459 = -0.4*t453;
  t501 = -0.4*t500;
  t554 = -0.075*t551;
  t563 = -0.025*t561;
  t566 = t459 + t501 + t554 + t563;
  t579 = -0.4*t482;
  t596 = -0.4*t590;
  t616 = -0.025*t615;
  t619 = t502*t609;
  t639 = -1.*t590*t538;
  t653 = t619 + t639;
  t657 = -0.075*t653;
  t658 = t579 + t596 + t616 + t657;
  t662 = 1/Sqrt(t661);
  t672 = t615*t551*t561*t662*t668;
  t676 = Sqrt(t661);
  t679 = -1.*t502*t609;
  t681 = t590*t538;
  t682 = t679 + t681;
  t684 = t676*t682*t668;
  t685 = t672 + t684;
  t686 = t393*t424;
  t687 = t369*t438;
  t691 = t686 + t687;
  t692 = -1.*t691*t489;
  t693 = t468 + t692;
  t696 = -1.*t461*t691;
  t698 = t696 + t513;
  t714 = -1.*t461*t453;
  t715 = t714 + t605;
  t717 = t715*t538;
  t718 = t517 + t717;
  t702 = -1.*t693*t538;
  t705 = t502*t693;
  t760 = t461*t691;
  t762 = t453*t489;
  t763 = t760 + t762;
  t741 = -1.*t514*t538;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t566;
  p_output1[7]=t658;
  p_output1[8]=t685;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t566;
  p_output1[13]=t658;
  p_output1[14]=t685;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.4*t693 - 0.075*(t502*t698 + t702) - 0.025*(t538*t698 + t705);
  p_output1[19]=-0.4*t514 - 0.025*t718 - 0.075*(t502*t715 + t741);
  p_output1[20]=t668*t676*(t559 - 1.*t502*t715) + t551*t561*t662*t668*t718;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-0.075*(t702 - 1.*t502*t763) - 0.025*(t705 - 1.*t538*t763);
  p_output1[25]=-0.025*t551 - 0.075*(-1.*t500*t502 + t741);
  p_output1[26]=Power(t551,2)*t561*t662*t668 + t561*t668*t676;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_Lheel_pose_func.hh"

namespace SymFunction
{

void j_Lheel_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
