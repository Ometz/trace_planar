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
  double t1912;
  double t2121;
  double t2469;
  double t2799;
  double t2980;
  double t3097;
  double t3801;
  double t4639;
  double t4773;
  double t5136;
  double t5193;
  double t5269;
  double t5360;
  double t5543;
  double t5605;
  double t8097;
  double t6315;
  double t9372;
  double t9635;
  double t10182;
  double t11385;
  double t12158;
  double t8803;
  double t12486;
  double t12772;
  double t13737;
  double t13829;
  double t14125;
  double t14380;
  double t8103;
  double t8773;
  double t6356;
  double t8977;
  double t9092;
  double t14876;
  double t15169;
  double t15200;
  double t15265;
  double t15276;
  double t15329;
  double t15337;
  double t15719;
  double t15725;
  double t15735;
  double t15737;
  double t15753;
  double t15761;
  double t15767;
  double t15790;
  double t15796;
  double t15799;
  double t15808;
  double t15809;
  double t15810;
  double t15824;
  double t15819;
  double t15944;
  double t15948;
  double t15952;
  double t15959;
  double t15960;
  double t15844;
  double t15964;
  double t15974;
  double t15980;
  double t15988;
  double t16016;
  double t16017;
  double t15838;
  double t15843;
  double t15823;
  double t15845;
  double t15846;
  double t16056;
  double t16060;
  double t16062;
  double t16067;
  double t16073;
  double t16092;
  double t16116;
  double t15754;
  double t15811;
  double t15857;
  double t15864;
  double t15943;
  double t15963;
  double t16018;
  double t16019;
  double t16036;
  double t16037;
  double t16052;
  double t16057;
  double t16124;
  double t16130;
  double t16131;
  double t16135;
  double t16621;
  double t16664;
  double t16764;
  double t4544;
  double t6274;
  double t9124;
  double t9294;
  double t9348;
  double t12269;
  double t14645;
  double t14685;
  double t14764;
  double t14790;
  double t14791;
  double t15000;
  double t15338;
  double t15358;
  double t15460;
  double t15495;
  double t15515;
  double t15628;
  double t15703;
  double t16772;
  double t16823;
  double t17008;
  double t17066;
  double t17128;
  double t17897;
  double t17997;
  double t18023;
  double t18046;
  double t18714;
  double t18758;
  double t18779;
  double t18885;
  double t18910;
  double t19806;
  double t19818;
  double t19835;
  double t19836;
  double t17450;
  double t19052;
  t1912 = Cos(var1[2]);
  t2121 = Cos(var1[4]);
  t2469 = t1912*t2121;
  t2799 = Sin(var1[2]);
  t2980 = Sin(var1[4]);
  t3097 = -1.*t2799*t2980;
  t3801 = t2469 + t3097;
  t4639 = Cos(var1[6]);
  t4773 = t4639*t3801;
  t5136 = -1.*t2121*t2799;
  t5193 = -1.*t1912*t2980;
  t5269 = t5136 + t5193;
  t5360 = Sin(var1[6]);
  t5543 = t5269*t5360;
  t5605 = t4773 + t5543;
  t8097 = t4639*t5269;
  t6315 = Cos(var1[8]);
  t9372 = -1.*t1912*t2121;
  t9635 = t2799*t2980;
  t10182 = t9372 + t9635;
  t11385 = t10182*t5360;
  t12158 = t8097 + t11385;
  t8803 = Sin(var1[8]);
  t12486 = t6315*t12158;
  t12772 = t4639*t10182;
  t13737 = -1.*t5269*t5360;
  t13829 = t12772 + t13737;
  t14125 = t13829*t8803;
  t14380 = t12486 + t14125;
  t8103 = -1.*t3801*t5360;
  t8773 = t8097 + t8103;
  t6356 = t6315*t5605;
  t8977 = t8773*t8803;
  t9092 = t6356 + t8977;
  t14876 = Power(t9092,2);
  t15169 = -1.*t6315*t8773;
  t15200 = t5605*t8803;
  t15265 = t15169 + t15200;
  t15276 = Power(t15265,2);
  t15329 = t15276 + t14876;
  t15337 = 1/t15329;
  t15719 = Cos(var1[3]);
  t15725 = t1912*t15719;
  t15735 = Sin(var1[3]);
  t15737 = -1.*t2799*t15735;
  t15753 = t15725 + t15737;
  t15761 = Cos(var1[5]);
  t15767 = t15761*t15753;
  t15790 = -1.*t15719*t2799;
  t15796 = -1.*t1912*t15735;
  t15799 = t15790 + t15796;
  t15808 = Sin(var1[5]);
  t15809 = t15799*t15808;
  t15810 = t15767 + t15809;
  t15824 = t15761*t15799;
  t15819 = Cos(var1[7]);
  t15944 = -1.*t1912*t15719;
  t15948 = t2799*t15735;
  t15952 = t15944 + t15948;
  t15959 = t15952*t15808;
  t15960 = t15824 + t15959;
  t15844 = Sin(var1[7]);
  t15964 = t15819*t15960;
  t15974 = t15761*t15952;
  t15980 = -1.*t15799*t15808;
  t15988 = t15974 + t15980;
  t16016 = t15988*t15844;
  t16017 = t15964 + t16016;
  t15838 = -1.*t15753*t15808;
  t15843 = t15824 + t15838;
  t15823 = t15819*t15810;
  t15845 = t15843*t15844;
  t15846 = t15823 + t15845;
  t16056 = Power(t15846,2);
  t16060 = -1.*t15819*t15843;
  t16062 = t15810*t15844;
  t16067 = t16060 + t16062;
  t16073 = Power(t16067,2);
  t16092 = t16073 + t16056;
  t16116 = 1/t16092;
  t15754 = -0.4*t15753;
  t15811 = -0.4*t15810;
  t15857 = -0.025*t15846;
  t15864 = t15754 + t15811 + t15857;
  t15943 = -0.4*t15799;
  t15963 = -0.4*t15960;
  t16018 = -0.025*t16017;
  t16019 = t15943 + t15963 + t16018;
  t16036 = t15819*t15843;
  t16037 = -1.*t15810*t15844;
  t16052 = t16036 + t16037;
  t16057 = 1/Sqrt(t16056);
  t16124 = t16017*t16052*t15846*t16057*t16116;
  t16130 = Sqrt(t16056);
  t16131 = -1.*t15819*t15988;
  t16135 = t15960*t15844;
  t16621 = t16131 + t16135;
  t16664 = t16130*t16621*t16116;
  t16764 = t16124 + t16664;
  t4544 = -0.4*t3801;
  t6274 = -0.4*t5605;
  t9124 = -0.025*t9092;
  t9294 = t4544 + t6274 + t9124;
  t9348 = -0.4*t5269;
  t12269 = -0.4*t12158;
  t14645 = -0.025*t14380;
  t14685 = t9348 + t12269 + t14645;
  t14764 = t6315*t8773;
  t14790 = -1.*t5605*t8803;
  t14791 = t14764 + t14790;
  t15000 = 1/Sqrt(t14876);
  t15338 = t14380*t14791*t9092*t15000*t15337;
  t15358 = Sqrt(t14876);
  t15460 = -1.*t6315*t13829;
  t15495 = t12158*t8803;
  t15515 = t15460 + t15495;
  t15628 = t15358*t15515*t15337;
  t15703 = t15338 + t15628;
  t16772 = t15719*t2799;
  t16823 = t1912*t15735;
  t17008 = t16772 + t16823;
  t17066 = -1.*t17008*t15808;
  t17128 = t15767 + t17066;
  t17897 = -1.*t15761*t15753;
  t17997 = t17897 + t15980;
  t18023 = t17997*t15844;
  t18046 = t16036 + t18023;
  t18714 = t2121*t2799;
  t18758 = t1912*t2980;
  t18779 = t18714 + t18758;
  t18885 = -1.*t18779*t5360;
  t18910 = t4773 + t18885;
  t19806 = -1.*t4639*t3801;
  t19818 = t19806 + t13737;
  t19835 = t19818*t8803;
  t19836 = t14764 + t19835;
  t17450 = t15819*t17128;
  t19052 = t6315*t18910;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=1.;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=1.;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=1.;
  p_output1[21]=t9294;
  p_output1[22]=t14685;
  p_output1[23]=t15703;
  p_output1[24]=t15864;
  p_output1[25]=t16019;
  p_output1[26]=t16764;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t15864;
  p_output1[34]=t16019;
  p_output1[35]=t16764;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t9294;
  p_output1[40]=t14685;
  p_output1[41]=t15703;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=-0.4*t17128 - 0.025*(t15844*(t15838 - 1.*t15761*t17008) + t17450);
  p_output1[52]=-0.4*t15843 - 0.025*t18046;
  p_output1[53]=t16116*t16130*(t15845 - 1.*t15819*t17997) + t15846*t16052*t16057*t16116*t18046;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=-0.4*t18910 - 0.025*(t19052 + (-1.*t18779*t4639 + t8103)*t8803);
  p_output1[58]=-0.025*t19836 - 0.4*t8773;
  p_output1[59]=t15337*t15358*(-1.*t19818*t6315 + t8977) + t14791*t15000*t15337*t19836*t9092;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=-0.025*(-1.*t15844*(t15753*t15808 + t15761*t17008) + t17450);
  p_output1[70]=-0.025*t16052;
  p_output1[71]=t15846*Power(t16052,2)*t16057*t16116 + t15846*t16116*t16130;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=-0.025*(t19052 - 1.*(t18779*t4639 + t3801*t5360)*t8803);
  p_output1[76]=-0.025*t14791;
  p_output1[77]=Power(t14791,2)*t15000*t15337*t9092 + t15337*t15358*t9092;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_opt_hc_func.hh"

namespace SymFunction
{

void j_opt_hc_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
