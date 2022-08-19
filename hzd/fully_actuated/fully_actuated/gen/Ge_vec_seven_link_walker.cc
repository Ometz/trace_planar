/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:22 GMT-04:00
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
  double t5886;
  double t6019;
  double t5921;
  double t5982;
  double t6020;
  double t6047;
  double t6048;
  double t6075;
  double t6096;
  double t6110;
  double t6115;
  double t6116;
  double t6050;
  double t6051;
  double t6053;
  double t6054;
  double t6058;
  double t6134;
  double t6138;
  double t6139;
  double t6149;
  double t6151;
  double t6076;
  double t6089;
  double t6090;
  double t6119;
  double t6122;
  double t6123;
  double t6124;
  double t6180;
  double t6184;
  double t6185;
  double t6186;
  double t6187;
  double t6135;
  double t6136;
  double t6137;
  double t6152;
  double t6160;
  double t6161;
  double t6162;
  double t6195;
  double t6206;
  double t6207;
  double t6208;
  double t6210;
  double t6049;
  double t6125;
  double t6132;
  double t6133;
  double t6181;
  double t6182;
  double t6183;
  double t6188;
  double t6189;
  double t6190;
  double t6191;
  double t6192;
  double t6193;
  double t6194;
  double t6066;
  double t6171;
  double t6172;
  double t6176;
  double t6196;
  double t6200;
  double t6204;
  double t6215;
  double t6216;
  double t6217;
  double t6218;
  double t6231;
  double t6232;
  double t6238;
  double t6243;
  double t6244;
  double t6245;
  double t6242;
  double t6246;
  double t6247;
  double t6252;
  double t6261;
  double t6264;
  double t6277;
  double t6278;
  double t6279;
  double t6276;
  double t6280;
  double t6281;
  double t6282;
  double t6287;
  double t6288;
  double t6266;
  double t6298;
  double t6299;
  double t6300;
  double t6290;
  double t6308;
  double t6309;
  double t6310;
  t5886 = Sin(var1[2]);
  t6019 = Cos(var1[2]);
  t5921 = Cos(var1[3]);
  t5982 = -1.*t5921*t5886;
  t6020 = Sin(var1[3]);
  t6047 = -1.*t6019*t6020;
  t6048 = t5982 + t6047;
  t6075 = Cos(var1[5]);
  t6096 = -1.*t6019*t5921;
  t6110 = t5886*t6020;
  t6115 = t6096 + t6110;
  t6116 = Sin(var1[5]);
  t6050 = Cos(var1[4]);
  t6051 = -1.*t6050*t5886;
  t6053 = Sin(var1[4]);
  t6054 = -1.*t6019*t6053;
  t6058 = t6051 + t6054;
  t6134 = Cos(var1[6]);
  t6138 = -1.*t6019*t6050;
  t6139 = t5886*t6053;
  t6149 = t6138 + t6139;
  t6151 = Sin(var1[6]);
  t6076 = -1.*t6075;
  t6089 = 1. + t6076;
  t6090 = -0.4*t6089*t6048;
  t6119 = 0.4*t6115*t6116;
  t6122 = t6075*t6048;
  t6123 = t6115*t6116;
  t6124 = t6122 + t6123;
  t6180 = Cos(var1[7]);
  t6184 = t6075*t6115;
  t6185 = -1.*t6048*t6116;
  t6186 = t6184 + t6185;
  t6187 = Sin(var1[7]);
  t6135 = -1.*t6134;
  t6136 = 1. + t6135;
  t6137 = -0.4*t6136*t6058;
  t6152 = 0.4*t6149*t6151;
  t6160 = t6134*t6058;
  t6161 = t6149*t6151;
  t6162 = t6160 + t6161;
  t6195 = Cos(var1[8]);
  t6206 = t6134*t6149;
  t6207 = -1.*t6058*t6151;
  t6208 = t6206 + t6207;
  t6210 = Sin(var1[8]);
  t6049 = 7.33788*t6048;
  t6125 = -0.51*t6124;
  t6132 = t6090 + t6119 + t6125;
  t6133 = -66.708*t6132;
  t6181 = -1.*t6180;
  t6182 = 1. + t6181;
  t6183 = -0.8*t6182*t6124;
  t6188 = 0.8*t6186*t6187;
  t6189 = t6180*t6124;
  t6190 = t6186*t6187;
  t6191 = t6189 + t6190;
  t6192 = -0.8*t6191;
  t6193 = t6090 + t6119 + t6183 + t6188 + t6192;
  t6194 = -2.943*t6193;
  t6066 = 7.33788*t6058;
  t6171 = -0.51*t6162;
  t6172 = t6137 + t6152 + t6171;
  t6176 = -66.708*t6172;
  t6196 = -1.*t6195;
  t6200 = 1. + t6196;
  t6204 = -0.8*t6200*t6162;
  t6215 = 0.8*t6208*t6210;
  t6216 = t6195*t6162;
  t6217 = t6208*t6210;
  t6218 = t6216 + t6217;
  t6231 = -0.8*t6218;
  t6232 = t6137 + t6152 + t6204 + t6215 + t6231;
  t6238 = -2.943*t6232;
  t6243 = t6019*t5921;
  t6244 = -1.*t5886*t6020;
  t6245 = t6243 + t6244;
  t6242 = 0.4*t6075*t6048;
  t6246 = -0.4*t6245*t6116;
  t6247 = -1.*t6245*t6116;
  t6252 = t6122 + t6247;
  t6261 = -1.*t6075*t6245;
  t6264 = t6261 + t6185;
  t6277 = t6019*t6050;
  t6278 = -1.*t5886*t6053;
  t6279 = t6277 + t6278;
  t6276 = 0.4*t6134*t6058;
  t6280 = -0.4*t6279*t6151;
  t6281 = -1.*t6279*t6151;
  t6282 = t6160 + t6281;
  t6287 = -1.*t6134*t6279;
  t6288 = t6287 + t6207;
  t6266 = t6180*t6252;
  t6298 = t6075*t6245;
  t6299 = t6048*t6116;
  t6300 = t6298 + t6299;
  t6290 = t6195*t6282;
  t6308 = t6134*t6279;
  t6309 = t6058*t6151;
  t6310 = t6308 + t6309;
  p_output1[0]=0;
  p_output1[1]=-390.438;
  p_output1[2]=28.252799999999997*t5886 + t6049 + t6066 + t6133 + t6176 + t6194 + t6238;
  p_output1[3]=t6049 + t6133 + t6194;
  p_output1[4]=t6066 + t6176 + t6238;
  p_output1[5]=-66.708*(t6242 + t6246 - 0.51*t6252) - 2.943*(t6242 + t6246 - 0.8*t6182*t6252 + 0.8*t6187*t6264 - 0.8*(t6187*t6264 + t6266));
  p_output1[6]=-66.708*(t6276 + t6280 - 0.51*t6282) - 2.943*(t6276 + t6280 - 0.8*t6200*t6282 + 0.8*t6210*t6288 - 0.8*(t6210*t6288 + t6290));
  p_output1[7]=-2.943*(0.8*t6180*t6252 - 0.8*t6187*t6300 - 0.8*(t6266 - 1.*t6187*t6300));
  p_output1[8]=-2.943*(0.8*t6195*t6282 - 0.8*t6210*t6310 - 0.8*(t6290 - 1.*t6210*t6310));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ge_vec_seven_link_walker.hh"

namespace SymFunction
{

void Ge_vec_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
