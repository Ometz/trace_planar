/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:21:00 GMT-05:00
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
  double t186;
  double t152;
  double t171;
  double t187;
  double t148;
  double t201;
  double t202;
  double t203;
  double t180;
  double t196;
  double t197;
  double t204;
  double t128;
  double t198;
  double t205;
  double t206;
  double t209;
  double t229;
  double t234;
  double t235;
  double t237;
  double t238;
  double t245;
  double t254;
  double t258;
  double t261;
  double t268;
  double t269;
  double t273;
  double t340;
  double t341;
  double t342;
  double t343;
  double t344;
  double t327;
  double t339;
  double t345;
  double t346;
  double t349;
  double t353;
  double t354;
  double t356;
  double t357;
  double t358;
  double t316;
  double t320;
  double t326;
  double t331;
  double t332;
  double t334;
  double t335;
  double t337;
  double t338;
  double t359;
  double t361;
  double t362;
  double t264;
  double t266;
  double t267;
  double t277;
  double t384;
  double t394;
  double t395;
  double t396;
  double t383;
  double t388;
  double t281;
  double t411;
  double t421;
  double t422;
  double t425;
  double t426;
  double t427;
  double t429;
  double t430;
  double t372;
  double t438;
  double t280;
  double t437;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
  double t445;
  double t435;
  double t436;
  double t446;
  double t447;
  double t448;
  double t453;
  double t454;
  double t455;
  double t458;
  double t459;
  double t460;
  double t456;
  double t461;
  double t462;
  double t463;
  double t464;
  double t465;
  double t466;
  double t467;
  double t468;
  double t452;
  double t457;
  double t473;
  double t470;
  double t472;
  double t483;
  double t412;
  double t415;
  double t417;
  double t495;
  double t496;
  double t497;
  double t494;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t506;
  double t507;
  double t512;
  double t513;
  double t514;
  double t474;
  double t475;
  double t390;
  double t391;
  double t478;
  double t524;
  double t532;
  double t533;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t547;
  double t548;
  double t549;
  double t560;
  double t561;
  double t562;
  double t563;
  double t564;
  double t565;
  double t566;
  double t567;
  double t568;
  double t569;
  double t570;
  double t571;
  double t572;
  double t545;
  double t546;
  double t550;
  double t551;
  double t552;
  double t553;
  double t554;
  double t555;
  double t556;
  double t557;
  double t558;
  double t559;
  double t573;
  double t574;
  double t575;
  t186 = Cos(var1[2]);
  t152 = Cos(var1[3]);
  t171 = Sin(var1[2]);
  t187 = Sin(var1[3]);
  t148 = Cos(var1[5]);
  t201 = t186*t152;
  t202 = -1.*t171*t187;
  t203 = t201 + t202;
  t180 = -1.*t152*t171;
  t196 = -1.*t186*t187;
  t197 = t180 + t196;
  t204 = Sin(var1[5]);
  t128 = Cos(var1[7]);
  t198 = t148*t197;
  t205 = -1.*t203*t204;
  t206 = t198 + t205;
  t209 = t128*t206;
  t229 = t148*t203;
  t234 = t197*t204;
  t235 = t229 + t234;
  t237 = Sin(var1[7]);
  t238 = -1.*t235*t237;
  t245 = t209 + t238;
  t254 = t152*t171;
  t258 = t186*t187;
  t261 = t254 + t258;
  t268 = -1.*t261*t204;
  t269 = t229 + t268;
  t273 = -1.*t269*t237;
  t340 = -1.*t186*t152;
  t341 = t171*t187;
  t342 = t340 + t341;
  t343 = t342*t204;
  t344 = t198 + t343;
  t327 = -1.*t197*t204;
  t339 = -0.4*t197;
  t345 = -0.4*t344;
  t346 = t128*t344;
  t349 = t148*t342;
  t353 = t349 + t327;
  t354 = t353*t237;
  t356 = t346 + t354;
  t357 = -0.025*t356;
  t358 = t339 + t345 + t357;
  t316 = -0.025*var2[7]*t245;
  t320 = -0.4*t206;
  t326 = -1.*t148*t203;
  t331 = t326 + t327;
  t332 = t331*t237;
  t334 = t209 + t332;
  t335 = -0.025*t334;
  t337 = t320 + t335;
  t338 = var2[5]*t337;
  t359 = var2[2]*t358;
  t361 = var2[3]*t358;
  t362 = t316 + t338 + t359 + t361;
  t264 = -1.*t148*t261;
  t266 = t264 + t205;
  t267 = t128*t266;
  t277 = t267 + t273;
  t384 = -1.*t206*t237;
  t394 = t128*t353;
  t395 = -1.*t344*t237;
  t396 = t394 + t395;
  t383 = t128*t331;
  t388 = t383 + t384;
  t281 = t203*t204;
  t411 = -1.*t148*t197;
  t421 = -0.4*t353;
  t422 = -1.*t342*t204;
  t425 = t411 + t422;
  t426 = t425*t237;
  t427 = t394 + t426;
  t429 = -0.025*t427;
  t430 = t421 + t429;
  t372 = t261*t204;
  t438 = t349 + t372;
  t280 = t148*t261;
  t437 = -0.4*t342;
  t439 = -0.4*t438;
  t440 = t128*t438;
  t441 = t280 + t422;
  t442 = t441*t237;
  t443 = t440 + t442;
  t444 = -0.025*t443;
  t445 = t437 + t439 + t444;
  t435 = -0.025*var2[7]*t396;
  t436 = var2[5]*t430;
  t446 = var2[2]*t445;
  t447 = var2[3]*t445;
  t448 = t435 + t436 + t446 + t447;
  t453 = t128*t235;
  t454 = t206*t237;
  t455 = t453 + t454;
  t458 = -1.*t128*t206;
  t459 = t235*t237;
  t460 = t458 + t459;
  t456 = Power(t455,2);
  t461 = -1.*t128*t331;
  t462 = t461 + t454;
  t463 = 2.*t460*t462;
  t464 = 2.*t334*t455;
  t465 = t463 + t464;
  t466 = Power(t460,2);
  t467 = t466 + t456;
  t468 = Power(t467,-2);
  t452 = Power(t245,2);
  t457 = 1/Sqrt(t456);
  t473 = 1/t467;
  t470 = Sqrt(t456);
  t472 = Power(t456,-1.5);
  t483 = Power(t334,2);
  t412 = t411 + t281;
  t415 = t412*t237;
  t417 = t383 + t415;
  t495 = -1.*t128*t353;
  t496 = t344*t237;
  t497 = t495 + t496;
  t494 = -1.*t356*t245*t455*t457*t465*t468;
  t498 = -1.*t470*t497*t465*t468;
  t499 = -1.*t334*t356*t245*t456*t472*t473;
  t500 = t334*t356*t245*t457*t473;
  t501 = t356*t388*t455*t457*t473;
  t502 = -1.*t128*t425;
  t503 = t502 + t354;
  t504 = t503*t470*t473;
  t505 = t245*t455*t457*t427*t473;
  t506 = t334*t455*t457*t497*t473;
  t507 = t494 + t498 + t499 + t500 + t501 + t504 + t505 + t506;
  t512 = 2.*t245*t455;
  t513 = 2.*t460*t455;
  t514 = t512 + t513;
  t474 = -1.*t334*t452*t456*t472*t473;
  t475 = t334*t452*t457*t473;
  t390 = -1.*t128*t235;
  t391 = t390 + t384;
  t478 = t334*t470*t473;
  t524 = Power(t245,3);
  t532 = -1.*t356*t245*t455*t457*t514*t468;
  t533 = -1.*t470*t497*t514*t468;
  t534 = -1.*t356*t452*t456*t472*t473;
  t535 = t356*t452*t457*t473;
  t536 = t356*t391*t455*t457*t473;
  t537 = t356*t470*t473;
  t538 = t245*t455*t457*t396*t473;
  t539 = t245*t455*t457*t497*t473;
  t540 = t532 + t533 + t534 + t535 + t536 + t537 + t538 + t539;
  t547 = 2.*t356*t455;
  t548 = 2.*t460*t497;
  t549 = t547 + t548;
  t560 = Power(t356,2);
  t561 = -1.*t560*t245*t456*t472*t473;
  t562 = t560*t245*t457*t473;
  t563 = -1.*t128*t441;
  t564 = t438*t237;
  t565 = t563 + t564;
  t566 = t565*t470*t473;
  t567 = t245*t455*t457*t443*t473;
  t568 = t356*t455*t457*t396*t473;
  t569 = t356*t455*t457*t497*t473;
  t570 = -1.*t356*t245*t455*t457*t468*t549;
  t571 = -1.*t470*t497*t468*t549;
  t572 = t561 + t562 + t566 + t567 + t568 + t569 + t570 + t571;
  t545 = t356*t462*t455*t457*t473;
  t546 = t334*t455*t457*t396*t473;
  t550 = -1.*t334*t245*t455*t457*t468*t549;
  t551 = -1.*t462*t470*t468*t549;
  t552 = t499 + t500 + t545 + t504 + t505 + t546 + t550 + t551;
  t553 = var2[5]*t552;
  t554 = t356*t456*t457*t473;
  t555 = 2.*t245*t455*t457*t396*t473;
  t556 = -1.*t452*t455*t457*t468*t549;
  t557 = -1.*t455*t470*t468*t549;
  t558 = t534 + t535 + t554 + t537 + t555 + t556 + t557;
  t559 = var2[7]*t558;
  t573 = var2[2]*t572;
  t574 = var2[3]*t572;
  t575 = t553 + t559 + t573 + t574;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=t362*var2[2] + t362*var2[3] + var2[5]*(t337*var2[2] + t337*var2[3] + (-0.4*t266 - 0.025*(t267 + t237*(t326 + t372)))*var2[5] - 0.025*t277*var2[7]) + var2[7]*(-0.025*t245*var2[2] - 0.025*t245*var2[3] - 0.025*t277*var2[5] - 0.025*(t273 - 1.*t128*(t280 + t281))*var2[7]);
  p_output1[4]=t448*var2[2] + t448*var2[3] + var2[5]*(t430*var2[2] + t430*var2[3] + (-0.4*t331 - 0.025*t417)*var2[5] - 0.025*t388*var2[7]) + var2[7]*(-0.025*t396*var2[2] - 0.025*t396*var2[3] - 0.025*t388*var2[5] - 0.025*t391*var2[7]);
  p_output1[5]=t575*var2[2] + t575*var2[3] + var2[5]*(t507*var2[2] + t507*var2[3] + (-1.*t245*t334*t455*t457*t465*t468 - 1.*t462*t465*t468*t470 + t334*t388*t455*t457*t473 + t245*t417*t455*t457*t473 + t334*t455*t457*t462*t473 + (t332 - 1.*t128*t412)*t470*t473 + t245*t457*t473*t483 - 1.*t245*t456*t472*t473*t483)*var2[5] + (-1.*t452*t455*t457*t465*t468 - 1.*t455*t465*t468*t470 + 2.*t245*t388*t455*t457*t473 + t334*t456*t457*t473 + t474 + t475 + t478)*var2[7]) + var2[7]*(t540*var2[2] + t540*var2[3] + (t245*t388*t455*t457*t473 + t334*t391*t455*t457*t473 + t245*t455*t457*t462*t473 + t474 + t475 + t478 - 1.*t245*t334*t455*t457*t468*t514 - 1.*t462*t468*t470*t514)*var2[5] + (2.*t245*t391*t455*t457*t473 + t245*t456*t457*t473 + t245*t470*t473 - 1.*t452*t455*t457*t468*t514 - 1.*t455*t468*t470*t514 + t457*t473*t524 - 1.*t456*t472*t473*t524)*var2[7]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_H_left_foot_stance_func.hh"

namespace SymFunction
{

void jj_H_left_foot_stance_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
