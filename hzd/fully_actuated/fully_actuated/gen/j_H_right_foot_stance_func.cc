/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:21:52 GMT-05:00
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
  double t209;
  double t248;
  double t254;
  double t258;
  double t266;
  double t267;
  double t284;
  double t310;
  double t320;
  double t335;
  double t338;
  double t339;
  double t341;
  double t343;
  double t345;
  double t361;
  double t357;
  double t376;
  double t378;
  double t379;
  double t380;
  double t381;
  double t370;
  double t383;
  double t389;
  double t392;
  double t394;
  double t397;
  double t398;
  double t362;
  double t368;
  double t359;
  double t371;
  double t372;
  double t418;
  double t420;
  double t421;
  double t426;
  double t427;
  double t429;
  double t430;
  double t286;
  double t354;
  double t373;
  double t374;
  double t375;
  double t382;
  double t399;
  double t405;
  double t406;
  double t407;
  double t415;
  double t419;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t442;
  double t443;
  double t454;
  double t459;
  double t466;
  double t467;
  double t445;
  t209 = Cos(var1[2]);
  t248 = Cos(var1[4]);
  t254 = t209*t248;
  t258 = Sin(var1[2]);
  t266 = Sin(var1[4]);
  t267 = -1.*t258*t266;
  t284 = t254 + t267;
  t310 = Cos(var1[6]);
  t320 = t310*t284;
  t335 = -1.*t248*t258;
  t338 = -1.*t209*t266;
  t339 = t335 + t338;
  t341 = Sin(var1[6]);
  t343 = t339*t341;
  t345 = t320 + t343;
  t361 = t310*t339;
  t357 = Cos(var1[8]);
  t376 = -1.*t209*t248;
  t378 = t258*t266;
  t379 = t376 + t378;
  t380 = t379*t341;
  t381 = t361 + t380;
  t370 = Sin(var1[8]);
  t383 = t357*t381;
  t389 = t310*t379;
  t392 = -1.*t339*t341;
  t394 = t389 + t392;
  t397 = t394*t370;
  t398 = t383 + t397;
  t362 = -1.*t284*t341;
  t368 = t361 + t362;
  t359 = t357*t345;
  t371 = t368*t370;
  t372 = t359 + t371;
  t418 = Power(t372,2);
  t420 = -1.*t357*t368;
  t421 = t345*t370;
  t426 = t420 + t421;
  t427 = Power(t426,2);
  t429 = t427 + t418;
  t430 = 1/t429;
  t286 = -0.4*t284;
  t354 = -0.4*t345;
  t373 = -0.025*t372;
  t374 = t286 + t354 + t373;
  t375 = -0.4*t339;
  t382 = -0.4*t381;
  t399 = -0.025*t398;
  t405 = t375 + t382 + t399;
  t406 = t357*t368;
  t407 = -1.*t345*t370;
  t415 = t406 + t407;
  t419 = 1/Sqrt(t418);
  t431 = t398*t415*t372*t419*t430;
  t432 = Sqrt(t418);
  t433 = -1.*t357*t394;
  t434 = t381*t370;
  t435 = t433 + t434;
  t436 = t432*t435*t430;
  t437 = t431 + t436;
  t438 = t248*t258;
  t439 = t209*t266;
  t440 = t438 + t439;
  t442 = -1.*t440*t341;
  t443 = t320 + t442;
  t454 = -1.*t310*t284;
  t459 = t454 + t392;
  t466 = t459*t370;
  t467 = t406 + t466;
  t445 = t357*t443;
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
  p_output1[15]=t374;
  p_output1[16]=t405;
  p_output1[17]=t437;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t374;
  p_output1[28]=t405;
  p_output1[29]=t437;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-0.4*t443 - 0.025*(t370*(t362 - 1.*t310*t440) + t445);
  p_output1[40]=-0.4*t368 - 0.025*t467;
  p_output1[41]=t430*t432*(t371 - 1.*t357*t459) + t372*t415*t419*t430*t467;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.025*(-1.*t370*(t284*t341 + t310*t440) + t445);
  p_output1[52]=-0.025*t415;
  p_output1[53]=t372*Power(t415,2)*t419*t430 + t372*t430*t432;
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
