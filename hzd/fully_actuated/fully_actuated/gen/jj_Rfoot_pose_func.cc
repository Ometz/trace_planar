/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:15:00 GMT-05:00
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
  double t86;
  double t70;
  double t73;
  double t87;
  double t61;
  double t96;
  double t102;
  double t103;
  double t74;
  double t88;
  double t89;
  double t107;
  double t59;
  double t95;
  double t108;
  double t109;
  double t110;
  double t111;
  double t114;
  double t116;
  double t117;
  double t123;
  double t124;
  double t128;
  double t130;
  double t132;
  double t138;
  double t139;
  double t140;
  double t166;
  double t169;
  double t170;
  double t171;
  double t172;
  double t154;
  double t165;
  double t173;
  double t174;
  double t177;
  double t179;
  double t180;
  double t181;
  double t182;
  double t185;
  double t151;
  double t152;
  double t153;
  double t155;
  double t156;
  double t157;
  double t158;
  double t159;
  double t162;
  double t186;
  double t187;
  double t188;
  double t133;
  double t134;
  double t136;
  double t141;
  double t207;
  double t224;
  double t225;
  double t227;
  double t206;
  double t208;
  double t144;
  double t240;
  double t248;
  double t249;
  double t250;
  double t251;
  double t254;
  double t258;
  double t259;
  double t195;
  double t269;
  double t143;
  double t268;
  double t273;
  double t274;
  double t275;
  double t276;
  double t277;
  double t278;
  double t279;
  double t266;
  double t267;
  double t280;
  double t281;
  double t283;
  double t288;
  double t289;
  double t293;
  double t296;
  double t297;
  double t299;
  double t294;
  double t300;
  double t301;
  double t302;
  double t303;
  double t304;
  double t310;
  double t311;
  double t312;
  double t287;
  double t295;
  double t323;
  double t317;
  double t322;
  double t336;
  double t242;
  double t243;
  double t244;
  double t348;
  double t349;
  double t350;
  double t347;
  double t351;
  double t352;
  double t353;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t359;
  double t360;
  double t365;
  double t366;
  double t367;
  double t324;
  double t325;
  double t211;
  double t212;
  double t330;
  double t377;
  double t385;
  double t386;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t392;
  double t393;
  double t400;
  double t401;
  double t402;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t425;
  double t398;
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
  double t426;
  double t427;
  double t428;
  t86 = Cos(var1[2]);
  t70 = Cos(var1[3]);
  t73 = Sin(var1[2]);
  t87 = Sin(var1[3]);
  t61 = Cos(var1[5]);
  t96 = t86*t70;
  t102 = -1.*t73*t87;
  t103 = t96 + t102;
  t74 = -1.*t70*t73;
  t88 = -1.*t86*t87;
  t89 = t74 + t88;
  t107 = Sin(var1[5]);
  t59 = Cos(var1[7]);
  t95 = t61*t89;
  t108 = -1.*t103*t107;
  t109 = t95 + t108;
  t110 = t59*t109;
  t111 = t61*t103;
  t114 = t89*t107;
  t116 = t111 + t114;
  t117 = Sin(var1[7]);
  t123 = -1.*t116*t117;
  t124 = t110 + t123;
  t128 = t70*t73;
  t130 = t86*t87;
  t132 = t128 + t130;
  t138 = -1.*t132*t107;
  t139 = t111 + t138;
  t140 = -1.*t139*t117;
  t166 = -1.*t86*t70;
  t169 = t73*t87;
  t170 = t166 + t169;
  t171 = t170*t107;
  t172 = t95 + t171;
  t154 = -1.*t89*t107;
  t165 = -0.4*t89;
  t173 = -0.4*t172;
  t174 = t59*t172;
  t177 = t61*t170;
  t179 = t177 + t154;
  t180 = t179*t117;
  t181 = t174 + t180;
  t182 = -0.025*t181;
  t185 = t165 + t173 + t182;
  t151 = -0.025*var2[7]*t124;
  t152 = -0.4*t109;
  t153 = -1.*t61*t103;
  t155 = t153 + t154;
  t156 = t155*t117;
  t157 = t110 + t156;
  t158 = -0.025*t157;
  t159 = t152 + t158;
  t162 = var2[5]*t159;
  t186 = var2[2]*t185;
  t187 = var2[3]*t185;
  t188 = t151 + t162 + t186 + t187;
  t133 = -1.*t61*t132;
  t134 = t133 + t108;
  t136 = t59*t134;
  t141 = t136 + t140;
  t207 = -1.*t109*t117;
  t224 = t59*t179;
  t225 = -1.*t172*t117;
  t227 = t224 + t225;
  t206 = t59*t155;
  t208 = t206 + t207;
  t144 = t103*t107;
  t240 = -1.*t61*t89;
  t248 = -0.4*t179;
  t249 = -1.*t170*t107;
  t250 = t240 + t249;
  t251 = t250*t117;
  t254 = t224 + t251;
  t258 = -0.025*t254;
  t259 = t248 + t258;
  t195 = t132*t107;
  t269 = t177 + t195;
  t143 = t61*t132;
  t268 = -0.4*t170;
  t273 = -0.4*t269;
  t274 = t59*t269;
  t275 = t143 + t249;
  t276 = t275*t117;
  t277 = t274 + t276;
  t278 = -0.025*t277;
  t279 = t268 + t273 + t278;
  t266 = -0.025*var2[7]*t227;
  t267 = var2[5]*t259;
  t280 = var2[2]*t279;
  t281 = var2[3]*t279;
  t283 = t266 + t267 + t280 + t281;
  t288 = t59*t116;
  t289 = t109*t117;
  t293 = t288 + t289;
  t296 = -1.*t59*t109;
  t297 = t116*t117;
  t299 = t296 + t297;
  t294 = Power(t293,2);
  t300 = -1.*t59*t155;
  t301 = t300 + t289;
  t302 = 2.*t299*t301;
  t303 = 2.*t157*t293;
  t304 = t302 + t303;
  t310 = Power(t299,2);
  t311 = t310 + t294;
  t312 = Power(t311,-2);
  t287 = Power(t124,2);
  t295 = 1/Sqrt(t294);
  t323 = 1/t311;
  t317 = Sqrt(t294);
  t322 = Power(t294,-1.5);
  t336 = Power(t157,2);
  t242 = t240 + t144;
  t243 = t242*t117;
  t244 = t206 + t243;
  t348 = -1.*t59*t179;
  t349 = t172*t117;
  t350 = t348 + t349;
  t347 = -1.*t181*t124*t293*t295*t304*t312;
  t351 = -1.*t317*t350*t304*t312;
  t352 = -1.*t157*t181*t124*t294*t322*t323;
  t353 = t157*t181*t124*t295*t323;
  t354 = t181*t208*t293*t295*t323;
  t355 = -1.*t59*t250;
  t356 = t355 + t180;
  t357 = t356*t317*t323;
  t358 = t124*t293*t295*t254*t323;
  t359 = t157*t293*t295*t350*t323;
  t360 = t347 + t351 + t352 + t353 + t354 + t357 + t358 + t359;
  t365 = 2.*t124*t293;
  t366 = 2.*t299*t293;
  t367 = t365 + t366;
  t324 = -1.*t157*t287*t294*t322*t323;
  t325 = t157*t287*t295*t323;
  t211 = -1.*t59*t116;
  t212 = t211 + t207;
  t330 = t157*t317*t323;
  t377 = Power(t124,3);
  t385 = -1.*t181*t124*t293*t295*t367*t312;
  t386 = -1.*t317*t350*t367*t312;
  t387 = -1.*t181*t287*t294*t322*t323;
  t388 = t181*t287*t295*t323;
  t389 = t181*t212*t293*t295*t323;
  t390 = t181*t317*t323;
  t391 = t124*t293*t295*t227*t323;
  t392 = t124*t293*t295*t350*t323;
  t393 = t385 + t386 + t387 + t388 + t389 + t390 + t391 + t392;
  t400 = 2.*t181*t293;
  t401 = 2.*t299*t350;
  t402 = t400 + t401;
  t413 = Power(t181,2);
  t414 = -1.*t413*t124*t294*t322*t323;
  t415 = t413*t124*t295*t323;
  t416 = -1.*t59*t275;
  t417 = t269*t117;
  t418 = t416 + t417;
  t419 = t418*t317*t323;
  t420 = t124*t293*t295*t277*t323;
  t421 = t181*t293*t295*t227*t323;
  t422 = t181*t293*t295*t350*t323;
  t423 = -1.*t181*t124*t293*t295*t312*t402;
  t424 = -1.*t317*t350*t312*t402;
  t425 = t414 + t415 + t419 + t420 + t421 + t422 + t423 + t424;
  t398 = t181*t301*t293*t295*t323;
  t399 = t157*t293*t295*t227*t323;
  t403 = -1.*t157*t124*t293*t295*t312*t402;
  t404 = -1.*t301*t317*t312*t402;
  t405 = t352 + t353 + t398 + t357 + t358 + t399 + t403 + t404;
  t406 = var2[5]*t405;
  t407 = t181*t294*t295*t323;
  t408 = 2.*t124*t293*t295*t227*t323;
  t409 = -1.*t287*t293*t295*t312*t402;
  t410 = -1.*t293*t317*t312*t402;
  t411 = t387 + t388 + t407 + t390 + t408 + t409 + t410;
  t412 = var2[7]*t411;
  t426 = var2[2]*t425;
  t427 = var2[3]*t425;
  t428 = t406 + t412 + t426 + t427;
  p_output1[0]=t188*var2[2] + t188*var2[3] + var2[5]*(t159*var2[2] + t159*var2[3] + (-0.4*t134 - 0.025*(t136 + t117*(t153 + t195)))*var2[5] - 0.025*t141*var2[7]) + var2[7]*(-0.025*t124*var2[2] - 0.025*t124*var2[3] - 0.025*t141*var2[5] - 0.025*(t140 - 1.*(t143 + t144)*t59)*var2[7]);
  p_output1[1]=t283*var2[2] + t283*var2[3] + var2[5]*(t259*var2[2] + t259*var2[3] + (-0.4*t155 - 0.025*t244)*var2[5] - 0.025*t208*var2[7]) + var2[7]*(-0.025*t227*var2[2] - 0.025*t227*var2[3] - 0.025*t208*var2[5] - 0.025*t212*var2[7]);
  p_output1[2]=t428*var2[2] + t428*var2[3] + var2[5]*(t360*var2[2] + t360*var2[3] + (-1.*t124*t157*t293*t295*t304*t312 - 1.*t301*t304*t312*t317 + t157*t208*t293*t295*t323 + t124*t244*t293*t295*t323 + t157*t293*t295*t301*t323 + t124*t295*t323*t336 - 1.*t124*t294*t322*t323*t336 + t317*t323*(t156 - 1.*t242*t59))*var2[5] + (-1.*t287*t293*t295*t304*t312 - 1.*t293*t304*t312*t317 + 2.*t124*t208*t293*t295*t323 + t157*t294*t295*t323 + t324 + t325 + t330)*var2[7]) + var2[7]*(t393*var2[2] + t393*var2[3] + (t124*t208*t293*t295*t323 + t157*t212*t293*t295*t323 + t124*t293*t295*t301*t323 + t324 + t325 + t330 - 1.*t124*t157*t293*t295*t312*t367 - 1.*t301*t312*t317*t367)*var2[5] + (2.*t124*t212*t293*t295*t323 + t124*t294*t295*t323 + t124*t317*t323 - 1.*t287*t293*t295*t312*t367 - 1.*t293*t312*t317*t367 + t295*t323*t377 - 1.*t294*t322*t323*t377)*var2[7]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_Rfoot_pose_func.hh"

namespace SymFunction
{

void jj_Rfoot_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
