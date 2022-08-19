/*
 * Automatically Generated from Mathematica.
 * Tue 26 Mar 2019 21:24:52 GMT-04:00
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
  double t181;
  double t198;
  double t200;
  double t203;
  double t205;
  double t206;
  double t210;
  double t226;
  double t231;
  double t232;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t247;
  double t242;
  double t265;
  double t269;
  double t270;
  double t271;
  double t272;
  double t259;
  double t274;
  double t276;
  double t277;
  double t278;
  double t279;
  double t280;
  t181 = Cos(var1[3]);
  t198 = Sin(var1[2]);
  t200 = t181*t198;
  t203 = Cos(var1[2]);
  t205 = Sin(var1[3]);
  t206 = t203*t205;
  t210 = t200 + t206;
  t226 = Cos(var1[5]);
  t231 = t226*t210;
  t232 = t203*t181;
  t234 = -1.*t198*t205;
  t235 = t232 + t234;
  t236 = Sin(var1[5]);
  t237 = t235*t236;
  t238 = t231 + t237;
  t247 = t226*t235;
  t242 = Cos(var1[7]);
  t265 = -1.*t181*t198;
  t269 = -1.*t203*t205;
  t270 = t265 + t269;
  t271 = t270*t236;
  t272 = t247 + t271;
  t259 = Sin(var1[7]);
  t274 = t242*t272;
  t276 = t226*t270;
  t277 = -1.*t235*t236;
  t278 = t276 + t277;
  t279 = t278*t259;
  t280 = t274 + t279;
  p_output1[0]=-0.4*t210 - 0.4*t238 - 0.025*(t238*t242 + (-1.*t210*t236 + t247)*t259) + var1[0];
  p_output1[1]=-0.4*t235 - 0.4*t272 - 0.025*t280 + var1[1];
  p_output1[2]=ArcTan(Sqrt(Power(t280,2)),t259*t272 - 1.*t242*t278);
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

#include "Rfoot_pose_func.hh"

namespace SymFunction
{

void Rfoot_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
