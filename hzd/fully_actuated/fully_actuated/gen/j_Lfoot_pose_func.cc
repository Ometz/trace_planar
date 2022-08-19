/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:14:41 GMT-05:00
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
  double t3;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  double t11;
  double t12;
  double t13;
  double t14;
  double t15;
  double t16;
  double t17;
  double t18;
  double t22;
  double t20;
  double t31;
  double t32;
  double t33;
  double t34;
  double t35;
  double t25;
  double t37;
  double t38;
  double t39;
  double t40;
  double t41;
  double t42;
  double t23;
  double t24;
  double t21;
  double t26;
  double t27;
  double t48;
  double t50;
  double t51;
  double t52;
  double t53;
  double t54;
  double t55;
  double t10;
  double t19;
  double t28;
  double t29;
  double t30;
  double t36;
  double t43;
  double t44;
  double t45;
  double t46;
  double t47;
  double t49;
  double t56;
  double t57;
  double t58;
  double t59;
  double t60;
  double t61;
  double t62;
  double t63;
  double t64;
  double t65;
  double t66;
  double t67;
  double t77;
  double t78;
  double t79;
  double t80;
  double t69;
  t3 = Cos(var1[2]);
  t4 = Cos(var1[4]);
  t5 = t3*t4;
  t6 = Sin(var1[2]);
  t7 = Sin(var1[4]);
  t8 = -1.*t6*t7;
  t9 = t5 + t8;
  t11 = Cos(var1[6]);
  t12 = t11*t9;
  t13 = -1.*t4*t6;
  t14 = -1.*t3*t7;
  t15 = t13 + t14;
  t16 = Sin(var1[6]);
  t17 = t15*t16;
  t18 = t12 + t17;
  t22 = t11*t15;
  t20 = Cos(var1[8]);
  t31 = -1.*t3*t4;
  t32 = t6*t7;
  t33 = t31 + t32;
  t34 = t33*t16;
  t35 = t22 + t34;
  t25 = Sin(var1[8]);
  t37 = t20*t35;
  t38 = t11*t33;
  t39 = -1.*t15*t16;
  t40 = t38 + t39;
  t41 = t40*t25;
  t42 = t37 + t41;
  t23 = -1.*t9*t16;
  t24 = t22 + t23;
  t21 = t20*t18;
  t26 = t24*t25;
  t27 = t21 + t26;
  t48 = Power(t27,2);
  t50 = -1.*t20*t24;
  t51 = t18*t25;
  t52 = t50 + t51;
  t53 = Power(t52,2);
  t54 = t53 + t48;
  t55 = 1/t54;
  t10 = -0.4*t9;
  t19 = -0.4*t18;
  t28 = -0.025*t27;
  t29 = t10 + t19 + t28;
  t30 = -0.4*t15;
  t36 = -0.4*t35;
  t43 = -0.025*t42;
  t44 = t30 + t36 + t43;
  t45 = t20*t24;
  t46 = -1.*t18*t25;
  t47 = t45 + t46;
  t49 = 1/Sqrt(t48);
  t56 = t42*t47*t27*t49*t55;
  t57 = Sqrt(t48);
  t58 = -1.*t20*t40;
  t59 = t35*t25;
  t60 = t58 + t59;
  t61 = t57*t60*t55;
  t62 = t56 + t61;
  t63 = t4*t6;
  t64 = t3*t7;
  t65 = t63 + t64;
  t66 = -1.*t65*t16;
  t67 = t12 + t66;
  t77 = -1.*t11*t9;
  t78 = t77 + t39;
  t79 = t78*t25;
  t80 = t45 + t79;
  t69 = t20*t67;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t29;
  p_output1[7]=t44;
  p_output1[8]=t62;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t29;
  p_output1[13]=t44;
  p_output1[14]=t62;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.4*t67 - 0.025*(t25*(t23 - 1.*t11*t65) + t69);
  p_output1[19]=-0.4*t24 - 0.025*t80;
  p_output1[20]=t55*t57*(t26 - 1.*t20*t78) + t27*t47*t49*t55*t80;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-0.025*(t69 - 1.*t25*(t11*t65 + t16*t9));
  p_output1[25]=-0.025*t47;
  p_output1[26]=t27*Power(t47,2)*t49*t55 + t27*t55*t57;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_Lfoot_pose_func.hh"

namespace SymFunction
{

void j_Lfoot_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
