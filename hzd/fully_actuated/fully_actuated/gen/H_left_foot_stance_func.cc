/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:20:59 GMT-05:00
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
  double t95;
  double t96;
  double t110;
  double t111;
  double t114;
  double t125;
  double t126;
  double t130;
  double t134;
  double t136;
  double t141;
  double t142;
  double t145;
  double t146;
  double t147;
  double t151;
  double t149;
  double t174;
  double t177;
  double t180;
  double t182;
  double t185;
  double t159;
  double t187;
  double t188;
  double t189;
  double t190;
  double t191;
  double t192;
  t95 = Cos(var1[3]);
  t96 = Sin(var1[2]);
  t110 = t95*t96;
  t111 = Cos(var1[2]);
  t114 = Sin(var1[3]);
  t125 = t111*t114;
  t126 = t110 + t125;
  t130 = Cos(var1[5]);
  t134 = t130*t126;
  t136 = t111*t95;
  t141 = -1.*t96*t114;
  t142 = t136 + t141;
  t145 = Sin(var1[5]);
  t146 = t142*t145;
  t147 = t134 + t146;
  t151 = t130*t142;
  t149 = Cos(var1[7]);
  t174 = -1.*t95*t96;
  t177 = -1.*t111*t114;
  t180 = t174 + t177;
  t182 = t180*t145;
  t185 = t151 + t182;
  t159 = Sin(var1[7]);
  t187 = t149*t185;
  t188 = t130*t180;
  t189 = -1.*t142*t145;
  t190 = t188 + t189;
  t191 = t190*t159;
  t192 = t187 + t191;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.4*t126 - 0.4*t147 - 0.025*(t147*t149 + (-1.*t126*t145 + t151)*t159) + var1[0];
  p_output1[4]=-0.4*t142 - 0.4*t185 - 0.025*t192 + var1[1];
  p_output1[5]=ArcTan(Sqrt(Power(t192,2)),t159*t185 - 1.*t149*t190);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_left_foot_stance_func.hh"

namespace SymFunction
{

void H_left_foot_stance_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
