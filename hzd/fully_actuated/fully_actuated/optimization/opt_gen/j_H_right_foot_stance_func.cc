/*
 * Automatically Generated from Mathematica.
 * Tue 23 Oct 2018 19:47:52 GMT-04:00
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
  double t342;
  double t359;
  double t361;
  double t362;
  double t374;
  double t378;
  double t384;
  double t412;
  double t423;
  double t427;
  double t428;
  double t429;
  double t413;
  double t430;
  double t431;
  double t433;
  double t434;
  double t441;
  double t442;
  double t449;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t471;
  double t472;
  double t473;
  double t474;
  double t476;
  double t478;
  double t445;
  double t450;
  double t454;
  double t457;
  double t458;
  double t459;
  double t482;
  double t484;
  double t485;
  double t486;
  double t487;
  double t489;
  double t490;
  double t399;
  double t432;
  double t456;
  double t461;
  double t462;
  double t463;
  double t470;
  double t480;
  double t481;
  double t483;
  double t491;
  double t492;
  double t493;
  double t494;
  double t495;
  double t496;
  double t497;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t504;
  double t505;
  double t518;
  double t519;
  double t520;
  double t521;
  double t508;
  double t511;
  double t529;
  double t530;
  double t531;
  t342 = Cos(var1[2]);
  t359 = Cos(var1[4]);
  t361 = t342*t359;
  t362 = Sin(var1[2]);
  t374 = Sin(var1[4]);
  t378 = -1.*t362*t374;
  t384 = t361 + t378;
  t412 = Cos(var1[6]);
  t423 = -1.*t359*t362;
  t427 = -1.*t342*t374;
  t428 = t423 + t427;
  t429 = Sin(var1[6]);
  t413 = t412*t384;
  t430 = t428*t429;
  t431 = t413 + t430;
  t433 = Cos(var1[8]);
  t434 = t412*t428;
  t441 = -1.*t384*t429;
  t442 = t434 + t441;
  t449 = Sin(var1[8]);
  t465 = -1.*t342*t359;
  t466 = t362*t374;
  t467 = t465 + t466;
  t468 = t467*t429;
  t469 = t434 + t468;
  t471 = t433*t469;
  t472 = t412*t467;
  t473 = -1.*t428*t429;
  t474 = t472 + t473;
  t476 = t474*t449;
  t478 = t471 + t476;
  t445 = t433*t442;
  t450 = -1.*t431*t449;
  t454 = t445 + t450;
  t457 = t433*t431;
  t458 = t442*t449;
  t459 = t457 + t458;
  t482 = Power(t459,2);
  t484 = -1.*t433*t442;
  t485 = t431*t449;
  t486 = t484 + t485;
  t487 = Power(t486,2);
  t489 = t487 + t482;
  t490 = 1/t489;
  t399 = -0.4*t384;
  t432 = -0.4*t431;
  t456 = 0.075*t454;
  t461 = -0.025*t459;
  t462 = t399 + t432 + t456 + t461;
  t463 = -0.4*t428;
  t470 = -0.4*t469;
  t480 = -0.025*t478;
  t481 = t463 + t470 + t480;
  t483 = 1/Sqrt(t482);
  t491 = t478*t454*t459*t483*t490;
  t492 = Sqrt(t482);
  t493 = -1.*t433*t474;
  t494 = t469*t449;
  t495 = t493 + t494;
  t496 = t492*t495*t490;
  t497 = t491 + t496;
  t498 = t359*t362;
  t499 = t342*t374;
  t500 = t498 + t499;
  t501 = -1.*t500*t429;
  t502 = t413 + t501;
  t504 = -1.*t412*t500;
  t505 = t504 + t441;
  t518 = -1.*t412*t384;
  t519 = t518 + t473;
  t520 = t519*t449;
  t521 = t445 + t520;
  t508 = -1.*t502*t449;
  t511 = t433*t502;
  t529 = t412*t500;
  t530 = t384*t429;
  t531 = t529 + t530;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=t462;
  p_output1[16]=t481;
  p_output1[17]=t497;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t462;
  p_output1[28]=t481;
  p_output1[29]=t497;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-0.4*t502 + 0.075*(t433*t505 + t508) - 0.025*(t449*t505 + t511);
  p_output1[40]=-0.4*t442 - 0.025*t521;
  p_output1[41]=t490*t492*(t458 - 1.*t433*t519) + t454*t459*t483*t490*t521;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0.075*(t508 - 1.*t433*t531) - 0.025*(t511 - 1.*t449*t531);
  p_output1[52]=-0.025*t454;
  p_output1[53]=Power(t454,2)*t459*t483*t490 + t459*t490*t492;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_H_right_foot_stance_func.hh"

namespace SymFunction
{

void j_H_right_foot_stance_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
