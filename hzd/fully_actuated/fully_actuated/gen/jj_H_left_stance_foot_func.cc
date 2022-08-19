/*
 * Automatically Generated from Mathematica.
 * Sun 4 Nov 2018 19:50:58 GMT-05:00
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
  double t190;
  double t178;
  double t184;
  double t191;
  double t176;
  double t208;
  double t209;
  double t210;
  double t186;
  double t201;
  double t202;
  double t211;
  double t150;
  double t204;
  double t212;
  double t215;
  double t216;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t230;
  double t235;
  double t236;
  double t238;
  double t244;
  double t245;
  double t246;
  double t274;
  double t275;
  double t276;
  double t277;
  double t278;
  double t266;
  double t273;
  double t279;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t286;
  double t263;
  double t264;
  double t265;
  double t267;
  double t268;
  double t269;
  double t270;
  double t271;
  double t272;
  double t287;
  double t288;
  double t289;
  double t241;
  double t242;
  double t243;
  double t249;
  double t307;
  double t313;
  double t314;
  double t315;
  double t306;
  double t308;
  double t253;
  double t322;
  double t329;
  double t330;
  double t331;
  double t332;
  double t333;
  double t334;
  double t335;
  double t296;
  double t343;
  double t252;
  double t342;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t349;
  double t350;
  double t340;
  double t341;
  double t351;
  double t352;
  double t353;
  double t358;
  double t359;
  double t360;
  double t363;
  double t364;
  double t365;
  double t361;
  double t366;
  double t367;
  double t368;
  double t369;
  double t370;
  double t371;
  double t372;
  double t373;
  double t357;
  double t362;
  double t378;
  double t375;
  double t377;
  double t388;
  double t323;
  double t324;
  double t325;
  double t400;
  double t401;
  double t402;
  double t399;
  double t403;
  double t404;
  double t405;
  double t406;
  double t407;
  double t408;
  double t409;
  double t410;
  double t411;
  double t412;
  double t417;
  double t418;
  double t419;
  double t379;
  double t380;
  double t310;
  double t311;
  double t383;
  double t429;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
  double t445;
  double t452;
  double t453;
  double t454;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t471;
  double t472;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t450;
  double t451;
  double t455;
  double t456;
  double t457;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t463;
  double t464;
  double t478;
  double t479;
  double t480;
  t190 = Cos(var1[2]);
  t178 = Cos(var1[3]);
  t184 = Sin(var1[2]);
  t191 = Sin(var1[3]);
  t176 = Cos(var1[5]);
  t208 = t190*t178;
  t209 = -1.*t184*t191;
  t210 = t208 + t209;
  t186 = -1.*t178*t184;
  t201 = -1.*t190*t191;
  t202 = t186 + t201;
  t211 = Sin(var1[5]);
  t150 = Cos(var1[7]);
  t204 = t176*t202;
  t212 = -1.*t210*t211;
  t215 = t204 + t212;
  t216 = t150*t215;
  t220 = t176*t210;
  t221 = t202*t211;
  t222 = t220 + t221;
  t223 = Sin(var1[7]);
  t224 = -1.*t222*t223;
  t230 = t216 + t224;
  t235 = t178*t184;
  t236 = t190*t191;
  t238 = t235 + t236;
  t244 = -1.*t238*t211;
  t245 = t220 + t244;
  t246 = -1.*t245*t223;
  t274 = -1.*t190*t178;
  t275 = t184*t191;
  t276 = t274 + t275;
  t277 = t276*t211;
  t278 = t204 + t277;
  t266 = -1.*t202*t211;
  t273 = -0.4*t202;
  t279 = -0.4*t278;
  t280 = t150*t278;
  t281 = t176*t276;
  t282 = t281 + t266;
  t283 = t282*t223;
  t284 = t280 + t283;
  t285 = -0.025*t284;
  t286 = t273 + t279 + t285;
  t263 = -0.025*var2[7]*t230;
  t264 = -0.4*t215;
  t265 = -1.*t176*t210;
  t267 = t265 + t266;
  t268 = t267*t223;
  t269 = t216 + t268;
  t270 = -0.025*t269;
  t271 = t264 + t270;
  t272 = var2[5]*t271;
  t287 = var2[2]*t286;
  t288 = var2[3]*t286;
  t289 = t263 + t272 + t287 + t288;
  t241 = -1.*t176*t238;
  t242 = t241 + t212;
  t243 = t150*t242;
  t249 = t243 + t246;
  t307 = -1.*t215*t223;
  t313 = t150*t282;
  t314 = -1.*t278*t223;
  t315 = t313 + t314;
  t306 = t150*t267;
  t308 = t306 + t307;
  t253 = t210*t211;
  t322 = -1.*t176*t202;
  t329 = -0.4*t282;
  t330 = -1.*t276*t211;
  t331 = t322 + t330;
  t332 = t331*t223;
  t333 = t313 + t332;
  t334 = -0.025*t333;
  t335 = t329 + t334;
  t296 = t238*t211;
  t343 = t281 + t296;
  t252 = t176*t238;
  t342 = -0.4*t276;
  t344 = -0.4*t343;
  t345 = t150*t343;
  t346 = t252 + t330;
  t347 = t346*t223;
  t348 = t345 + t347;
  t349 = -0.025*t348;
  t350 = t342 + t344 + t349;
  t340 = -0.025*var2[7]*t315;
  t341 = var2[5]*t335;
  t351 = var2[2]*t350;
  t352 = var2[3]*t350;
  t353 = t340 + t341 + t351 + t352;
  t358 = t150*t222;
  t359 = t215*t223;
  t360 = t358 + t359;
  t363 = -1.*t150*t215;
  t364 = t222*t223;
  t365 = t363 + t364;
  t361 = Power(t360,2);
  t366 = -1.*t150*t267;
  t367 = t366 + t359;
  t368 = 2.*t365*t367;
  t369 = 2.*t269*t360;
  t370 = t368 + t369;
  t371 = Power(t365,2);
  t372 = t371 + t361;
  t373 = Power(t372,-2);
  t357 = Power(t230,2);
  t362 = 1/Sqrt(t361);
  t378 = 1/t372;
  t375 = Sqrt(t361);
  t377 = Power(t361,-1.5);
  t388 = Power(t269,2);
  t323 = t322 + t253;
  t324 = t323*t223;
  t325 = t306 + t324;
  t400 = -1.*t150*t282;
  t401 = t278*t223;
  t402 = t400 + t401;
  t399 = -1.*t284*t230*t360*t362*t370*t373;
  t403 = -1.*t375*t402*t370*t373;
  t404 = -1.*t269*t284*t230*t361*t377*t378;
  t405 = t269*t284*t230*t362*t378;
  t406 = t284*t308*t360*t362*t378;
  t407 = -1.*t150*t331;
  t408 = t407 + t283;
  t409 = t408*t375*t378;
  t410 = t230*t360*t362*t333*t378;
  t411 = t269*t360*t362*t402*t378;
  t412 = t399 + t403 + t404 + t405 + t406 + t409 + t410 + t411;
  t417 = 2.*t230*t360;
  t418 = 2.*t365*t360;
  t419 = t417 + t418;
  t379 = -1.*t269*t357*t361*t377*t378;
  t380 = t269*t357*t362*t378;
  t310 = -1.*t150*t222;
  t311 = t310 + t307;
  t383 = t269*t375*t378;
  t429 = Power(t230,3);
  t437 = -1.*t284*t230*t360*t362*t419*t373;
  t438 = -1.*t375*t402*t419*t373;
  t439 = -1.*t284*t357*t361*t377*t378;
  t440 = t284*t357*t362*t378;
  t441 = t284*t311*t360*t362*t378;
  t442 = t284*t375*t378;
  t443 = t230*t360*t362*t315*t378;
  t444 = t230*t360*t362*t402*t378;
  t445 = t437 + t438 + t439 + t440 + t441 + t442 + t443 + t444;
  t452 = 2.*t284*t360;
  t453 = 2.*t365*t402;
  t454 = t452 + t453;
  t465 = Power(t284,2);
  t466 = -1.*t465*t230*t361*t377*t378;
  t467 = t465*t230*t362*t378;
  t468 = -1.*t150*t346;
  t469 = t343*t223;
  t470 = t468 + t469;
  t471 = t470*t375*t378;
  t472 = t230*t360*t362*t348*t378;
  t473 = t284*t360*t362*t315*t378;
  t474 = t284*t360*t362*t402*t378;
  t475 = -1.*t284*t230*t360*t362*t373*t454;
  t476 = -1.*t375*t402*t373*t454;
  t477 = t466 + t467 + t471 + t472 + t473 + t474 + t475 + t476;
  t450 = t284*t367*t360*t362*t378;
  t451 = t269*t360*t362*t315*t378;
  t455 = -1.*t269*t230*t360*t362*t373*t454;
  t456 = -1.*t367*t375*t373*t454;
  t457 = t404 + t405 + t450 + t409 + t410 + t451 + t455 + t456;
  t458 = var2[5]*t457;
  t459 = t284*t361*t362*t378;
  t460 = 2.*t230*t360*t362*t315*t378;
  t461 = -1.*t357*t360*t362*t373*t454;
  t462 = -1.*t360*t375*t373*t454;
  t463 = t439 + t440 + t459 + t442 + t460 + t461 + t462;
  t464 = var2[7]*t463;
  t478 = var2[2]*t477;
  t479 = var2[3]*t477;
  t480 = t458 + t464 + t478 + t479;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=t289*var2[2] + t289*var2[3] + var2[5]*(t271*var2[2] + t271*var2[3] + (-0.4*t242 - 0.025*(t243 + t223*(t265 + t296)))*var2[5] - 0.025*t249*var2[7]) + var2[7]*(-0.025*t230*var2[2] - 0.025*t230*var2[3] - 0.025*t249*var2[5] - 0.025*(t246 - 1.*t150*(t252 + t253))*var2[7]);
  p_output1[4]=t353*var2[2] + t353*var2[3] + var2[5]*(t335*var2[2] + t335*var2[3] + (-0.4*t267 - 0.025*t325)*var2[5] - 0.025*t308*var2[7]) + var2[7]*(-0.025*t315*var2[2] - 0.025*t315*var2[3] - 0.025*t308*var2[5] - 0.025*t311*var2[7]);
  p_output1[5]=t480*var2[2] + t480*var2[3] + var2[5]*(t412*var2[2] + t412*var2[3] + (-1.*t230*t269*t360*t362*t370*t373 - 1.*t367*t370*t373*t375 + t269*t308*t360*t362*t378 + t230*t325*t360*t362*t378 + t269*t360*t362*t367*t378 + (t268 - 1.*t150*t323)*t375*t378 + t230*t362*t378*t388 - 1.*t230*t361*t377*t378*t388)*var2[5] + (-1.*t357*t360*t362*t370*t373 - 1.*t360*t370*t373*t375 + 2.*t230*t308*t360*t362*t378 + t269*t361*t362*t378 + t379 + t380 + t383)*var2[7]) + var2[7]*(t445*var2[2] + t445*var2[3] + (t230*t308*t360*t362*t378 + t269*t311*t360*t362*t378 + t230*t360*t362*t367*t378 + t379 + t380 + t383 - 1.*t230*t269*t360*t362*t373*t419 - 1.*t367*t373*t375*t419)*var2[5] + (2.*t230*t311*t360*t362*t378 + t230*t361*t362*t378 + t230*t375*t378 - 1.*t357*t360*t362*t373*t419 - 1.*t360*t373*t375*t419 + t362*t378*t429 - 1.*t361*t377*t378*t429)*var2[7]);
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

#include "jj_H_left_stance_foot_func.hh"

namespace SymFunction
{

void jj_H_left_stance_foot_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
