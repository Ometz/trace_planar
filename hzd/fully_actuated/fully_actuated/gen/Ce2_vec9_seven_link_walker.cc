/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:19 GMT-04:00
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
  double t3870;
  double t3843;
  double t3929;
  double t3927;
  double t3938;
  double t3928;
  double t3930;
  double t3931;
  double t3926;
  double t3939;
  double t3945;
  double t3951;
  double t3871;
  double t3872;
  double t3873;
  double t3888;
  double t3912;
  double t3920;
  double t3937;
  double t3952;
  double t3953;
  double t3954;
  double t3955;
  double t3956;
  double t3957;
  double t3958;
  double t3959;
  double t3965;
  double t3974;
  double t3975;
  double t3976;
  double t3971;
  double t3972;
  double t3973;
  double t3987;
  double t3988;
  double t3989;
  double t4000;
  double t4001;
  double t4002;
  double t4003;
  double t4004;
  double t4006;
  double t4007;
  double t4008;
  double t3977;
  double t3978;
  double t3979;
  double t3980;
  double t3981;
  double t3982;
  double t3983;
  double t3984;
  double t3986;
  double t3990;
  double t3991;
  double t3992;
  double t3993;
  double t3994;
  double t3995;
  double t3996;
  double t4030;
  double t4031;
  double t4032;
  double t4045;
  double t4046;
  double t4047;
  double t4049;
  double t4050;
  double t4051;
  double t3869;
  double t3913;
  double t3914;
  double t3967;
  double t3968;
  double t3969;
  double t4034;
  double t4035;
  double t4036;
  double t4039;
  double t4040;
  double t4041;
  double t4005;
  double t4009;
  double t4010;
  double t4012;
  double t4013;
  double t4014;
  double t4016;
  double t4017;
  double t4018;
  double t4020;
  double t4021;
  double t4022;
  double t4033;
  double t4037;
  double t4038;
  double t4042;
  double t4043;
  double t4048;
  double t4052;
  double t4053;
  double t4055;
  double t4056;
  double t4057;
  double t4059;
  double t4060;
  double t4061;
  double t4063;
  double t4064;
  double t4065;
  double t4054;
  double t4058;
  double t4062;
  double t4066;
  double t4067;
  double t4088;
  double t4089;
  double t4090;
  double t4091;
  double t4092;
  double t4011;
  double t4015;
  double t4019;
  double t4023;
  double t4024;
  double t4077;
  double t4078;
  double t4079;
  double t4080;
  double t4081;
  double t4102;
  double t4103;
  double t4104;
  double t4105;
  double t4106;
  double t4116;
  double t4117;
  double t4118;
  double t4119;
  double t4120;
  double t3966;
  double t3970;
  double t3985;
  double t3997;
  double t3998;
  double t4071;
  double t4072;
  double t4073;
  double t4074;
  double t4075;
  double t4096;
  double t4097;
  double t4098;
  double t4099;
  double t4100;
  t3870 = Cos(var1[8]);
  t3843 = Sin(var1[8]);
  t3929 = Cos(var1[6]);
  t3927 = Sin(var1[6]);
  t3938 = Cos(var1[4]);
  t3928 = -1.*t3870*t3927;
  t3930 = -1.*t3929*t3843;
  t3931 = t3928 + t3930;
  t3926 = Sin(var1[4]);
  t3939 = t3929*t3870;
  t3945 = -1.*t3927*t3843;
  t3951 = t3939 + t3945;
  t3871 = -1.*t3870;
  t3872 = 1. + t3871;
  t3873 = -0.8*t3872;
  t3888 = -0.8*t3870;
  t3912 = t3873 + t3888;
  t3920 = Cos(var1[2]);
  t3937 = t3926*t3931;
  t3952 = t3938*t3951;
  t3953 = t3937 + t3952;
  t3954 = t3920*t3953;
  t3955 = Sin(var1[2]);
  t3956 = t3938*t3931;
  t3957 = -1.*t3926*t3951;
  t3958 = t3956 + t3957;
  t3959 = t3955*t3958;
  t3965 = t3954 + t3959;
  t3974 = t3870*t3927;
  t3975 = t3929*t3843;
  t3976 = t3974 + t3975;
  t3971 = 0.4*t3870;
  t3972 = t3912*t3870;
  t3973 = t3971 + t3972;
  t3987 = -1.*t3929*t3870;
  t3988 = t3927*t3843;
  t3989 = t3987 + t3988;
  t4000 = -1.*t3929;
  t4001 = 1. + t4000;
  t4002 = -0.4*t4001;
  t4003 = t3929*t3912;
  t4004 = t4002 + t4003;
  t4006 = 0.4*t3927;
  t4007 = t3912*t3927;
  t4008 = t4006 + t4007;
  t3977 = -1.*t3926*t3976;
  t3978 = t3977 + t3952;
  t3979 = t3955*t3978;
  t3980 = t3938*t3976;
  t3981 = t3926*t3951;
  t3982 = t3980 + t3981;
  t3983 = t3920*t3982;
  t3984 = t3979 + t3983;
  t3986 = -1.*t3926*t3931;
  t3990 = t3938*t3989;
  t3991 = t3986 + t3990;
  t3992 = t3955*t3991;
  t3993 = t3926*t3989;
  t3994 = t3956 + t3993;
  t3995 = t3920*t3994;
  t3996 = t3992 + t3995;
  t4030 = -1.*t3955*t3953;
  t4031 = t3920*t3958;
  t4032 = t4030 + t4031;
  t4045 = t4004*t3926;
  t4046 = t3938*t4008;
  t4047 = t4045 + t4046;
  t4049 = t3938*t4004;
  t4050 = -1.*t3926*t4008;
  t4051 = t4049 + t4050;
  t3869 = -0.4*t3843;
  t3913 = -1.*t3912*t3843;
  t3914 = t3869 + t3913;
  t3967 = 0.4*t3843;
  t3968 = t3912*t3843;
  t3969 = t3967 + t3968;
  t4034 = t3920*t3978;
  t4035 = -1.*t3955*t3982;
  t4036 = t4034 + t4035;
  t4039 = t3920*t3991;
  t4040 = -1.*t3955*t3994;
  t4041 = t4039 + t4040;
  t4005 = -1.*t4004*t3931;
  t4009 = -1.*t4008*t3951;
  t4010 = t4005 + t4009;
  t4012 = t4004*t3931;
  t4013 = t4008*t3951;
  t4014 = t4012 + t4013;
  t4016 = -1.*t4008*t3931;
  t4017 = -1.*t4004*t3989;
  t4018 = t4016 + t4017;
  t4020 = t4008*t3976;
  t4021 = t4004*t3951;
  t4022 = t4020 + t4021;
  t4033 = 0.3*t4032*t3984;
  t4037 = 0.3*t3965*t4036;
  t4038 = 0.3*t4032*t3996;
  t4042 = 0.3*t3965*t4041;
  t4043 = t4033 + t4037 + t4038 + t4042;
  t4048 = -1.*t4047*t3953;
  t4052 = -1.*t4051*t3958;
  t4053 = t4048 + t4052;
  t4055 = t4047*t3953;
  t4056 = t4051*t3958;
  t4057 = t4055 + t4056;
  t4059 = t4051*t3978;
  t4060 = t4047*t3982;
  t4061 = t4059 + t4060;
  t4063 = -1.*t4051*t3991;
  t4064 = -1.*t4047*t3994;
  t4065 = t4063 + t4064;
  t4054 = 0.3*t3965*t4053;
  t4058 = 0.3*t3965*t4057;
  t4062 = 0.3*t4061*t3996;
  t4066 = 0.3*t3984*t4065;
  t4067 = t4054 + t4058 + t4062 + t4066;
  t4088 = 0.3*t4032*t4053;
  t4089 = 0.3*t4032*t4057;
  t4090 = 0.3*t4061*t4041;
  t4091 = 0.3*t4036*t4065;
  t4092 = t4088 + t4089 + t4090 + t4091;
  t4011 = 0.3*t4010*t3965;
  t4015 = 0.3*t4014*t3965;
  t4019 = 0.3*t4018*t3984;
  t4023 = 0.3*t4022*t3996;
  t4024 = t4011 + t4015 + t4019 + t4023;
  t4077 = 0.3*t4010*t4032;
  t4078 = 0.3*t4014*t4032;
  t4079 = 0.3*t4018*t4036;
  t4080 = 0.3*t4022*t4041;
  t4081 = t4077 + t4078 + t4079 + t4080;
  t4102 = 0.3*t4018*t4053;
  t4103 = 0.3*t4022*t4057;
  t4104 = 0.3*t4014*t4061;
  t4105 = 0.3*t4010*t4065;
  t4106 = t4102 + t4103 + t4104 + t4105;
  t4116 = 0.3*t3914*t4022;
  t4117 = 0.3*t3973*t4010;
  t4118 = 0.3*t3973*t4014;
  t4119 = 0.3*t3969*t4018;
  t4120 = t4116 + t4117 + t4118 + t4119;
  t3966 = 0.3*t3914*t3965;
  t3970 = 0.3*t3969*t3965;
  t3985 = 0.3*t3973*t3984;
  t3997 = 0.3*t3973*t3996;
  t3998 = t3966 + t3970 + t3985 + t3997;
  t4071 = 0.3*t3914*t4032;
  t4072 = 0.3*t3969*t4032;
  t4073 = 0.3*t3973*t4036;
  t4074 = 0.3*t3973*t4041;
  t4075 = t4071 + t4072 + t4073 + t4074;
  t4096 = 0.3*t3973*t4053;
  t4097 = 0.3*t3973*t4057;
  t4098 = 0.3*t3914*t4061;
  t4099 = 0.3*t3969*t4065;
  t4100 = t4096 + t4097 + t4098 + t4099;
  p_output1[0]=(-0.5*(0.6*t3965*t3984 + 0.6*t3965*t3996)*var2[0] - 0.5*t4043*var2[1] - 0.5*t4067*var2[2] - 0.5*t4024*var2[4] - 0.5*t3998*var2[6])*var2[8];
  p_output1[1]=(-0.5*t4043*var2[0] - 0.5*(0.6*t4032*t4036 + 0.6*t4032*t4041)*var2[1] - 0.5*t4092*var2[2] - 0.5*t4081*var2[4] - 0.5*t4075*var2[6])*var2[8];
  p_output1[2]=(-0.5*t4067*var2[0] - 0.5*t4092*var2[1] - 0.5*(0.6*t4057*t4061 + 0.6*t4053*t4065)*var2[2] - 0.5*t4106*var2[4] - 0.5*t4100*var2[6])*var2[8];
  p_output1[3]=0;
  p_output1[4]=(-0.5*t4024*var2[0] - 0.5*t4081*var2[1] - 0.5*t4106*var2[2] - 0.5*(0.6*t4010*t4018 + 0.6*t4014*t4022)*var2[4] - 0.5*t4120*var2[6])*var2[8];
  p_output1[5]=0;
  p_output1[6]=(-0.5*t3998*var2[0] - 0.5*t4075*var2[1] - 0.5*t4100*var2[2] - 0.5*t4120*var2[4] - 0.5*(0.6*t3914*t3973 + 0.6*t3969*t3973)*var2[6])*var2[8];
  p_output1[7]=0;
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

#include "Ce2_vec9_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec9_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
