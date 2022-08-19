/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:14:59 GMT-05:00
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
  double t43;
  double t32;
  double t37;
  double t44;
  double t29;
  double t61;
  double t62;
  double t63;
  double t41;
  double t54;
  double t56;
  double t64;
  double t17;
  double t59;
  double t67;
  double t68;
  double t70;
  double t73;
  double t74;
  double t75;
  double t76;
  double t79;
  double t83;
  double t88;
  double t89;
  double t91;
  double t97;
  double t98;
  double t99;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t119;
  double t126;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t116;
  double t117;
  double t118;
  double t120;
  double t121;
  double t122;
  double t123;
  double t124;
  double t125;
  double t140;
  double t141;
  double t142;
  double t94;
  double t95;
  double t96;
  double t102;
  double t160;
  double t166;
  double t167;
  double t168;
  double t159;
  double t161;
  double t106;
  double t175;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t149;
  double t196;
  double t105;
  double t195;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t202;
  double t203;
  double t193;
  double t194;
  double t204;
  double t205;
  double t206;
  double t211;
  double t212;
  double t213;
  double t216;
  double t217;
  double t218;
  double t214;
  double t219;
  double t220;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t210;
  double t215;
  double t231;
  double t228;
  double t230;
  double t241;
  double t176;
  double t177;
  double t178;
  double t253;
  double t254;
  double t255;
  double t252;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t270;
  double t271;
  double t272;
  double t232;
  double t233;
  double t163;
  double t164;
  double t236;
  double t282;
  double t290;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t305;
  double t306;
  double t307;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t323;
  double t324;
  double t325;
  double t326;
  double t327;
  double t328;
  double t329;
  double t330;
  double t303;
  double t304;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t316;
  double t317;
  double t331;
  double t332;
  double t333;
  t43 = Cos(var1[2]);
  t32 = Cos(var1[4]);
  t37 = Sin(var1[2]);
  t44 = Sin(var1[4]);
  t29 = Cos(var1[6]);
  t61 = t43*t32;
  t62 = -1.*t37*t44;
  t63 = t61 + t62;
  t41 = -1.*t32*t37;
  t54 = -1.*t43*t44;
  t56 = t41 + t54;
  t64 = Sin(var1[6]);
  t17 = Cos(var1[8]);
  t59 = t29*t56;
  t67 = -1.*t63*t64;
  t68 = t59 + t67;
  t70 = t17*t68;
  t73 = t29*t63;
  t74 = t56*t64;
  t75 = t73 + t74;
  t76 = Sin(var1[8]);
  t79 = -1.*t75*t76;
  t83 = t70 + t79;
  t88 = t32*t37;
  t89 = t43*t44;
  t91 = t88 + t89;
  t97 = -1.*t91*t64;
  t98 = t73 + t97;
  t99 = -1.*t98*t76;
  t127 = -1.*t43*t32;
  t128 = t37*t44;
  t129 = t127 + t128;
  t130 = t129*t64;
  t131 = t59 + t130;
  t119 = -1.*t56*t64;
  t126 = -0.4*t56;
  t132 = -0.4*t131;
  t133 = t17*t131;
  t134 = t29*t129;
  t135 = t134 + t119;
  t136 = t135*t76;
  t137 = t133 + t136;
  t138 = -0.025*t137;
  t139 = t126 + t132 + t138;
  t116 = -0.025*var2[8]*t83;
  t117 = -0.4*t68;
  t118 = -1.*t29*t63;
  t120 = t118 + t119;
  t121 = t120*t76;
  t122 = t70 + t121;
  t123 = -0.025*t122;
  t124 = t117 + t123;
  t125 = var2[6]*t124;
  t140 = var2[2]*t139;
  t141 = var2[4]*t139;
  t142 = t116 + t125 + t140 + t141;
  t94 = -1.*t29*t91;
  t95 = t94 + t67;
  t96 = t17*t95;
  t102 = t96 + t99;
  t160 = -1.*t68*t76;
  t166 = t17*t135;
  t167 = -1.*t131*t76;
  t168 = t166 + t167;
  t159 = t17*t120;
  t161 = t159 + t160;
  t106 = t63*t64;
  t175 = -1.*t29*t56;
  t182 = -0.4*t135;
  t183 = -1.*t129*t64;
  t184 = t175 + t183;
  t185 = t184*t76;
  t186 = t166 + t185;
  t187 = -0.025*t186;
  t188 = t182 + t187;
  t149 = t91*t64;
  t196 = t134 + t149;
  t105 = t29*t91;
  t195 = -0.4*t129;
  t197 = -0.4*t196;
  t198 = t17*t196;
  t199 = t105 + t183;
  t200 = t199*t76;
  t201 = t198 + t200;
  t202 = -0.025*t201;
  t203 = t195 + t197 + t202;
  t193 = -0.025*var2[8]*t168;
  t194 = var2[6]*t188;
  t204 = var2[2]*t203;
  t205 = var2[4]*t203;
  t206 = t193 + t194 + t204 + t205;
  t211 = t17*t75;
  t212 = t68*t76;
  t213 = t211 + t212;
  t216 = -1.*t17*t68;
  t217 = t75*t76;
  t218 = t216 + t217;
  t214 = Power(t213,2);
  t219 = -1.*t17*t120;
  t220 = t219 + t212;
  t221 = 2.*t218*t220;
  t222 = 2.*t122*t213;
  t223 = t221 + t222;
  t224 = Power(t218,2);
  t225 = t224 + t214;
  t226 = Power(t225,-2);
  t210 = Power(t83,2);
  t215 = 1/Sqrt(t214);
  t231 = 1/t225;
  t228 = Sqrt(t214);
  t230 = Power(t214,-1.5);
  t241 = Power(t122,2);
  t176 = t175 + t106;
  t177 = t176*t76;
  t178 = t159 + t177;
  t253 = -1.*t17*t135;
  t254 = t131*t76;
  t255 = t253 + t254;
  t252 = -1.*t137*t83*t213*t215*t223*t226;
  t256 = -1.*t228*t255*t223*t226;
  t257 = -1.*t122*t137*t83*t214*t230*t231;
  t258 = t122*t137*t83*t215*t231;
  t259 = t137*t161*t213*t215*t231;
  t260 = -1.*t17*t184;
  t261 = t260 + t136;
  t262 = t261*t228*t231;
  t263 = t83*t213*t215*t186*t231;
  t264 = t122*t213*t215*t255*t231;
  t265 = t252 + t256 + t257 + t258 + t259 + t262 + t263 + t264;
  t270 = 2.*t83*t213;
  t271 = 2.*t218*t213;
  t272 = t270 + t271;
  t232 = -1.*t122*t210*t214*t230*t231;
  t233 = t122*t210*t215*t231;
  t163 = -1.*t17*t75;
  t164 = t163 + t160;
  t236 = t122*t228*t231;
  t282 = Power(t83,3);
  t290 = -1.*t137*t83*t213*t215*t272*t226;
  t291 = -1.*t228*t255*t272*t226;
  t292 = -1.*t137*t210*t214*t230*t231;
  t293 = t137*t210*t215*t231;
  t294 = t137*t164*t213*t215*t231;
  t295 = t137*t228*t231;
  t296 = t83*t213*t215*t168*t231;
  t297 = t83*t213*t215*t255*t231;
  t298 = t290 + t291 + t292 + t293 + t294 + t295 + t296 + t297;
  t305 = 2.*t137*t213;
  t306 = 2.*t218*t255;
  t307 = t305 + t306;
  t318 = Power(t137,2);
  t319 = -1.*t318*t83*t214*t230*t231;
  t320 = t318*t83*t215*t231;
  t321 = -1.*t17*t199;
  t322 = t196*t76;
  t323 = t321 + t322;
  t324 = t323*t228*t231;
  t325 = t83*t213*t215*t201*t231;
  t326 = t137*t213*t215*t168*t231;
  t327 = t137*t213*t215*t255*t231;
  t328 = -1.*t137*t83*t213*t215*t226*t307;
  t329 = -1.*t228*t255*t226*t307;
  t330 = t319 + t320 + t324 + t325 + t326 + t327 + t328 + t329;
  t303 = t137*t220*t213*t215*t231;
  t304 = t122*t213*t215*t168*t231;
  t308 = -1.*t122*t83*t213*t215*t226*t307;
  t309 = -1.*t220*t228*t226*t307;
  t310 = t257 + t258 + t303 + t262 + t263 + t304 + t308 + t309;
  t311 = var2[6]*t310;
  t312 = t137*t214*t215*t231;
  t313 = 2.*t83*t213*t215*t168*t231;
  t314 = -1.*t210*t213*t215*t226*t307;
  t315 = -1.*t213*t228*t226*t307;
  t316 = t292 + t293 + t312 + t295 + t313 + t314 + t315;
  t317 = var2[8]*t316;
  t331 = var2[2]*t330;
  t332 = var2[4]*t330;
  t333 = t311 + t317 + t331 + t332;
  p_output1[0]=t142*var2[2] + t142*var2[4] + var2[6]*(t124*var2[2] + t124*var2[4] + (-0.4*t95 - 0.025*((t118 + t149)*t76 + t96))*var2[6] - 0.025*t102*var2[8]) + var2[8]*(-0.025*t83*var2[2] - 0.025*t83*var2[4] - 0.025*t102*var2[6] - 0.025*(-1.*(t105 + t106)*t17 + t99)*var2[8]);
  p_output1[1]=t206*var2[2] + t206*var2[4] + var2[6]*(t188*var2[2] + t188*var2[4] + (-0.4*t120 - 0.025*t178)*var2[6] - 0.025*t161*var2[8]) + var2[8]*(-0.025*t168*var2[2] - 0.025*t168*var2[4] - 0.025*t161*var2[6] - 0.025*t164*var2[8]);
  p_output1[2]=t333*var2[2] + t333*var2[4] + var2[6]*(t265*var2[2] + t265*var2[4] + (-1.*t220*t223*t226*t228 + t122*t161*t213*t215*t231 + t122*t213*t215*t220*t231 + (t121 - 1.*t17*t176)*t228*t231 - 1.*t122*t213*t215*t223*t226*t83 + t178*t213*t215*t231*t83 + t215*t231*t241*t83 - 1.*t214*t230*t231*t241*t83)*var2[6] + (-1.*t210*t213*t215*t223*t226 - 1.*t213*t223*t226*t228 + t122*t214*t215*t231 + t232 + t233 + t236 + 2.*t161*t213*t215*t231*t83)*var2[8]) + var2[8]*(t298*var2[2] + t298*var2[4] + (t122*t164*t213*t215*t231 + t232 + t233 + t236 - 1.*t220*t226*t228*t272 + t161*t213*t215*t231*t83 + t213*t215*t220*t231*t83 - 1.*t122*t213*t215*t226*t272*t83)*var2[6] + (-1.*t210*t213*t215*t226*t272 - 1.*t213*t226*t228*t272 + t215*t231*t282 - 1.*t214*t230*t231*t282 + 2.*t164*t213*t215*t231*t83 + t214*t215*t231*t83 + t228*t231*t83)*var2[8]);
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

#include "jj_Lfoot_pose_func.hh"

namespace SymFunction
{

void jj_Lfoot_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
