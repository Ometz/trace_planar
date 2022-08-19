/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:14:42 GMT-05:00
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
  double t10;
  double t17;
  double t19;
  double t21;
  double t22;
  double t28;
  double t30;
  double t32;
  double t33;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t44;
  double t42;
  double t60;
  double t61;
  double t62;
  double t63;
  double t64;
  double t51;
  double t68;
  double t70;
  double t71;
  double t72;
  double t73;
  double t74;
  double t45;
  double t48;
  double t43;
  double t52;
  double t53;
  double t83;
  double t85;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t29;
  double t41;
  double t54;
  double t56;
  double t59;
  double t67;
  double t75;
  double t76;
  double t79;
  double t81;
  double t82;
  double t84;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t97;
  double t98;
  double t99;
  double t100;
  double t101;
  double t102;
  double t112;
  double t113;
  double t114;
  double t115;
  double t104;
  t5 = Cos(var1[2]);
  t10 = Cos(var1[3]);
  t17 = t5*t10;
  t19 = Sin(var1[2]);
  t21 = Sin(var1[3]);
  t22 = -1.*t19*t21;
  t28 = t17 + t22;
  t30 = Cos(var1[5]);
  t32 = t30*t28;
  t33 = -1.*t10*t19;
  t34 = -1.*t5*t21;
  t35 = t33 + t34;
  t36 = Sin(var1[5]);
  t37 = t35*t36;
  t38 = t32 + t37;
  t44 = t30*t35;
  t42 = Cos(var1[7]);
  t60 = -1.*t5*t10;
  t61 = t19*t21;
  t62 = t60 + t61;
  t63 = t62*t36;
  t64 = t44 + t63;
  t51 = Sin(var1[7]);
  t68 = t42*t64;
  t70 = t30*t62;
  t71 = -1.*t35*t36;
  t72 = t70 + t71;
  t73 = t72*t51;
  t74 = t68 + t73;
  t45 = -1.*t28*t36;
  t48 = t44 + t45;
  t43 = t42*t38;
  t52 = t48*t51;
  t53 = t43 + t52;
  t83 = Power(t53,2);
  t85 = -1.*t42*t48;
  t86 = t38*t51;
  t87 = t85 + t86;
  t88 = Power(t87,2);
  t89 = t88 + t83;
  t90 = 1/t89;
  t29 = -0.4*t28;
  t41 = -0.4*t38;
  t54 = -0.025*t53;
  t56 = t29 + t41 + t54;
  t59 = -0.4*t35;
  t67 = -0.4*t64;
  t75 = -0.025*t74;
  t76 = t59 + t67 + t75;
  t79 = t42*t48;
  t81 = -1.*t38*t51;
  t82 = t79 + t81;
  t84 = 1/Sqrt(t83);
  t91 = t74*t82*t53*t84*t90;
  t92 = Sqrt(t83);
  t93 = -1.*t42*t72;
  t94 = t64*t51;
  t95 = t93 + t94;
  t96 = t92*t95*t90;
  t97 = t91 + t96;
  t98 = t10*t19;
  t99 = t5*t21;
  t100 = t98 + t99;
  t101 = -1.*t100*t36;
  t102 = t32 + t101;
  t112 = -1.*t30*t28;
  t113 = t112 + t71;
  t114 = t113*t51;
  t115 = t79 + t114;
  t104 = t42*t102;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t56;
  p_output1[7]=t76;
  p_output1[8]=t97;
  p_output1[9]=t56;
  p_output1[10]=t76;
  p_output1[11]=t97;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.4*t102 - 0.025*(t104 + (-1.*t100*t30 + t45)*t51);
  p_output1[16]=-0.025*t115 - 0.4*t48;
  p_output1[17]=t115*t53*t82*t84*t90 + (-1.*t113*t42 + t52)*t90*t92;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=-0.025*(t104 - 1.*(t100*t30 + t28*t36)*t51);
  p_output1[22]=-0.025*t82;
  p_output1[23]=t53*Power(t82,2)*t84*t90 + t53*t90*t92;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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

#include "j_Rfoot_pose_func.hh"

namespace SymFunction
{

void j_Rfoot_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
