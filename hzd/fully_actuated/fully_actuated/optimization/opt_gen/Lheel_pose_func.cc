/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 18:43:16 GMT-04:00
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
  double t5;
  double t8;
  double t10;
  double t11;
  double t12;
  double t13;
  double t17;
  double t21;
  double t22;
  double t26;
  double t27;
  double t28;
  double t29;
  double t30;
  double t31;
  double t33;
  double t37;
  double t38;
  double t40;
  double t41;
  double t54;
  double t55;
  double t56;
  double t57;
  double t58;
  double t60;
  double t61;
  double t62;
  double t67;
  double t68;
  double t69;
  t5 = Cos(var1[4]);
  t8 = Sin(var1[2]);
  t10 = t5*t8;
  t11 = Cos(var1[2]);
  t12 = Sin(var1[4]);
  t13 = t11*t12;
  t17 = t10 + t13;
  t21 = Cos(var1[6]);
  t22 = t21*t17;
  t26 = t11*t5;
  t27 = -1.*t8*t12;
  t28 = t26 + t27;
  t29 = Sin(var1[6]);
  t30 = t28*t29;
  t31 = t22 + t30;
  t33 = Cos(var1[8]);
  t37 = t21*t28;
  t38 = -1.*t17*t29;
  t40 = t37 + t38;
  t41 = Sin(var1[8]);
  t54 = -1.*t5*t8;
  t55 = -1.*t11*t12;
  t56 = t54 + t55;
  t57 = t56*t29;
  t58 = t37 + t57;
  t60 = t21*t56;
  t61 = -1.*t28*t29;
  t62 = t60 + t61;
  t67 = t33*t58;
  t68 = t62*t41;
  t69 = t67 + t68;
  p_output1[0]=-0.4*t17 - 0.4*t31 - 0.075*(t33*t40 - 1.*t31*t41) - 0.025*(t31*t33 + t40*t41) + var1[0];
  p_output1[1]=-0.4*t28 - 0.4*t58 - 0.075*(-1.*t41*t58 + t33*t62) - 0.025*t69 + var1[1];
  p_output1[2]=ArcTan(Sqrt(Power(t69,2)),t41*t58 - 1.*t33*t62);
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

#include "Lheel_pose_func.hh"

namespace SymFunction
{

void Lheel_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
