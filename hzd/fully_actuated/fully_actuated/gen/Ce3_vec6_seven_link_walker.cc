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
  double t5568;
  double t5535;
  double t5548;
  double t5578;
  double t5776;
  double t5747;
  double t5819;
  double t5518;
  double t5818;
  double t5820;
  double t5821;
  double t5829;
  double t5830;
  double t5831;
  double t5792;
  double t5793;
  double t5794;
  double t5798;
  double t5811;
  double t5832;
  double t5857;
  double t5861;
  double t5862;
  double t5564;
  double t5711;
  double t5720;
  double t5748;
  double t5751;
  double t5752;
  double t5787;
  double t5812;
  double t5813;
  double t5822;
  double t5833;
  double t5835;
  double t5836;
  double t5844;
  double t5853;
  double t5854;
  double t5856;
  double t5866;
  double t5870;
  double t5872;
  double t5873;
  double t5874;
  double t5721;
  double t5849;
  double t5871;
  double t5880;
  double t5926;
  double t5927;
  double t5928;
  double t5947;
  double t5948;
  double t5949;
  double t5912;
  double t5918;
  double t5958;
  double t5959;
  double t5987;
  double t5992;
  double t5993;
  double t5994;
  double t5998;
  double t6009;
  double t6010;
  double t6011;
  double t6021;
  double t6022;
  double t6023;
  double t6024;
  double t6025;
  double t6026;
  double t6027;
  double t6028;
  double t6031;
  double t6032;
  double t6033;
  double t6035;
  double t6036;
  double t6037;
  double t6059;
  double t6060;
  double t6061;
  double t6056;
  double t6057;
  double t5965;
  double t5966;
  double t5969;
  double t6069;
  double t6070;
  double t6071;
  double t5933;
  double t5937;
  double t5946;
  double t5900;
  double t5913;
  double t6081;
  double t6082;
  double t6084;
  double t6085;
  double t5999;
  double t6000;
  double t6003;
  double t6004;
  double t6006;
  double t6012;
  double t6013;
  double t6015;
  double t6017;
  double t6112;
  double t6113;
  double t6114;
  double t6107;
  double t6108;
  double t6109;
  double t6128;
  double t6129;
  double t6130;
  double t6055;
  double t6063;
  double t6067;
  double t6072;
  double t6077;
  double t6078;
  double t6079;
  double t6080;
  double t6083;
  double t6086;
  double t6087;
  double t6088;
  double t6091;
  double t5919;
  double t5920;
  double t6092;
  double t6093;
  double t6094;
  double t6095;
  double t6106;
  double t6111;
  double t6120;
  double t6121;
  t5568 = Cos(var1[3]);
  t5535 = Cos(var1[5]);
  t5548 = Sin(var1[3]);
  t5578 = Sin(var1[5]);
  t5776 = Cos(var1[7]);
  t5747 = Cos(var1[2]);
  t5819 = Sin(var1[7]);
  t5518 = Sin(var1[2]);
  t5818 = -1.*t5776*t5578;
  t5820 = -1.*t5535*t5819;
  t5821 = t5818 + t5820;
  t5829 = t5535*t5776;
  t5830 = -1.*t5578*t5819;
  t5831 = t5829 + t5830;
  t5792 = -1.*t5776;
  t5793 = 1. + t5792;
  t5794 = -0.8*t5793;
  t5798 = -0.8*t5776;
  t5811 = t5794 + t5798;
  t5832 = t5568*t5831;
  t5857 = t5776*t5578;
  t5861 = t5535*t5819;
  t5862 = t5857 + t5861;
  t5564 = -1.*t5535*t5548;
  t5711 = -1.*t5568*t5578;
  t5720 = t5564 + t5711;
  t5748 = t5568*t5535;
  t5751 = -1.*t5548*t5578;
  t5752 = t5748 + t5751;
  t5787 = 0.4*t5776;
  t5812 = t5811*t5776;
  t5813 = t5787 + t5812;
  t5822 = t5548*t5821;
  t5833 = t5822 + t5832;
  t5835 = t5568*t5821;
  t5836 = -1.*t5548*t5831;
  t5844 = t5835 + t5836;
  t5853 = 0.4*t5819;
  t5854 = t5811*t5819;
  t5856 = t5853 + t5854;
  t5866 = -1.*t5548*t5862;
  t5870 = t5866 + t5832;
  t5872 = t5568*t5862;
  t5873 = t5548*t5831;
  t5874 = t5872 + t5873;
  t5721 = -1.*t5518*t5720;
  t5849 = -1.*t5518*t5844;
  t5871 = -1.*t5518*t5870;
  t5880 = t5747*t5720;
  t5926 = -1.*t5568*t5535;
  t5927 = t5548*t5578;
  t5928 = t5926 + t5927;
  t5947 = -1.*t5548*t5821;
  t5948 = -1.*t5568*t5831;
  t5949 = t5947 + t5948;
  t5912 = t5747*t5844;
  t5918 = t5747*t5870;
  t5958 = -1.*t5568*t5862;
  t5959 = t5958 + t5836;
  t5987 = -1.*t5535;
  t5992 = 1. + t5987;
  t5993 = -0.4*t5992;
  t5994 = -0.51*t5535;
  t5998 = t5993 + t5994;
  t6009 = t5568*t5998;
  t6010 = 0.11*t5548*t5578;
  t6011 = t6009 + t6010;
  t6021 = t5535*t5811;
  t6022 = t5993 + t6021;
  t6023 = t5568*t6022;
  t6024 = 0.4*t5578;
  t6025 = t5811*t5578;
  t6026 = t6024 + t6025;
  t6027 = -1.*t5548*t6026;
  t6028 = t6023 + t6027;
  t6031 = -1.*t6022*t5548;
  t6032 = -1.*t5568*t6026;
  t6033 = t6031 + t6032;
  t6035 = t6022*t5548;
  t6036 = t5568*t6026;
  t6037 = t6035 + t6036;
  t6059 = -0.4*t5578;
  t6060 = -1.*t5811*t5578;
  t6061 = t6059 + t6060;
  t6056 = 0.4*t5535;
  t6057 = t6056 + t6021;
  t5965 = t5518*t5928;
  t5966 = t5880 + t5965;
  t5969 = 0.748*t5966;
  t6069 = -1.*t5535*t5776;
  t6070 = t5578*t5819;
  t6071 = t6069 + t6070;
  t5933 = t5747*t5928;
  t5937 = t5721 + t5933;
  t5946 = 0.748*t5937;
  t5900 = -1.*t5518*t5833;
  t5913 = t5900 + t5912;
  t6081 = t5568*t6071;
  t6082 = t5947 + t6081;
  t6084 = t5548*t6071;
  t6085 = t5835 + t6084;
  t5999 = t5998*t5548;
  t6000 = -0.11*t5568*t5578;
  t6003 = t5999 + t6000;
  t6004 = t6003*t5752;
  t6006 = 0.11*t5568*t5578;
  t6012 = t5720*t6011;
  t6013 = t5535*t5548;
  t6015 = t5568*t5578;
  t6017 = t6013 + t6015;
  t6112 = t5568*t6057;
  t6113 = t5548*t6061;
  t6114 = t6112 + t6113;
  t6107 = -1.*t6057*t5548;
  t6108 = t5568*t6061;
  t6109 = t6107 + t6108;
  t6128 = -0.4*t5819;
  t6129 = -1.*t5811*t5819;
  t6130 = t6128 + t6129;
  t6055 = t6022*t5821;
  t6063 = t6026*t5831;
  t6067 = -1.*t6026*t5821;
  t6072 = -1.*t6022*t6071;
  t6077 = t5747*t5833;
  t6078 = t5518*t5844;
  t6079 = t6077 + t6078;
  t6080 = -0.3*t5856*t6079;
  t6083 = t5518*t6082;
  t6086 = t5747*t6085;
  t6087 = t6083 + t6086;
  t6088 = -0.3*t5813*t6087;
  t6091 = -0.3*t5856*t5913;
  t5919 = -1.*t5518*t5874;
  t5920 = t5918 + t5919;
  t6092 = t5747*t6082;
  t6093 = -1.*t5518*t6085;
  t6094 = t6092 + t6093;
  t6095 = -0.3*t5813*t6094;
  t6106 = t6037*t5833;
  t6111 = t6028*t5844;
  t6120 = -1.*t6028*t6082;
  t6121 = -1.*t6037*t6085;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(0.748*(-1.*t5518*t5752 + t5880) - 0.3*t5813*t5913 - 0.3*t5856*t5920)*var2[0] - 0.5*(0.748*(t5721 - 1.*t5747*t5752) - 0.3*t5813*(-1.*t5747*t5833 + t5849) - 0.3*t5856*(t5871 - 1.*t5747*t5874))*var2[1])*var2[5];
  p_output1[3]=(-0.5*(-0.3*t5813*(t5912 + t5518*t5949) - 0.3*t5856*(t5918 + t5518*t5959) + t5969)*var2[0] - 0.5*(t5946 - 0.3*t5813*(t5849 + t5747*t5949) - 0.3*t5856*(t5871 + t5747*t5959))*var2[1] - 0.5*(0.748*(t6004 + t5752*(-1.*t5548*t5998 + t6006) + t6012 + t6011*t6017) - 0.3*t5856*(-1.*t5833*t6028 - 1.*t5949*t6028 - 1.*t5844*t6033 - 1.*t5844*t6037) - 0.3*t5813*(t5874*t6028 + t5959*t6028 + t5870*t6033 + t5870*t6037))*var2[2])*var2[5];
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t5969 + t6080 + t6088)*var2[0] - 0.5*(t5946 + t6091 + t6095)*var2[1] - 0.5*(0.748*(t6004 + t5752*(0.11*t5535*t5548 + t6006) + t6012 + (-0.11*t5535*t5568 + t6010)*t6017) - 0.3*t5813*(t6106 + t5870*t6109 + t6111 + t5874*t6114) - 0.3*t5856*(-1.*t5844*t6109 - 1.*t5833*t6114 + t6120 + t6121))*var2[2] - 0.5*(0.748*(-0.11*t5535*t5578 - 1.*t5578*t5998) - 0.3*t5813*(t6055 + t5862*t6057 + t5831*t6061 + t6063) - 0.3*t5856*(-1.*t5831*t6057 - 1.*t5821*t6061 + t6067 + t6072))*var2[3])*var2[5];
  p_output1[6]=0;
  p_output1[7]=var2[5]*(-0.5*(-0.3*t5813*(t5518*t5870 + t5747*t5874) + t6080 + t6088 - 0.3*t6079*t6130)*var2[0] - 0.5*(-0.3*t5813*t5920 + t6091 + t6095 - 0.3*t5913*t6130)*var2[1] - 0.5*(-0.3*t5813*(-1.*t5844*t6028 - 1.*t5833*t6037) - 0.3*t5813*(t6106 + t6111) - 0.3*t5856*(t6120 + t6121) - 0.3*(t5870*t6028 + t5874*t6037)*t6130)*var2[2] - 0.5*(-0.3*t5813*(-1.*t5821*t6022 - 1.*t5831*t6026) - 0.3*t5813*(t6055 + t6063) - 0.3*t5856*(t6067 + t6072) - 0.3*(t5831*t6022 + t5862*t6026)*t6130)*var2[3] - 0.5*(-0.6*t5813*t5856 - 0.6*t5813*t6130)*var2[5]);
  p_output1[8]=0;
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

#include "Ce3_vec6_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec6_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
