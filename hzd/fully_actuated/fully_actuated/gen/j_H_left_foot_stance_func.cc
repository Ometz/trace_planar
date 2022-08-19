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
static void output1(double *p_output1,const double *var1)
{
  double t110;
  double t125;
  double t128;
  double t130;
  double t134;
  double t136;
  double t146;
  double t150;
  double t152;
  double t158;
  double t162;
  double t165;
  double t169;
  double t171;
  double t173;
  double t187;
  double t182;
  double t200;
  double t201;
  double t202;
  double t203;
  double t204;
  double t193;
  double t206;
  double t209;
  double t217;
  double t224;
  double t229;
  double t234;
  double t188;
  double t191;
  double t186;
  double t194;
  double t195;
  double t245;
  double t247;
  double t248;
  double t251;
  double t254;
  double t258;
  double t259;
  double t148;
  double t180;
  double t196;
  double t197;
  double t198;
  double t205;
  double t235;
  double t237;
  double t238;
  double t239;
  double t243;
  double t246;
  double t261;
  double t262;
  double t263;
  double t264;
  double t266;
  double t267;
  double t268;
  double t269;
  double t273;
  double t274;
  double t276;
  double t277;
  double t289;
  double t297;
  double t310;
  double t311;
  double t279;
  t110 = Cos(var1[2]);
  t125 = Cos(var1[3]);
  t128 = t110*t125;
  t130 = Sin(var1[2]);
  t134 = Sin(var1[3]);
  t136 = -1.*t130*t134;
  t146 = t128 + t136;
  t150 = Cos(var1[5]);
  t152 = t150*t146;
  t158 = -1.*t125*t130;
  t162 = -1.*t110*t134;
  t165 = t158 + t162;
  t169 = Sin(var1[5]);
  t171 = t165*t169;
  t173 = t152 + t171;
  t187 = t150*t165;
  t182 = Cos(var1[7]);
  t200 = -1.*t110*t125;
  t201 = t130*t134;
  t202 = t200 + t201;
  t203 = t202*t169;
  t204 = t187 + t203;
  t193 = Sin(var1[7]);
  t206 = t182*t204;
  t209 = t150*t202;
  t217 = -1.*t165*t169;
  t224 = t209 + t217;
  t229 = t224*t193;
  t234 = t206 + t229;
  t188 = -1.*t146*t169;
  t191 = t187 + t188;
  t186 = t182*t173;
  t194 = t191*t193;
  t195 = t186 + t194;
  t245 = Power(t195,2);
  t247 = -1.*t182*t191;
  t248 = t173*t193;
  t251 = t247 + t248;
  t254 = Power(t251,2);
  t258 = t254 + t245;
  t259 = 1/t258;
  t148 = -0.4*t146;
  t180 = -0.4*t173;
  t196 = -0.025*t195;
  t197 = t148 + t180 + t196;
  t198 = -0.4*t165;
  t205 = -0.4*t204;
  t235 = -0.025*t234;
  t237 = t198 + t205 + t235;
  t238 = t182*t191;
  t239 = -1.*t173*t193;
  t243 = t238 + t239;
  t246 = 1/Sqrt(t245);
  t261 = t234*t243*t195*t246*t259;
  t262 = Sqrt(t245);
  t263 = -1.*t182*t224;
  t264 = t204*t193;
  t266 = t263 + t264;
  t267 = t262*t266*t259;
  t268 = t261 + t267;
  t269 = t125*t130;
  t273 = t110*t134;
  t274 = t269 + t273;
  t276 = -1.*t274*t169;
  t277 = t152 + t276;
  t289 = -1.*t150*t146;
  t297 = t289 + t217;
  t310 = t297*t193;
  t311 = t238 + t310;
  t279 = t182*t277;
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
  p_output1[15]=t197;
  p_output1[16]=t237;
  p_output1[17]=t268;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t197;
  p_output1[22]=t237;
  p_output1[23]=t268;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=-0.4*t277 - 0.025*(t193*(t188 - 1.*t150*t274) + t279);
  p_output1[34]=-0.4*t191 - 0.025*t311;
  p_output1[35]=t259*t262*(t194 - 1.*t182*t297) + t195*t243*t246*t259*t311;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.025*(-1.*t193*(t146*t169 + t150*t274) + t279);
  p_output1[46]=-0.025*t243;
  p_output1[47]=t195*Power(t243,2)*t246*t259 + t195*t259*t262;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
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

#include "j_H_left_foot_stance_func.hh"

namespace SymFunction
{

void j_H_left_foot_stance_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
