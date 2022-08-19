/*
 * Automatically Generated from Mathematica.
 * Wed 27 Mar 2019 20:11:34 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t983;
  double t1007;
  double t1912;
  double t2065;
  double t2117;
  double t2121;
  double t2349;
  double t2799;
  double t2980;
  double t3097;
  double t3170;
  double t3175;
  double t3762;
  double t3801;
  double t4227;
  double t4730;
  double t4633;
  double t5779;
  double t6150;
  double t6274;
  double t6315;
  double t6316;
  double t5190;
  double t8097;
  double t8103;
  double t8655;
  double t8722;
  double t8773;
  double t8791;
  double t10098;
  double t10182;
  double t11288;
  double t11385;
  double t11740;
  double t12269;
  double t12486;
  double t12772;
  double t12817;
  double t13099;
  double t13155;
  double t13737;
  double t13790;
  double t14357;
  double t13992;
  double t14895;
  double t14901;
  double t15000;
  double t15169;
  double t15170;
  double t14671;
  double t15265;
  double t15276;
  double t15317;
  double t15320;
  double t15329;
  double t15333;
  t983 = Cos(var1[4]);
  t1007 = Sin(var1[2]);
  t1912 = t983*t1007;
  t2065 = Cos(var1[2]);
  t2117 = Sin(var1[4]);
  t2121 = t2065*t2117;
  t2349 = t1912 + t2121;
  t2799 = Cos(var1[6]);
  t2980 = t2799*t2349;
  t3097 = t2065*t983;
  t3170 = -1.*t1007*t2117;
  t3175 = t3097 + t3170;
  t3762 = Sin(var1[6]);
  t3801 = t3175*t3762;
  t4227 = t2980 + t3801;
  t4730 = t2799*t3175;
  t4633 = Cos(var1[8]);
  t5779 = -1.*t983*t1007;
  t6150 = -1.*t2065*t2117;
  t6274 = t5779 + t6150;
  t6315 = t6274*t3762;
  t6316 = t4730 + t6315;
  t5190 = Sin(var1[8]);
  t8097 = t4633*t6316;
  t8103 = t2799*t6274;
  t8655 = -1.*t3175*t3762;
  t8722 = t8103 + t8655;
  t8773 = t8722*t5190;
  t8791 = t8097 + t8773;
  t10098 = Cos(var1[3]);
  t10182 = t10098*t1007;
  t11288 = Sin(var1[3]);
  t11385 = t2065*t11288;
  t11740 = t10182 + t11385;
  t12269 = Cos(var1[5]);
  t12486 = t12269*t11740;
  t12772 = t2065*t10098;
  t12817 = -1.*t1007*t11288;
  t13099 = t12772 + t12817;
  t13155 = Sin(var1[5]);
  t13737 = t13099*t13155;
  t13790 = t12486 + t13737;
  t14357 = t12269*t13099;
  t13992 = Cos(var1[7]);
  t14895 = -1.*t10098*t1007;
  t14901 = -1.*t2065*t11288;
  t15000 = t14895 + t14901;
  t15169 = t15000*t13155;
  t15170 = t14357 + t15169;
  t14671 = Sin(var1[7]);
  t15265 = t13992*t15170;
  t15276 = t12269*t15000;
  t15317 = -1.*t13099*t13155;
  t15320 = t15276 + t15317;
  t15329 = t15320*t14671;
  t15333 = t15265 + t15329;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=-0.4*t2349 - 0.4*t4227 - 0.025*(t4227*t4633 + (-1.*t2349*t3762 + t4730)*t5190) + var1[0];
  p_output1[4]=-0.4*t3175 - 0.4*t6316 - 0.025*t8791 + var1[1];
  p_output1[5]=ArcTan(Sqrt(Power(t8791,2)),t5190*t6316 - 1.*t4633*t8722);
  p_output1[6]=-0.4*t11740 - 0.4*t13790 - 0.025*(t13790*t13992 + (-1.*t11740*t13155 + t14357)*t14671) + var1[0];
  p_output1[7]=-0.4*t13099 - 0.4*t15170 - 0.025*t15333 + var1[1];
  p_output1[8]=ArcTan(Sqrt(Power(t15333,2)),t14671*t15170 - 1.*t13992*t15320);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "opt_hc_func.hh"

namespace SymFunction
{

void opt_hc_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
