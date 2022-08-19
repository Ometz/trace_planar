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
  double t2870;
  double t2854;
  double t2862;
  double t2876;
  double t3003;
  double t2921;
  double t3027;
  double t2815;
  double t3022;
  double t3033;
  double t3034;
  double t3036;
  double t3037;
  double t3038;
  double t3005;
  double t3006;
  double t3007;
  double t3008;
  double t3009;
  double t3051;
  double t3052;
  double t3053;
  double t3043;
  double t2869;
  double t2883;
  double t2884;
  double t3069;
  double t3070;
  double t3071;
  double t3072;
  double t3073;
  double t2885;
  double t2987;
  double t2988;
  double t2989;
  double t2994;
  double t3001;
  double t3035;
  double t3039;
  double t3040;
  double t3041;
  double t3042;
  double t3044;
  double t3045;
  double t3046;
  double t3093;
  double t3094;
  double t3089;
  double t3090;
  double t3091;
  double t3054;
  double t3055;
  double t3056;
  double t3057;
  double t3058;
  double t3059;
  double t3060;
  double t3061;
  double t3065;
  double t3066;
  double t3067;
  double t3104;
  double t3105;
  double t3106;
  double t3077;
  double t3078;
  double t3079;
  double t3080;
  double t3081;
  double t3082;
  double t3108;
  double t3109;
  double t3110;
  double t3112;
  double t3113;
  double t3114;
  double t3115;
  double t3116;
  double t3117;
  double t3147;
  double t3148;
  double t3120;
  double t3121;
  double t3122;
  double t3123;
  double t3124;
  double t3126;
  double t3127;
  double t3128;
  double t3129;
  double t3130;
  double t3131;
  double t3177;
  double t3178;
  double t3179;
  double t3181;
  double t3182;
  double t3183;
  double t3188;
  double t3189;
  double t3190;
  double t3210;
  double t3211;
  double t3212;
  double t3206;
  double t3207;
  double t3208;
  double t3218;
  double t3219;
  double t3220;
  double t3150;
  double t3151;
  double t3152;
  double t3004;
  double t3020;
  double t3021;
  double t3158;
  double t3159;
  double t3160;
  double t3048;
  double t3049;
  double t3050;
  double t3162;
  double t3163;
  double t3164;
  double t3140;
  double t3141;
  double t3142;
  double t3074;
  double t3075;
  double t3076;
  double t3084;
  double t3085;
  double t3086;
  double t3087;
  double t3092;
  double t3095;
  double t3096;
  double t3098;
  double t3099;
  double t3100;
  double t3107;
  double t3144;
  double t3145;
  double t3155;
  double t3156;
  double t3166;
  double t3167;
  double t3135;
  double t3136;
  double t3137;
  double t3138;
  double t3139;
  double t3143;
  double t3146;
  double t3149;
  double t3153;
  double t3154;
  double t3157;
  double t3161;
  double t3165;
  double t3168;
  double t3169;
  double t3171;
  double t3172;
  double t3173;
  double t3174;
  double t3175;
  double t3180;
  double t3184;
  double t3185;
  double t3187;
  double t3191;
  double t3192;
  double t3193;
  double t3194;
  double t3196;
  double t3197;
  double t3198;
  double t3200;
  double t3201;
  double t3202;
  double t3203;
  double t3204;
  double t3209;
  double t3213;
  double t3214;
  double t3216;
  double t3217;
  double t3221;
  double t3222;
  double t3223;
  double t3225;
  double t3226;
  double t3227;
  double t3229;
  double t3230;
  double t3231;
  double t3232;
  double t3233;
  double t3259;
  double t3260;
  double t3261;
  double t3262;
  double t3263;
  double t3264;
  double t3265;
  double t3266;
  double t3267;
  double t3268;
  double t3176;
  double t3186;
  double t3195;
  double t3199;
  double t3205;
  double t3215;
  double t3224;
  double t3228;
  double t3234;
  double t3235;
  double t3244;
  double t3245;
  double t3246;
  double t3247;
  double t3248;
  double t3249;
  double t3068;
  double t3083;
  double t3088;
  double t3097;
  double t3101;
  double t3102;
  double t3277;
  double t3278;
  double t3279;
  double t3280;
  double t3281;
  double t3239;
  double t3240;
  double t3241;
  double t3242;
  double t3002;
  double t3047;
  double t3062;
  double t3063;
  double t3272;
  double t3273;
  double t3274;
  double t3275;
  t2870 = Cos(var1[4]);
  t2854 = Cos(var1[6]);
  t2862 = Sin(var1[4]);
  t2876 = Sin(var1[6]);
  t3003 = Cos(var1[8]);
  t2921 = Sin(var1[2]);
  t3027 = Sin(var1[8]);
  t2815 = Cos(var1[2]);
  t3022 = -1.*t3003*t2876;
  t3033 = -1.*t2854*t3027;
  t3034 = t3022 + t3033;
  t3036 = t2854*t3003;
  t3037 = -1.*t2876*t3027;
  t3038 = t3036 + t3037;
  t3005 = -1.*t3003;
  t3006 = 1. + t3005;
  t3007 = -0.8*t3006;
  t3008 = -0.8*t3003;
  t3009 = t3007 + t3008;
  t3051 = t3003*t2876;
  t3052 = t2854*t3027;
  t3053 = t3051 + t3052;
  t3043 = -1.*t2862*t3038;
  t2869 = -1.*t2854*t2862;
  t2883 = -1.*t2870*t2876;
  t2884 = t2869 + t2883;
  t3069 = -1.*t2854;
  t3070 = 1. + t3069;
  t3071 = -0.4*t3070;
  t3072 = -0.51*t2854;
  t3073 = t3071 + t3072;
  t2885 = t2815*t2884;
  t2987 = -1.*t2870*t2854;
  t2988 = t2862*t2876;
  t2989 = t2987 + t2988;
  t2994 = t2921*t2989;
  t3001 = t2885 + t2994;
  t3035 = -1.*t2862*t3034;
  t3039 = -1.*t2870*t3038;
  t3040 = t3035 + t3039;
  t3041 = t2921*t3040;
  t3042 = t2870*t3034;
  t3044 = t3042 + t3043;
  t3045 = t2815*t3044;
  t3046 = t3041 + t3045;
  t3093 = t2854*t3009;
  t3094 = t3071 + t3093;
  t3089 = 0.4*t2876;
  t3090 = t3009*t2876;
  t3091 = t3089 + t3090;
  t3054 = -1.*t2862*t3053;
  t3055 = t2870*t3038;
  t3056 = t3054 + t3055;
  t3057 = t2815*t3056;
  t3058 = -1.*t2870*t3053;
  t3059 = t3058 + t3043;
  t3060 = t2921*t3059;
  t3061 = t3057 + t3060;
  t3065 = -1.*t2870*t2921;
  t3066 = -1.*t2815*t2862;
  t3067 = t3065 + t3066;
  t3104 = t2815*t2870;
  t3105 = -1.*t2921*t2862;
  t3106 = t3104 + t3105;
  t3077 = t2921*t2884;
  t3078 = t2870*t2854;
  t3079 = -1.*t2862*t2876;
  t3080 = t3078 + t3079;
  t3081 = t2815*t3080;
  t3082 = t3077 + t3081;
  t3108 = t2870*t2921;
  t3109 = t2815*t2862;
  t3110 = t3108 + t3109;
  t3112 = t2854*t2862;
  t3113 = t2870*t2876;
  t3114 = t3112 + t3113;
  t3115 = t2815*t3114;
  t3116 = t2921*t3080;
  t3117 = t3115 + t3116;
  t3147 = -1.*t2921*t3080;
  t3148 = t2885 + t3147;
  t3120 = t2862*t3034;
  t3121 = t3120 + t3055;
  t3122 = t2815*t3121;
  t3123 = t2921*t3044;
  t3124 = t3122 + t3123;
  t3126 = t2921*t3056;
  t3127 = t2870*t3053;
  t3128 = t2862*t3038;
  t3129 = t3127 + t3128;
  t3130 = t2815*t3129;
  t3131 = t3126 + t3130;
  t3177 = t3073*t2862;
  t3178 = -0.11*t2870*t2876;
  t3179 = t3177 + t3178;
  t3181 = t2870*t3073;
  t3182 = 0.11*t2862*t2876;
  t3183 = t3181 + t3182;
  t3188 = -1.*t3073*t2862;
  t3189 = 0.11*t2870*t2876;
  t3190 = t3188 + t3189;
  t3210 = t2870*t3094;
  t3211 = -1.*t2862*t3091;
  t3212 = t3210 + t3211;
  t3206 = t3094*t2862;
  t3207 = t2870*t3091;
  t3208 = t3206 + t3207;
  t3218 = -1.*t3094*t2862;
  t3219 = -1.*t2870*t3091;
  t3220 = t3218 + t3219;
  t3150 = -1.*t2921*t2884;
  t3151 = t2815*t2989;
  t3152 = t3150 + t3151;
  t3004 = 0.4*t3003;
  t3020 = t3009*t3003;
  t3021 = t3004 + t3020;
  t3158 = t2815*t3040;
  t3159 = -1.*t2921*t3044;
  t3160 = t3158 + t3159;
  t3048 = 0.4*t3027;
  t3049 = t3009*t3027;
  t3050 = t3048 + t3049;
  t3162 = -1.*t2921*t3056;
  t3163 = t2815*t3059;
  t3164 = t3162 + t3163;
  t3140 = -1.*t2815*t2870;
  t3141 = t2921*t2862;
  t3142 = t3140 + t3141;
  t3074 = t3073*t2876;
  t3075 = 0.11*t2854*t2876;
  t3076 = t3074 + t3075;
  t3084 = t3073*t2854;
  t3085 = Power(t2876,2);
  t3086 = -0.11*t3085;
  t3087 = t3084 + t3086;
  t3092 = t3091*t3053;
  t3095 = t3094*t3038;
  t3096 = t3092 + t3095;
  t3098 = -1.*t3094*t3034;
  t3099 = -1.*t3091*t3038;
  t3100 = t3098 + t3099;
  t3107 = 13.6*t3067*t3106;
  t3144 = -1.*t2921*t3114;
  t3145 = t3144 + t3081;
  t3155 = -1.*t2921*t3121;
  t3156 = t3155 + t3045;
  t3166 = -1.*t2921*t3129;
  t3167 = t3057 + t3166;
  t3135 = Power(t3067,2);
  t3136 = 6.8*t3135;
  t3137 = 6.8*t3067*t3110;
  t3138 = Power(t3106,2);
  t3139 = 6.8*t3138;
  t3143 = 6.8*t3106*t3142;
  t3146 = 6.8*t3082*t3145;
  t3149 = 6.8*t3148*t3117;
  t3153 = 6.8*t3082*t3152;
  t3154 = 6.8*t3148*t3001;
  t3157 = 0.3*t3046*t3156;
  t3161 = 0.3*t3160*t3124;
  t3165 = 0.3*t3164*t3131;
  t3168 = 0.3*t3061*t3167;
  t3169 = t3136 + t3137 + t3139 + t3143 + t3146 + t3149 + t3153 + t3154 + t3157 + t3161 + t3165 + t3168;
  t3171 = Power(t2870,2);
  t3172 = -0.11*t3171;
  t3173 = Power(t2862,2);
  t3174 = -0.11*t3173;
  t3175 = t3172 + t3174;
  t3180 = -1.*t3179*t3080;
  t3184 = -1.*t2884*t3183;
  t3185 = t3180 + t3184;
  t3187 = t3179*t3080;
  t3191 = t3190*t3080;
  t3192 = t2884*t3183;
  t3193 = t3114*t3183;
  t3194 = t3187 + t3191 + t3192 + t3193;
  t3196 = t3179*t3114;
  t3197 = t3080*t3183;
  t3198 = t3196 + t3197;
  t3200 = -1.*t2884*t3179;
  t3201 = -1.*t2884*t3190;
  t3202 = -1.*t3080*t3183;
  t3203 = -1.*t3183*t2989;
  t3204 = t3200 + t3201 + t3202 + t3203;
  t3209 = -1.*t3208*t3121;
  t3213 = -1.*t3212*t3044;
  t3214 = t3209 + t3213;
  t3216 = -1.*t3212*t3040;
  t3217 = -1.*t3212*t3121;
  t3221 = -1.*t3220*t3044;
  t3222 = -1.*t3208*t3044;
  t3223 = t3216 + t3217 + t3221 + t3222;
  t3225 = t3212*t3056;
  t3226 = t3208*t3129;
  t3227 = t3225 + t3226;
  t3229 = t3220*t3056;
  t3230 = t3208*t3056;
  t3231 = t3212*t3059;
  t3232 = t3212*t3129;
  t3233 = t3229 + t3230 + t3231 + t3232;
  t3259 = 6.8*t3142*t3175;
  t3260 = 6.8*t3148*t3185;
  t3261 = 6.8*t3148*t3194;
  t3262 = 6.8*t3198*t3152;
  t3263 = 6.8*t3145*t3204;
  t3264 = 0.3*t3214*t3164;
  t3265 = 0.3*t3223*t3167;
  t3266 = 0.3*t3160*t3227;
  t3267 = 0.3*t3156*t3233;
  t3268 = t3259 + t3260 + t3261 + t3262 + t3263 + t3264 + t3265 + t3266 + t3267;
  t3176 = 6.8*t3067*t3175;
  t3186 = 6.8*t3082*t3185;
  t3195 = 6.8*t3082*t3194;
  t3199 = 6.8*t3198*t3001;
  t3205 = 6.8*t3117*t3204;
  t3215 = 0.3*t3214*t3061;
  t3224 = 0.3*t3223*t3131;
  t3228 = 0.3*t3046*t3227;
  t3234 = 0.3*t3124*t3233;
  t3235 = t3176 + t3186 + t3195 + t3199 + t3205 + t3215 + t3224 + t3228 + t3234;
  t3244 = -0.748*t3142;
  t3245 = 6.8*t3076*t3148;
  t3246 = 6.8*t3087*t3152;
  t3247 = 0.3*t3096*t3160;
  t3248 = 0.3*t3100*t3164;
  t3249 = t3244 + t3245 + t3246 + t3247 + t3248;
  t3068 = -0.748*t3067;
  t3083 = 6.8*t3076*t3082;
  t3088 = 6.8*t3087*t3001;
  t3097 = 0.3*t3096*t3046;
  t3101 = 0.3*t3100*t3061;
  t3102 = t3068 + t3083 + t3088 + t3097 + t3101;
  t3277 = 6.8*t3087*t3194;
  t3278 = 6.8*t3076*t3204;
  t3279 = 0.3*t3100*t3223;
  t3280 = 0.3*t3096*t3233;
  t3281 = t3277 + t3278 + t3279 + t3280;
  t3239 = -0.748*t3152;
  t3240 = 0.3*t3021*t3160;
  t3241 = 0.3*t3050*t3164;
  t3242 = t3239 + t3240 + t3241;
  t3002 = -0.748*t3001;
  t3047 = 0.3*t3021*t3046;
  t3062 = 0.3*t3050*t3061;
  t3063 = t3002 + t3047 + t3062;
  t3272 = -0.748*t3194;
  t3273 = 0.3*t3050*t3223;
  t3274 = 0.3*t3021*t3233;
  t3275 = t3272 + t3273 + t3274;
  p_output1[0]=var2[4]*(-0.5*(13.6*t3001*t3082 + t3107 + 13.6*t3106*t3110 + 13.6*t3082*t3117 + 0.6*t3046*t3124 + 0.6*t3061*t3131)*var2[0] - 0.5*t3169*var2[1] - 0.5*t3235*var2[2] - 0.5*t3102*var2[4] - 0.5*t3063*var2[6]);
  p_output1[1]=var2[4]*(-0.5*t3169*var2[0] - 0.5*(t3107 + 13.6*t3067*t3142 + 13.6*t3145*t3148 + 13.6*t3148*t3152 + 0.6*t3156*t3160 + 0.6*t3164*t3167)*var2[1] - 0.5*t3268*var2[2] - 0.5*t3249*var2[4] - 0.5*t3242*var2[6]);
  p_output1[2]=var2[4]*(-0.5*t3235*var2[0] - 0.5*t3268*var2[1] - 0.5*(13.6*t3194*t3198 + 13.6*t3185*t3204 + 0.6*t3214*t3223 + 0.6*t3227*t3233)*var2[2] - 0.5*t3281*var2[4] - 0.5*t3275*var2[6]);
  p_output1[3]=0;
  p_output1[4]=(-0.5*t3102*var2[0] - 0.5*t3249*var2[1] - 0.5*t3281*var2[2])*var2[4];
  p_output1[5]=0;
  p_output1[6]=(-0.5*t3063*var2[0] - 0.5*t3242*var2[1] - 0.5*t3275*var2[2])*var2[4];
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

#include "Ce2_vec5_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec5_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
