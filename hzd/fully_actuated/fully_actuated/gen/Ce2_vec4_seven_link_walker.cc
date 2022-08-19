/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:18 GMT-04:00
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
  double t2565;
  double t2457;
  double t2518;
  double t2573;
  double t2671;
  double t2587;
  double t2771;
  double t2389;
  double t2770;
  double t2772;
  double t2773;
  double t2775;
  double t2776;
  double t2777;
  double t2743;
  double t2744;
  double t2749;
  double t2756;
  double t2761;
  double t2802;
  double t2803;
  double t2804;
  double t2794;
  double t2557;
  double t2576;
  double t2580;
  double t2820;
  double t2821;
  double t2822;
  double t2823;
  double t2824;
  double t2583;
  double t2591;
  double t2595;
  double t2599;
  double t2603;
  double t2604;
  double t2774;
  double t2778;
  double t2779;
  double t2780;
  double t2781;
  double t2795;
  double t2796;
  double t2797;
  double t2844;
  double t2845;
  double t2840;
  double t2841;
  double t2842;
  double t2805;
  double t2806;
  double t2807;
  double t2808;
  double t2809;
  double t2810;
  double t2811;
  double t2812;
  double t2816;
  double t2817;
  double t2818;
  double t2855;
  double t2856;
  double t2857;
  double t2828;
  double t2829;
  double t2830;
  double t2831;
  double t2832;
  double t2833;
  double t2859;
  double t2860;
  double t2861;
  double t2863;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2898;
  double t2899;
  double t2871;
  double t2872;
  double t2873;
  double t2874;
  double t2875;
  double t2877;
  double t2878;
  double t2879;
  double t2880;
  double t2881;
  double t2882;
  double t2928;
  double t2929;
  double t2930;
  double t2932;
  double t2933;
  double t2934;
  double t2939;
  double t2940;
  double t2941;
  double t2961;
  double t2962;
  double t2963;
  double t2957;
  double t2958;
  double t2959;
  double t2969;
  double t2970;
  double t2971;
  double t2901;
  double t2902;
  double t2903;
  double t2742;
  double t2768;
  double t2769;
  double t2909;
  double t2910;
  double t2911;
  double t2799;
  double t2800;
  double t2801;
  double t2913;
  double t2914;
  double t2915;
  double t2891;
  double t2892;
  double t2893;
  double t2825;
  double t2826;
  double t2827;
  double t2835;
  double t2836;
  double t2837;
  double t2838;
  double t2843;
  double t2846;
  double t2847;
  double t2849;
  double t2850;
  double t2851;
  double t2858;
  double t2895;
  double t2896;
  double t2906;
  double t2907;
  double t2917;
  double t2918;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t2890;
  double t2894;
  double t2897;
  double t2900;
  double t2904;
  double t2905;
  double t2908;
  double t2912;
  double t2916;
  double t2919;
  double t2920;
  double t2922;
  double t2923;
  double t2924;
  double t2925;
  double t2926;
  double t2931;
  double t2935;
  double t2936;
  double t2938;
  double t2942;
  double t2943;
  double t2944;
  double t2945;
  double t2947;
  double t2948;
  double t2949;
  double t2951;
  double t2952;
  double t2953;
  double t2954;
  double t2955;
  double t2960;
  double t2964;
  double t2965;
  double t2967;
  double t2968;
  double t2972;
  double t2973;
  double t2974;
  double t2976;
  double t2977;
  double t2978;
  double t2980;
  double t2981;
  double t2982;
  double t2983;
  double t2984;
  double t3010;
  double t3011;
  double t3012;
  double t3013;
  double t3014;
  double t3015;
  double t3016;
  double t3017;
  double t3018;
  double t3019;
  double t2927;
  double t2937;
  double t2946;
  double t2950;
  double t2956;
  double t2966;
  double t2975;
  double t2979;
  double t2985;
  double t2986;
  double t2995;
  double t2996;
  double t2997;
  double t2998;
  double t2999;
  double t3000;
  double t2819;
  double t2834;
  double t2839;
  double t2848;
  double t2852;
  double t2853;
  double t3028;
  double t3029;
  double t3030;
  double t3031;
  double t3032;
  double t2990;
  double t2991;
  double t2992;
  double t2993;
  double t2605;
  double t2798;
  double t2813;
  double t2814;
  double t3023;
  double t3024;
  double t3025;
  double t3026;
  t2565 = Cos(var1[3]);
  t2457 = Cos(var1[5]);
  t2518 = Sin(var1[3]);
  t2573 = Sin(var1[5]);
  t2671 = Cos(var1[7]);
  t2587 = Sin(var1[2]);
  t2771 = Sin(var1[7]);
  t2389 = Cos(var1[2]);
  t2770 = -1.*t2671*t2573;
  t2772 = -1.*t2457*t2771;
  t2773 = t2770 + t2772;
  t2775 = t2457*t2671;
  t2776 = -1.*t2573*t2771;
  t2777 = t2775 + t2776;
  t2743 = -1.*t2671;
  t2744 = 1. + t2743;
  t2749 = -0.8*t2744;
  t2756 = -0.8*t2671;
  t2761 = t2749 + t2756;
  t2802 = t2671*t2573;
  t2803 = t2457*t2771;
  t2804 = t2802 + t2803;
  t2794 = -1.*t2518*t2777;
  t2557 = -1.*t2457*t2518;
  t2576 = -1.*t2565*t2573;
  t2580 = t2557 + t2576;
  t2820 = -1.*t2457;
  t2821 = 1. + t2820;
  t2822 = -0.4*t2821;
  t2823 = -0.51*t2457;
  t2824 = t2822 + t2823;
  t2583 = t2389*t2580;
  t2591 = -1.*t2565*t2457;
  t2595 = t2518*t2573;
  t2599 = t2591 + t2595;
  t2603 = t2587*t2599;
  t2604 = t2583 + t2603;
  t2774 = -1.*t2518*t2773;
  t2778 = -1.*t2565*t2777;
  t2779 = t2774 + t2778;
  t2780 = t2587*t2779;
  t2781 = t2565*t2773;
  t2795 = t2781 + t2794;
  t2796 = t2389*t2795;
  t2797 = t2780 + t2796;
  t2844 = t2457*t2761;
  t2845 = t2822 + t2844;
  t2840 = 0.4*t2573;
  t2841 = t2761*t2573;
  t2842 = t2840 + t2841;
  t2805 = -1.*t2518*t2804;
  t2806 = t2565*t2777;
  t2807 = t2805 + t2806;
  t2808 = t2389*t2807;
  t2809 = -1.*t2565*t2804;
  t2810 = t2809 + t2794;
  t2811 = t2587*t2810;
  t2812 = t2808 + t2811;
  t2816 = -1.*t2565*t2587;
  t2817 = -1.*t2389*t2518;
  t2818 = t2816 + t2817;
  t2855 = t2389*t2565;
  t2856 = -1.*t2587*t2518;
  t2857 = t2855 + t2856;
  t2828 = t2587*t2580;
  t2829 = t2565*t2457;
  t2830 = -1.*t2518*t2573;
  t2831 = t2829 + t2830;
  t2832 = t2389*t2831;
  t2833 = t2828 + t2832;
  t2859 = t2565*t2587;
  t2860 = t2389*t2518;
  t2861 = t2859 + t2860;
  t2863 = t2457*t2518;
  t2864 = t2565*t2573;
  t2865 = t2863 + t2864;
  t2866 = t2389*t2865;
  t2867 = t2587*t2831;
  t2868 = t2866 + t2867;
  t2898 = -1.*t2587*t2831;
  t2899 = t2583 + t2898;
  t2871 = t2518*t2773;
  t2872 = t2871 + t2806;
  t2873 = t2389*t2872;
  t2874 = t2587*t2795;
  t2875 = t2873 + t2874;
  t2877 = t2587*t2807;
  t2878 = t2565*t2804;
  t2879 = t2518*t2777;
  t2880 = t2878 + t2879;
  t2881 = t2389*t2880;
  t2882 = t2877 + t2881;
  t2928 = t2824*t2518;
  t2929 = -0.11*t2565*t2573;
  t2930 = t2928 + t2929;
  t2932 = t2565*t2824;
  t2933 = 0.11*t2518*t2573;
  t2934 = t2932 + t2933;
  t2939 = -1.*t2824*t2518;
  t2940 = 0.11*t2565*t2573;
  t2941 = t2939 + t2940;
  t2961 = t2565*t2845;
  t2962 = -1.*t2518*t2842;
  t2963 = t2961 + t2962;
  t2957 = t2845*t2518;
  t2958 = t2565*t2842;
  t2959 = t2957 + t2958;
  t2969 = -1.*t2845*t2518;
  t2970 = -1.*t2565*t2842;
  t2971 = t2969 + t2970;
  t2901 = -1.*t2587*t2580;
  t2902 = t2389*t2599;
  t2903 = t2901 + t2902;
  t2742 = 0.4*t2671;
  t2768 = t2761*t2671;
  t2769 = t2742 + t2768;
  t2909 = t2389*t2779;
  t2910 = -1.*t2587*t2795;
  t2911 = t2909 + t2910;
  t2799 = 0.4*t2771;
  t2800 = t2761*t2771;
  t2801 = t2799 + t2800;
  t2913 = -1.*t2587*t2807;
  t2914 = t2389*t2810;
  t2915 = t2913 + t2914;
  t2891 = -1.*t2389*t2565;
  t2892 = t2587*t2518;
  t2893 = t2891 + t2892;
  t2825 = t2824*t2573;
  t2826 = 0.11*t2457*t2573;
  t2827 = t2825 + t2826;
  t2835 = t2824*t2457;
  t2836 = Power(t2573,2);
  t2837 = -0.11*t2836;
  t2838 = t2835 + t2837;
  t2843 = t2842*t2804;
  t2846 = t2845*t2777;
  t2847 = t2843 + t2846;
  t2849 = -1.*t2845*t2773;
  t2850 = -1.*t2842*t2777;
  t2851 = t2849 + t2850;
  t2858 = 13.6*t2818*t2857;
  t2895 = -1.*t2587*t2865;
  t2896 = t2895 + t2832;
  t2906 = -1.*t2587*t2872;
  t2907 = t2906 + t2796;
  t2917 = -1.*t2587*t2880;
  t2918 = t2808 + t2917;
  t2886 = Power(t2818,2);
  t2887 = 6.8*t2886;
  t2888 = 6.8*t2818*t2861;
  t2889 = Power(t2857,2);
  t2890 = 6.8*t2889;
  t2894 = 6.8*t2857*t2893;
  t2897 = 6.8*t2833*t2896;
  t2900 = 6.8*t2899*t2868;
  t2904 = 6.8*t2833*t2903;
  t2905 = 6.8*t2899*t2604;
  t2908 = 0.3*t2797*t2907;
  t2912 = 0.3*t2911*t2875;
  t2916 = 0.3*t2915*t2882;
  t2919 = 0.3*t2812*t2918;
  t2920 = t2887 + t2888 + t2890 + t2894 + t2897 + t2900 + t2904 + t2905 + t2908 + t2912 + t2916 + t2919;
  t2922 = Power(t2565,2);
  t2923 = -0.11*t2922;
  t2924 = Power(t2518,2);
  t2925 = -0.11*t2924;
  t2926 = t2923 + t2925;
  t2931 = -1.*t2930*t2831;
  t2935 = -1.*t2580*t2934;
  t2936 = t2931 + t2935;
  t2938 = t2930*t2831;
  t2942 = t2941*t2831;
  t2943 = t2580*t2934;
  t2944 = t2865*t2934;
  t2945 = t2938 + t2942 + t2943 + t2944;
  t2947 = t2930*t2865;
  t2948 = t2831*t2934;
  t2949 = t2947 + t2948;
  t2951 = -1.*t2580*t2930;
  t2952 = -1.*t2580*t2941;
  t2953 = -1.*t2831*t2934;
  t2954 = -1.*t2934*t2599;
  t2955 = t2951 + t2952 + t2953 + t2954;
  t2960 = -1.*t2959*t2872;
  t2964 = -1.*t2963*t2795;
  t2965 = t2960 + t2964;
  t2967 = -1.*t2963*t2779;
  t2968 = -1.*t2963*t2872;
  t2972 = -1.*t2971*t2795;
  t2973 = -1.*t2959*t2795;
  t2974 = t2967 + t2968 + t2972 + t2973;
  t2976 = t2963*t2807;
  t2977 = t2959*t2880;
  t2978 = t2976 + t2977;
  t2980 = t2971*t2807;
  t2981 = t2959*t2807;
  t2982 = t2963*t2810;
  t2983 = t2963*t2880;
  t2984 = t2980 + t2981 + t2982 + t2983;
  t3010 = 6.8*t2893*t2926;
  t3011 = 6.8*t2899*t2936;
  t3012 = 6.8*t2899*t2945;
  t3013 = 6.8*t2949*t2903;
  t3014 = 6.8*t2896*t2955;
  t3015 = 0.3*t2965*t2915;
  t3016 = 0.3*t2974*t2918;
  t3017 = 0.3*t2911*t2978;
  t3018 = 0.3*t2907*t2984;
  t3019 = t3010 + t3011 + t3012 + t3013 + t3014 + t3015 + t3016 + t3017 + t3018;
  t2927 = 6.8*t2818*t2926;
  t2937 = 6.8*t2833*t2936;
  t2946 = 6.8*t2833*t2945;
  t2950 = 6.8*t2949*t2604;
  t2956 = 6.8*t2868*t2955;
  t2966 = 0.3*t2965*t2812;
  t2975 = 0.3*t2974*t2882;
  t2979 = 0.3*t2797*t2978;
  t2985 = 0.3*t2875*t2984;
  t2986 = t2927 + t2937 + t2946 + t2950 + t2956 + t2966 + t2975 + t2979 + t2985;
  t2995 = -0.748*t2893;
  t2996 = 6.8*t2827*t2899;
  t2997 = 6.8*t2838*t2903;
  t2998 = 0.3*t2847*t2911;
  t2999 = 0.3*t2851*t2915;
  t3000 = t2995 + t2996 + t2997 + t2998 + t2999;
  t2819 = -0.748*t2818;
  t2834 = 6.8*t2827*t2833;
  t2839 = 6.8*t2838*t2604;
  t2848 = 0.3*t2847*t2797;
  t2852 = 0.3*t2851*t2812;
  t2853 = t2819 + t2834 + t2839 + t2848 + t2852;
  t3028 = 6.8*t2838*t2945;
  t3029 = 6.8*t2827*t2955;
  t3030 = 0.3*t2851*t2974;
  t3031 = 0.3*t2847*t2984;
  t3032 = t3028 + t3029 + t3030 + t3031;
  t2990 = -0.748*t2903;
  t2991 = 0.3*t2769*t2911;
  t2992 = 0.3*t2801*t2915;
  t2993 = t2990 + t2991 + t2992;
  t2605 = -0.748*t2604;
  t2798 = 0.3*t2769*t2797;
  t2813 = 0.3*t2801*t2812;
  t2814 = t2605 + t2798 + t2813;
  t3023 = -0.748*t2945;
  t3024 = 0.3*t2801*t2974;
  t3025 = 0.3*t2769*t2984;
  t3026 = t3023 + t3024 + t3025;
  p_output1[0]=var2[3]*(-0.5*(13.6*t2604*t2833 + t2858 + 13.6*t2857*t2861 + 13.6*t2833*t2868 + 0.6*t2797*t2875 + 0.6*t2812*t2882)*var2[0] - 0.5*t2920*var2[1] - 0.5*t2986*var2[2] - 0.5*t2853*var2[3] - 0.5*t2814*var2[5]);
  p_output1[1]=var2[3]*(-0.5*t2920*var2[0] - 0.5*(t2858 + 13.6*t2818*t2893 + 13.6*t2896*t2899 + 13.6*t2899*t2903 + 0.6*t2907*t2911 + 0.6*t2915*t2918)*var2[1] - 0.5*t3019*var2[2] - 0.5*t3000*var2[3] - 0.5*t2993*var2[5]);
  p_output1[2]=var2[3]*(-0.5*t2986*var2[0] - 0.5*t3019*var2[1] - 0.5*(13.6*t2945*t2949 + 13.6*t2936*t2955 + 0.6*t2965*t2974 + 0.6*t2978*t2984)*var2[2] - 0.5*t3032*var2[3] - 0.5*t3026*var2[5]);
  p_output1[3]=(-0.5*t2853*var2[0] - 0.5*t3000*var2[1] - 0.5*t3032*var2[2])*var2[3];
  p_output1[4]=0;
  p_output1[5]=(-0.5*t2814*var2[0] - 0.5*t2993*var2[1] - 0.5*t3026*var2[2])*var2[3];
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

#include "Ce2_vec4_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec4_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
