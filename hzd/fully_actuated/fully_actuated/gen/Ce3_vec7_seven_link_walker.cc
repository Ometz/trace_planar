/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:21 GMT-04:00
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
  double t5850;
  double t5765;
  double t5772;
  double t5851;
  double t5922;
  double t5878;
  double t5963;
  double t5757;
  double t5962;
  double t5964;
  double t5972;
  double t5974;
  double t5975;
  double t5976;
  double t5924;
  double t5925;
  double t5951;
  double t5952;
  double t5957;
  double t5977;
  double t6038;
  double t6039;
  double t6040;
  double t5834;
  double t5875;
  double t5876;
  double t5879;
  double t5881;
  double t5882;
  double t5923;
  double t5960;
  double t5961;
  double t5973;
  double t5978;
  double t6005;
  double t6007;
  double t6008;
  double t6029;
  double t6030;
  double t6034;
  double t6041;
  double t6042;
  double t6044;
  double t6045;
  double t6046;
  double t5877;
  double t6018;
  double t6043;
  double t6052;
  double t6097;
  double t6098;
  double t6099;
  double t6103;
  double t6104;
  double t6105;
  double t6064;
  double t6068;
  double t6117;
  double t6118;
  double t6140;
  double t6141;
  double t6142;
  double t6143;
  double t6144;
  double t6153;
  double t6154;
  double t6155;
  double t6163;
  double t6164;
  double t6165;
  double t6166;
  double t6167;
  double t6168;
  double t6169;
  double t6170;
  double t6173;
  double t6174;
  double t6175;
  double t6177;
  double t6178;
  double t6179;
  double t6201;
  double t6202;
  double t6203;
  double t6198;
  double t6199;
  double t6126;
  double t6127;
  double t6131;
  double t6211;
  double t6212;
  double t6213;
  double t6100;
  double t6101;
  double t6102;
  double t6062;
  double t6065;
  double t6223;
  double t6224;
  double t6226;
  double t6227;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6150;
  double t6156;
  double t6157;
  double t6158;
  double t6159;
  double t6254;
  double t6255;
  double t6256;
  double t6249;
  double t6250;
  double t6251;
  double t6270;
  double t6271;
  double t6272;
  double t6197;
  double t6205;
  double t6209;
  double t6214;
  double t6219;
  double t6220;
  double t6221;
  double t6222;
  double t6225;
  double t6228;
  double t6229;
  double t6230;
  double t6233;
  double t6073;
  double t6074;
  double t6234;
  double t6235;
  double t6236;
  double t6237;
  double t6248;
  double t6253;
  double t6262;
  double t6263;
  t5850 = Cos(var1[4]);
  t5765 = Cos(var1[6]);
  t5772 = Sin(var1[4]);
  t5851 = Sin(var1[6]);
  t5922 = Cos(var1[8]);
  t5878 = Cos(var1[2]);
  t5963 = Sin(var1[8]);
  t5757 = Sin(var1[2]);
  t5962 = -1.*t5922*t5851;
  t5964 = -1.*t5765*t5963;
  t5972 = t5962 + t5964;
  t5974 = t5765*t5922;
  t5975 = -1.*t5851*t5963;
  t5976 = t5974 + t5975;
  t5924 = -1.*t5922;
  t5925 = 1. + t5924;
  t5951 = -0.8*t5925;
  t5952 = -0.8*t5922;
  t5957 = t5951 + t5952;
  t5977 = t5850*t5976;
  t6038 = t5922*t5851;
  t6039 = t5765*t5963;
  t6040 = t6038 + t6039;
  t5834 = -1.*t5765*t5772;
  t5875 = -1.*t5850*t5851;
  t5876 = t5834 + t5875;
  t5879 = t5850*t5765;
  t5881 = -1.*t5772*t5851;
  t5882 = t5879 + t5881;
  t5923 = 0.4*t5922;
  t5960 = t5957*t5922;
  t5961 = t5923 + t5960;
  t5973 = t5772*t5972;
  t5978 = t5973 + t5977;
  t6005 = t5850*t5972;
  t6007 = -1.*t5772*t5976;
  t6008 = t6005 + t6007;
  t6029 = 0.4*t5963;
  t6030 = t5957*t5963;
  t6034 = t6029 + t6030;
  t6041 = -1.*t5772*t6040;
  t6042 = t6041 + t5977;
  t6044 = t5850*t6040;
  t6045 = t5772*t5976;
  t6046 = t6044 + t6045;
  t5877 = -1.*t5757*t5876;
  t6018 = -1.*t5757*t6008;
  t6043 = -1.*t5757*t6042;
  t6052 = t5878*t5876;
  t6097 = -1.*t5850*t5765;
  t6098 = t5772*t5851;
  t6099 = t6097 + t6098;
  t6103 = -1.*t5772*t5972;
  t6104 = -1.*t5850*t5976;
  t6105 = t6103 + t6104;
  t6064 = t5878*t6008;
  t6068 = t5878*t6042;
  t6117 = -1.*t5850*t6040;
  t6118 = t6117 + t6007;
  t6140 = -1.*t5765;
  t6141 = 1. + t6140;
  t6142 = -0.4*t6141;
  t6143 = -0.51*t5765;
  t6144 = t6142 + t6143;
  t6153 = t5850*t6144;
  t6154 = 0.11*t5772*t5851;
  t6155 = t6153 + t6154;
  t6163 = t5765*t5957;
  t6164 = t6142 + t6163;
  t6165 = t5850*t6164;
  t6166 = 0.4*t5851;
  t6167 = t5957*t5851;
  t6168 = t6166 + t6167;
  t6169 = -1.*t5772*t6168;
  t6170 = t6165 + t6169;
  t6173 = -1.*t6164*t5772;
  t6174 = -1.*t5850*t6168;
  t6175 = t6173 + t6174;
  t6177 = t6164*t5772;
  t6178 = t5850*t6168;
  t6179 = t6177 + t6178;
  t6201 = -0.4*t5851;
  t6202 = -1.*t5957*t5851;
  t6203 = t6201 + t6202;
  t6198 = 0.4*t5765;
  t6199 = t6198 + t6163;
  t6126 = t5757*t6099;
  t6127 = t6052 + t6126;
  t6131 = 0.748*t6127;
  t6211 = -1.*t5765*t5922;
  t6212 = t5851*t5963;
  t6213 = t6211 + t6212;
  t6100 = t5878*t6099;
  t6101 = t5877 + t6100;
  t6102 = 0.748*t6101;
  t6062 = -1.*t5757*t5978;
  t6065 = t6062 + t6064;
  t6223 = t5850*t6213;
  t6224 = t6103 + t6223;
  t6226 = t5772*t6213;
  t6227 = t6005 + t6226;
  t6145 = t6144*t5772;
  t6146 = -0.11*t5850*t5851;
  t6147 = t6145 + t6146;
  t6148 = t6147*t5882;
  t6150 = 0.11*t5850*t5851;
  t6156 = t5876*t6155;
  t6157 = t5765*t5772;
  t6158 = t5850*t5851;
  t6159 = t6157 + t6158;
  t6254 = t5850*t6199;
  t6255 = t5772*t6203;
  t6256 = t6254 + t6255;
  t6249 = -1.*t6199*t5772;
  t6250 = t5850*t6203;
  t6251 = t6249 + t6250;
  t6270 = -0.4*t5963;
  t6271 = -1.*t5957*t5963;
  t6272 = t6270 + t6271;
  t6197 = t6164*t5972;
  t6205 = t6168*t5976;
  t6209 = -1.*t6168*t5972;
  t6214 = -1.*t6164*t6213;
  t6219 = t5878*t5978;
  t6220 = t5757*t6008;
  t6221 = t6219 + t6220;
  t6222 = -0.3*t6034*t6221;
  t6225 = t5757*t6224;
  t6228 = t5878*t6227;
  t6229 = t6225 + t6228;
  t6230 = -0.3*t5961*t6229;
  t6233 = -0.3*t6034*t6065;
  t6073 = -1.*t5757*t6046;
  t6074 = t6068 + t6073;
  t6234 = t5878*t6224;
  t6235 = -1.*t5757*t6227;
  t6236 = t6234 + t6235;
  t6237 = -0.3*t5961*t6236;
  t6248 = t6179*t5978;
  t6253 = t6170*t6008;
  t6262 = -1.*t6170*t6224;
  t6263 = -1.*t6179*t6227;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(0.748*(-1.*t5757*t5882 + t6052) - 0.3*t5961*t6065 - 0.3*t6034*t6074)*var2[0] - 0.5*(0.748*(t5877 - 1.*t5878*t5882) - 0.3*t5961*(-1.*t5878*t5978 + t6018) - 0.3*t6034*(t6043 - 1.*t5878*t6046))*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=(-0.5*(-0.3*t5961*(t6064 + t5757*t6105) - 0.3*t6034*(t6068 + t5757*t6118) + t6131)*var2[0] - 0.5*(t6102 - 0.3*t5961*(t6018 + t5878*t6105) - 0.3*t6034*(t6043 + t5878*t6118))*var2[1] - 0.5*(0.748*(t6148 + t5882*(-1.*t5772*t6144 + t6150) + t6156 + t6155*t6159) - 0.3*t6034*(-1.*t5978*t6170 - 1.*t6105*t6170 - 1.*t6008*t6175 - 1.*t6008*t6179) - 0.3*t5961*(t6046*t6170 + t6118*t6170 + t6042*t6175 + t6042*t6179))*var2[2])*var2[6];
  p_output1[5]=0;
  p_output1[6]=(-0.5*(t6131 + t6222 + t6230)*var2[0] - 0.5*(t6102 + t6233 + t6237)*var2[1] - 0.5*(0.748*(t6148 + t5882*(0.11*t5765*t5772 + t6150) + t6156 + (-0.11*t5765*t5850 + t6154)*t6159) - 0.3*t5961*(t6248 + t6042*t6251 + t6253 + t6046*t6256) - 0.3*t6034*(-1.*t6008*t6251 - 1.*t5978*t6256 + t6262 + t6263))*var2[2] - 0.5*(0.748*(-0.11*t5765*t5851 - 1.*t5851*t6144) - 0.3*t5961*(t6197 + t6040*t6199 + t5976*t6203 + t6205) - 0.3*t6034*(-1.*t5976*t6199 - 1.*t5972*t6203 + t6209 + t6214))*var2[4])*var2[6];
  p_output1[7]=0;
  p_output1[8]=var2[6]*(-0.5*(-0.3*t5961*(t5757*t6042 + t5878*t6046) + t6222 + t6230 - 0.3*t6221*t6272)*var2[0] - 0.5*(-0.3*t5961*t6074 + t6233 + t6237 - 0.3*t6065*t6272)*var2[1] - 0.5*(-0.3*t5961*(-1.*t6008*t6170 - 1.*t5978*t6179) - 0.3*t5961*(t6248 + t6253) - 0.3*t6034*(t6262 + t6263) - 0.3*(t6042*t6170 + t6046*t6179)*t6272)*var2[2] - 0.5*(-0.3*t5961*(-1.*t5972*t6164 - 1.*t5976*t6168) - 0.3*t5961*(t6197 + t6205) - 0.3*t6034*(t6209 + t6214) - 0.3*(t5976*t6164 + t6040*t6168)*t6272)*var2[4] - 0.5*(-0.6*t5961*t6034 - 0.6*t5961*t6272)*var2[6]);
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

#include "Ce3_vec7_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec7_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
