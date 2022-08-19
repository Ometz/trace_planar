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
  double t3653;
  double t3575;
  double t3767;
  double t3756;
  double t3771;
  double t3766;
  double t3768;
  double t3769;
  double t3751;
  double t3772;
  double t3773;
  double t3783;
  double t3654;
  double t3655;
  double t3656;
  double t3657;
  double t3658;
  double t3750;
  double t3770;
  double t3784;
  double t3785;
  double t3790;
  double t3800;
  double t3801;
  double t3802;
  double t3803;
  double t3804;
  double t3805;
  double t3818;
  double t3819;
  double t3820;
  double t3815;
  double t3816;
  double t3817;
  double t3831;
  double t3832;
  double t3833;
  double t3844;
  double t3845;
  double t3846;
  double t3847;
  double t3848;
  double t3850;
  double t3851;
  double t3852;
  double t3821;
  double t3822;
  double t3823;
  double t3824;
  double t3825;
  double t3826;
  double t3827;
  double t3828;
  double t3830;
  double t3834;
  double t3835;
  double t3836;
  double t3837;
  double t3838;
  double t3839;
  double t3840;
  double t3874;
  double t3875;
  double t3876;
  double t3889;
  double t3890;
  double t3891;
  double t3893;
  double t3894;
  double t3895;
  double t3652;
  double t3684;
  double t3749;
  double t3807;
  double t3808;
  double t3809;
  double t3878;
  double t3879;
  double t3880;
  double t3883;
  double t3884;
  double t3885;
  double t3849;
  double t3853;
  double t3854;
  double t3856;
  double t3857;
  double t3858;
  double t3860;
  double t3861;
  double t3862;
  double t3864;
  double t3865;
  double t3866;
  double t3877;
  double t3881;
  double t3882;
  double t3886;
  double t3887;
  double t3892;
  double t3896;
  double t3897;
  double t3899;
  double t3900;
  double t3901;
  double t3903;
  double t3904;
  double t3905;
  double t3907;
  double t3908;
  double t3909;
  double t3898;
  double t3902;
  double t3906;
  double t3910;
  double t3911;
  double t3932;
  double t3933;
  double t3934;
  double t3935;
  double t3936;
  double t3855;
  double t3859;
  double t3863;
  double t3867;
  double t3868;
  double t3921;
  double t3922;
  double t3923;
  double t3924;
  double t3925;
  double t3946;
  double t3947;
  double t3948;
  double t3949;
  double t3950;
  double t3960;
  double t3961;
  double t3962;
  double t3963;
  double t3964;
  double t3806;
  double t3810;
  double t3829;
  double t3841;
  double t3842;
  double t3915;
  double t3916;
  double t3917;
  double t3918;
  double t3919;
  double t3940;
  double t3941;
  double t3942;
  double t3943;
  double t3944;
  t3653 = Cos(var1[7]);
  t3575 = Sin(var1[7]);
  t3767 = Cos(var1[5]);
  t3756 = Sin(var1[5]);
  t3771 = Cos(var1[3]);
  t3766 = -1.*t3653*t3756;
  t3768 = -1.*t3767*t3575;
  t3769 = t3766 + t3768;
  t3751 = Sin(var1[3]);
  t3772 = t3767*t3653;
  t3773 = -1.*t3756*t3575;
  t3783 = t3772 + t3773;
  t3654 = -1.*t3653;
  t3655 = 1. + t3654;
  t3656 = -0.8*t3655;
  t3657 = -0.8*t3653;
  t3658 = t3656 + t3657;
  t3750 = Cos(var1[2]);
  t3770 = t3751*t3769;
  t3784 = t3771*t3783;
  t3785 = t3770 + t3784;
  t3790 = t3750*t3785;
  t3800 = Sin(var1[2]);
  t3801 = t3771*t3769;
  t3802 = -1.*t3751*t3783;
  t3803 = t3801 + t3802;
  t3804 = t3800*t3803;
  t3805 = t3790 + t3804;
  t3818 = t3653*t3756;
  t3819 = t3767*t3575;
  t3820 = t3818 + t3819;
  t3815 = 0.4*t3653;
  t3816 = t3658*t3653;
  t3817 = t3815 + t3816;
  t3831 = -1.*t3767*t3653;
  t3832 = t3756*t3575;
  t3833 = t3831 + t3832;
  t3844 = -1.*t3767;
  t3845 = 1. + t3844;
  t3846 = -0.4*t3845;
  t3847 = t3767*t3658;
  t3848 = t3846 + t3847;
  t3850 = 0.4*t3756;
  t3851 = t3658*t3756;
  t3852 = t3850 + t3851;
  t3821 = -1.*t3751*t3820;
  t3822 = t3821 + t3784;
  t3823 = t3800*t3822;
  t3824 = t3771*t3820;
  t3825 = t3751*t3783;
  t3826 = t3824 + t3825;
  t3827 = t3750*t3826;
  t3828 = t3823 + t3827;
  t3830 = -1.*t3751*t3769;
  t3834 = t3771*t3833;
  t3835 = t3830 + t3834;
  t3836 = t3800*t3835;
  t3837 = t3751*t3833;
  t3838 = t3801 + t3837;
  t3839 = t3750*t3838;
  t3840 = t3836 + t3839;
  t3874 = -1.*t3800*t3785;
  t3875 = t3750*t3803;
  t3876 = t3874 + t3875;
  t3889 = t3848*t3751;
  t3890 = t3771*t3852;
  t3891 = t3889 + t3890;
  t3893 = t3771*t3848;
  t3894 = -1.*t3751*t3852;
  t3895 = t3893 + t3894;
  t3652 = -0.4*t3575;
  t3684 = -1.*t3658*t3575;
  t3749 = t3652 + t3684;
  t3807 = 0.4*t3575;
  t3808 = t3658*t3575;
  t3809 = t3807 + t3808;
  t3878 = t3750*t3822;
  t3879 = -1.*t3800*t3826;
  t3880 = t3878 + t3879;
  t3883 = t3750*t3835;
  t3884 = -1.*t3800*t3838;
  t3885 = t3883 + t3884;
  t3849 = -1.*t3848*t3769;
  t3853 = -1.*t3852*t3783;
  t3854 = t3849 + t3853;
  t3856 = t3848*t3769;
  t3857 = t3852*t3783;
  t3858 = t3856 + t3857;
  t3860 = -1.*t3852*t3769;
  t3861 = -1.*t3848*t3833;
  t3862 = t3860 + t3861;
  t3864 = t3852*t3820;
  t3865 = t3848*t3783;
  t3866 = t3864 + t3865;
  t3877 = 0.3*t3876*t3828;
  t3881 = 0.3*t3805*t3880;
  t3882 = 0.3*t3876*t3840;
  t3886 = 0.3*t3805*t3885;
  t3887 = t3877 + t3881 + t3882 + t3886;
  t3892 = -1.*t3891*t3785;
  t3896 = -1.*t3895*t3803;
  t3897 = t3892 + t3896;
  t3899 = t3891*t3785;
  t3900 = t3895*t3803;
  t3901 = t3899 + t3900;
  t3903 = t3895*t3822;
  t3904 = t3891*t3826;
  t3905 = t3903 + t3904;
  t3907 = -1.*t3895*t3835;
  t3908 = -1.*t3891*t3838;
  t3909 = t3907 + t3908;
  t3898 = 0.3*t3805*t3897;
  t3902 = 0.3*t3805*t3901;
  t3906 = 0.3*t3905*t3840;
  t3910 = 0.3*t3828*t3909;
  t3911 = t3898 + t3902 + t3906 + t3910;
  t3932 = 0.3*t3876*t3897;
  t3933 = 0.3*t3876*t3901;
  t3934 = 0.3*t3905*t3885;
  t3935 = 0.3*t3880*t3909;
  t3936 = t3932 + t3933 + t3934 + t3935;
  t3855 = 0.3*t3854*t3805;
  t3859 = 0.3*t3858*t3805;
  t3863 = 0.3*t3862*t3828;
  t3867 = 0.3*t3866*t3840;
  t3868 = t3855 + t3859 + t3863 + t3867;
  t3921 = 0.3*t3854*t3876;
  t3922 = 0.3*t3858*t3876;
  t3923 = 0.3*t3862*t3880;
  t3924 = 0.3*t3866*t3885;
  t3925 = t3921 + t3922 + t3923 + t3924;
  t3946 = 0.3*t3862*t3897;
  t3947 = 0.3*t3866*t3901;
  t3948 = 0.3*t3858*t3905;
  t3949 = 0.3*t3854*t3909;
  t3950 = t3946 + t3947 + t3948 + t3949;
  t3960 = 0.3*t3749*t3866;
  t3961 = 0.3*t3817*t3854;
  t3962 = 0.3*t3817*t3858;
  t3963 = 0.3*t3809*t3862;
  t3964 = t3960 + t3961 + t3962 + t3963;
  t3806 = 0.3*t3749*t3805;
  t3810 = 0.3*t3809*t3805;
  t3829 = 0.3*t3817*t3828;
  t3841 = 0.3*t3817*t3840;
  t3842 = t3806 + t3810 + t3829 + t3841;
  t3915 = 0.3*t3749*t3876;
  t3916 = 0.3*t3809*t3876;
  t3917 = 0.3*t3817*t3880;
  t3918 = 0.3*t3817*t3885;
  t3919 = t3915 + t3916 + t3917 + t3918;
  t3940 = 0.3*t3817*t3897;
  t3941 = 0.3*t3817*t3901;
  t3942 = 0.3*t3749*t3905;
  t3943 = 0.3*t3809*t3909;
  t3944 = t3940 + t3941 + t3942 + t3943;
  p_output1[0]=(-0.5*(0.6*t3805*t3828 + 0.6*t3805*t3840)*var2[0] - 0.5*t3887*var2[1] - 0.5*t3911*var2[2] - 0.5*t3868*var2[3] - 0.5*t3842*var2[5])*var2[7];
  p_output1[1]=(-0.5*t3887*var2[0] - 0.5*(0.6*t3876*t3880 + 0.6*t3876*t3885)*var2[1] - 0.5*t3936*var2[2] - 0.5*t3925*var2[3] - 0.5*t3919*var2[5])*var2[7];
  p_output1[2]=(-0.5*t3911*var2[0] - 0.5*t3936*var2[1] - 0.5*(0.6*t3901*t3905 + 0.6*t3897*t3909)*var2[2] - 0.5*t3950*var2[3] - 0.5*t3944*var2[5])*var2[7];
  p_output1[3]=(-0.5*t3868*var2[0] - 0.5*t3925*var2[1] - 0.5*t3950*var2[2] - 0.5*(0.6*t3854*t3862 + 0.6*t3858*t3866)*var2[3] - 0.5*t3964*var2[5])*var2[7];
  p_output1[4]=0;
  p_output1[5]=(-0.5*t3842*var2[0] - 0.5*t3919*var2[1] - 0.5*t3944*var2[2] - 0.5*t3964*var2[3] - 0.5*(0.6*t3749*t3817 + 0.6*t3809*t3817)*var2[5])*var2[7];
  p_output1[6]=0;
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

#include "Ce2_vec8_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec8_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
