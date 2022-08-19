/*
 * Automatically Generated from Mathematica.
 * Tue 26 Mar 2019 21:24:51 GMT-04:00
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
  double t158;
  double t161;
  double t181;
  double t188;
  double t197;
  double t198;
  double t199;
  double t203;
  double t205;
  double t206;
  double t207;
  double t208;
  double t209;
  double t210;
  double t219;
  double t229;
  double t225;
  double t239;
  double t240;
  double t241;
  double t242;
  double t243;
  double t233;
  double t247;
  double t249;
  double t250;
  double t254;
  double t255;
  double t258;
  t158 = Cos(var1[4]);
  t161 = Sin(var1[2]);
  t181 = t158*t161;
  t188 = Cos(var1[2]);
  t197 = Sin(var1[4]);
  t198 = t188*t197;
  t199 = t181 + t198;
  t203 = Cos(var1[6]);
  t205 = t203*t199;
  t206 = t188*t158;
  t207 = -1.*t161*t197;
  t208 = t206 + t207;
  t209 = Sin(var1[6]);
  t210 = t208*t209;
  t219 = t205 + t210;
  t229 = t203*t208;
  t225 = Cos(var1[8]);
  t239 = -1.*t158*t161;
  t240 = -1.*t188*t197;
  t241 = t239 + t240;
  t242 = t241*t209;
  t243 = t229 + t242;
  t233 = Sin(var1[8]);
  t247 = t225*t243;
  t249 = t203*t241;
  t250 = -1.*t208*t209;
  t254 = t249 + t250;
  t255 = t254*t233;
  t258 = t247 + t255;
  p_output1[0]=-0.4*t199 - 0.4*t219 - 0.025*(t219*t225 + (-1.*t199*t209 + t229)*t233) + var1[0];
  p_output1[1]=-0.4*t208 - 0.4*t243 - 0.025*t258 + var1[1];
  p_output1[2]=ArcTan(Sqrt(Power(t258,2)),t233*t243 - 1.*t225*t254);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Lfoot_pose_func.hh"

namespace SymFunction
{

void Lfoot_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
