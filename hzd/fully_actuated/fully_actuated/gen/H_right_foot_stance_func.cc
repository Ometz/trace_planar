/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:21:51 GMT-05:00
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
  double t198;
  double t201;
  double t209;
  double t229;
  double t234;
  double t248;
  double t251;
  double t258;
  double t266;
  double t267;
  double t277;
  double t278;
  double t283;
  double t284;
  double t285;
  double t316;
  double t288;
  double t346;
  double t349;
  double t354;
  double t357;
  double t358;
  double t337;
  double t361;
  double t362;
  double t363;
  double t364;
  double t368;
  double t369;
  t198 = Cos(var1[4]);
  t201 = Sin(var1[2]);
  t209 = t198*t201;
  t229 = Cos(var1[2]);
  t234 = Sin(var1[4]);
  t248 = t229*t234;
  t251 = t209 + t248;
  t258 = Cos(var1[6]);
  t266 = t258*t251;
  t267 = t229*t198;
  t277 = -1.*t201*t234;
  t278 = t267 + t277;
  t283 = Sin(var1[6]);
  t284 = t278*t283;
  t285 = t266 + t284;
  t316 = t258*t278;
  t288 = Cos(var1[8]);
  t346 = -1.*t198*t201;
  t349 = -1.*t229*t234;
  t354 = t346 + t349;
  t357 = t354*t283;
  t358 = t316 + t357;
  t337 = Sin(var1[8]);
  t361 = t288*t358;
  t362 = t258*t354;
  t363 = -1.*t278*t283;
  t364 = t362 + t363;
  t368 = t364*t337;
  t369 = t361 + t368;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.4*t251 - 0.4*t285 - 0.025*(t285*t288 + (-1.*t251*t283 + t316)*t337) + var1[0];
  p_output1[4]=-0.4*t278 - 0.4*t358 - 0.025*t369 + var1[1];
  p_output1[5]=ArcTan(Sqrt(Power(t369,2)),t337*t358 - 1.*t288*t364);
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

#include "H_right_foot_stance_func.hh"

namespace SymFunction
{

void H_right_foot_stance_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
