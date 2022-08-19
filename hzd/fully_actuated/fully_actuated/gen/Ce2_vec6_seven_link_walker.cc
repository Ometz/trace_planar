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
  double t3119;
  double t3103;
  double t3111;
  double t3125;
  double t3254;
  double t3252;
  double t3064;
  double t3170;
  double t3276;
  double t3282;
  double t3283;
  double t3285;
  double t3286;
  double t3287;
  double t3255;
  double t3256;
  double t3257;
  double t3258;
  double t3269;
  double t3291;
  double t3301;
  double t3302;
  double t3303;
  double t3118;
  double t3132;
  double t3133;
  double t3314;
  double t3315;
  double t3316;
  double t3317;
  double t3318;
  double t3322;
  double t3323;
  double t3324;
  double t3325;
  double t3326;
  double t3327;
  double t3333;
  double t3134;
  double t3236;
  double t3237;
  double t3238;
  double t3243;
  double t3250;
  double t3284;
  double t3288;
  double t3289;
  double t3290;
  double t3292;
  double t3293;
  double t3294;
  double t3295;
  double t3348;
  double t3349;
  double t3351;
  double t3352;
  double t3353;
  double t3364;
  double t3365;
  double t3366;
  double t3358;
  double t3359;
  double t3360;
  double t3361;
  double t3362;
  double t3300;
  double t3304;
  double t3305;
  double t3306;
  double t3307;
  double t3308;
  double t3309;
  double t3310;
  double t3337;
  double t3338;
  double t3339;
  double t3340;
  double t3341;
  double t3342;
  double t3376;
  double t3377;
  double t3378;
  double t3379;
  double t3380;
  double t3381;
  double t3382;
  double t3383;
  double t3400;
  double t3401;
  double t3408;
  double t3409;
  double t3410;
  double t3423;
  double t3424;
  double t3425;
  double t3427;
  double t3428;
  double t3429;
  double t3434;
  double t3435;
  double t3436;
  double t3439;
  double t3440;
  double t3454;
  double t3455;
  double t3456;
  double t3458;
  double t3459;
  double t3460;
  double t3470;
  double t3471;
  double t3472;
  double t3465;
  double t3466;
  double t3467;
  double t3403;
  double t3404;
  double t3405;
  double t3253;
  double t3270;
  double t3271;
  double t3297;
  double t3298;
  double t3299;
  double t3417;
  double t3418;
  double t3419;
  double t3334;
  double t3335;
  double t3336;
  double t3397;
  double t3398;
  double t3319;
  double t3320;
  double t3321;
  double t3329;
  double t3330;
  double t3331;
  double t3344;
  double t3345;
  double t3346;
  double t3350;
  double t3354;
  double t3355;
  double t3357;
  double t3363;
  double t3367;
  double t3368;
  double t3369;
  double t3371;
  double t3372;
  double t3373;
  double t3374;
  double t3375;
  double t3412;
  double t3413;
  double t3414;
  double t3385;
  double t3386;
  double t3387;
  double t3399;
  double t3402;
  double t3406;
  double t3407;
  double t3411;
  double t3415;
  double t3416;
  double t3420;
  double t3421;
  double t3426;
  double t3430;
  double t3431;
  double t3433;
  double t3437;
  double t3438;
  double t3441;
  double t3442;
  double t3444;
  double t3445;
  double t3446;
  double t3448;
  double t3449;
  double t3450;
  double t3451;
  double t3452;
  double t3457;
  double t3461;
  double t3462;
  double t3464;
  double t3468;
  double t3469;
  double t3473;
  double t3474;
  double t3476;
  double t3477;
  double t3478;
  double t3480;
  double t3481;
  double t3482;
  double t3483;
  double t3484;
  double t3432;
  double t3443;
  double t3447;
  double t3453;
  double t3463;
  double t3475;
  double t3479;
  double t3485;
  double t3486;
  double t3512;
  double t3513;
  double t3514;
  double t3515;
  double t3516;
  double t3517;
  double t3518;
  double t3519;
  double t3520;
  double t3328;
  double t3332;
  double t3343;
  double t3347;
  double t3356;
  double t3370;
  double t3384;
  double t3388;
  double t3389;
  double t3495;
  double t3496;
  double t3497;
  double t3498;
  double t3499;
  double t3500;
  double t3501;
  double t3502;
  double t3503;
  double t3529;
  double t3530;
  double t3531;
  double t3532;
  double t3533;
  double t3534;
  double t3535;
  double t3536;
  double t3537;
  double t3549;
  double t3550;
  double t3551;
  double t3552;
  double t3251;
  double t3296;
  double t3311;
  double t3312;
  double t3490;
  double t3491;
  double t3492;
  double t3493;
  double t3524;
  double t3525;
  double t3526;
  double t3527;
  t3119 = Cos(var1[3]);
  t3103 = Cos(var1[5]);
  t3111 = Sin(var1[3]);
  t3125 = Sin(var1[5]);
  t3254 = Cos(var1[7]);
  t3252 = Sin(var1[7]);
  t3064 = Cos(var1[2]);
  t3170 = Sin(var1[2]);
  t3276 = -1.*t3254*t3125;
  t3282 = -1.*t3103*t3252;
  t3283 = t3276 + t3282;
  t3285 = t3103*t3254;
  t3286 = -1.*t3125*t3252;
  t3287 = t3285 + t3286;
  t3255 = -1.*t3254;
  t3256 = 1. + t3255;
  t3257 = -0.8*t3256;
  t3258 = -0.8*t3254;
  t3269 = t3257 + t3258;
  t3291 = t3119*t3283;
  t3301 = -1.*t3103*t3254;
  t3302 = t3125*t3252;
  t3303 = t3301 + t3302;
  t3118 = -1.*t3103*t3111;
  t3132 = -1.*t3119*t3125;
  t3133 = t3118 + t3132;
  t3314 = -1.*t3103;
  t3315 = 1. + t3314;
  t3316 = -0.4*t3315;
  t3317 = -0.51*t3103;
  t3318 = t3316 + t3317;
  t3322 = t3170*t3133;
  t3323 = t3119*t3103;
  t3324 = -1.*t3111*t3125;
  t3325 = t3323 + t3324;
  t3326 = t3064*t3325;
  t3327 = t3322 + t3326;
  t3333 = t3318*t3103;
  t3134 = t3064*t3133;
  t3236 = -1.*t3119*t3103;
  t3237 = t3111*t3125;
  t3238 = t3236 + t3237;
  t3243 = t3170*t3238;
  t3250 = t3134 + t3243;
  t3284 = t3111*t3283;
  t3288 = t3119*t3287;
  t3289 = t3284 + t3288;
  t3290 = t3064*t3289;
  t3292 = -1.*t3111*t3287;
  t3293 = t3291 + t3292;
  t3294 = t3170*t3293;
  t3295 = t3290 + t3294;
  t3348 = t3103*t3269;
  t3349 = t3316 + t3348;
  t3351 = 0.4*t3125;
  t3352 = t3269*t3125;
  t3353 = t3351 + t3352;
  t3364 = -0.4*t3125;
  t3365 = -1.*t3269*t3125;
  t3366 = t3364 + t3365;
  t3358 = 0.4*t3103;
  t3359 = t3358 + t3348;
  t3360 = t3254*t3125;
  t3361 = t3103*t3252;
  t3362 = t3360 + t3361;
  t3300 = -1.*t3111*t3283;
  t3304 = t3119*t3303;
  t3305 = t3300 + t3304;
  t3306 = t3170*t3305;
  t3307 = t3111*t3303;
  t3308 = t3291 + t3307;
  t3309 = t3064*t3308;
  t3310 = t3306 + t3309;
  t3337 = t3103*t3111;
  t3338 = t3119*t3125;
  t3339 = t3337 + t3338;
  t3340 = t3064*t3339;
  t3341 = t3170*t3325;
  t3342 = t3340 + t3341;
  t3376 = -1.*t3111*t3362;
  t3377 = t3376 + t3288;
  t3378 = t3170*t3377;
  t3379 = t3119*t3362;
  t3380 = t3111*t3287;
  t3381 = t3379 + t3380;
  t3382 = t3064*t3381;
  t3383 = t3378 + t3382;
  t3400 = -1.*t3170*t3325;
  t3401 = t3134 + t3400;
  t3408 = -1.*t3170*t3289;
  t3409 = t3064*t3293;
  t3410 = t3408 + t3409;
  t3423 = t3318*t3111;
  t3424 = -0.11*t3119*t3125;
  t3425 = t3423 + t3424;
  t3427 = t3119*t3318;
  t3428 = 0.11*t3111*t3125;
  t3429 = t3427 + t3428;
  t3434 = 0.11*t3103*t3111;
  t3435 = 0.11*t3119*t3125;
  t3436 = t3434 + t3435;
  t3439 = -0.11*t3119*t3103;
  t3440 = t3439 + t3428;
  t3454 = t3349*t3111;
  t3455 = t3119*t3353;
  t3456 = t3454 + t3455;
  t3458 = t3119*t3349;
  t3459 = -1.*t3111*t3353;
  t3460 = t3458 + t3459;
  t3470 = t3119*t3359;
  t3471 = t3111*t3366;
  t3472 = t3470 + t3471;
  t3465 = -1.*t3359*t3111;
  t3466 = t3119*t3366;
  t3467 = t3465 + t3466;
  t3403 = -1.*t3170*t3133;
  t3404 = t3064*t3238;
  t3405 = t3403 + t3404;
  t3253 = 0.4*t3252;
  t3270 = t3269*t3252;
  t3271 = t3253 + t3270;
  t3297 = 0.4*t3254;
  t3298 = t3269*t3254;
  t3299 = t3297 + t3298;
  t3417 = t3064*t3305;
  t3418 = -1.*t3170*t3308;
  t3419 = t3417 + t3418;
  t3334 = Power(t3103,2);
  t3335 = 0.11*t3334;
  t3336 = t3333 + t3335;
  t3397 = -1.*t3170*t3339;
  t3398 = t3397 + t3326;
  t3319 = -1.*t3318*t3125;
  t3320 = -0.11*t3103*t3125;
  t3321 = t3319 + t3320;
  t3329 = t3318*t3125;
  t3330 = 0.11*t3103*t3125;
  t3331 = t3329 + t3330;
  t3344 = Power(t3125,2);
  t3345 = -0.11*t3344;
  t3346 = t3333 + t3345;
  t3350 = -1.*t3349*t3283;
  t3354 = -1.*t3353*t3287;
  t3355 = t3350 + t3354;
  t3357 = t3349*t3283;
  t3363 = t3359*t3362;
  t3367 = t3366*t3287;
  t3368 = t3353*t3287;
  t3369 = t3357 + t3363 + t3367 + t3368;
  t3371 = -1.*t3366*t3283;
  t3372 = -1.*t3353*t3283;
  t3373 = -1.*t3359*t3287;
  t3374 = -1.*t3349*t3303;
  t3375 = t3371 + t3372 + t3373 + t3374;
  t3412 = t3064*t3377;
  t3413 = -1.*t3170*t3381;
  t3414 = t3412 + t3413;
  t3385 = t3353*t3362;
  t3386 = t3349*t3287;
  t3387 = t3385 + t3386;
  t3399 = 6.8*t3327*t3398;
  t3402 = 6.8*t3401*t3342;
  t3406 = 6.8*t3327*t3405;
  t3407 = 6.8*t3401*t3250;
  t3411 = 0.3*t3410*t3383;
  t3415 = 0.3*t3295*t3414;
  t3416 = 0.3*t3410*t3310;
  t3420 = 0.3*t3295*t3419;
  t3421 = t3399 + t3402 + t3406 + t3407 + t3411 + t3415 + t3416 + t3420;
  t3426 = -1.*t3425*t3325;
  t3430 = -1.*t3133*t3429;
  t3431 = t3426 + t3430;
  t3433 = t3425*t3325;
  t3437 = t3436*t3325;
  t3438 = t3133*t3429;
  t3441 = t3339*t3440;
  t3442 = t3433 + t3437 + t3438 + t3441;
  t3444 = t3425*t3339;
  t3445 = t3325*t3429;
  t3446 = t3444 + t3445;
  t3448 = -1.*t3133*t3425;
  t3449 = -1.*t3133*t3436;
  t3450 = -1.*t3325*t3440;
  t3451 = -1.*t3429*t3238;
  t3452 = t3448 + t3449 + t3450 + t3451;
  t3457 = -1.*t3456*t3289;
  t3461 = -1.*t3460*t3293;
  t3462 = t3457 + t3461;
  t3464 = t3456*t3289;
  t3468 = t3467*t3377;
  t3469 = t3460*t3293;
  t3473 = t3472*t3381;
  t3474 = t3464 + t3468 + t3469 + t3473;
  t3476 = t3460*t3377;
  t3477 = t3456*t3381;
  t3478 = t3476 + t3477;
  t3480 = -1.*t3472*t3289;
  t3481 = -1.*t3467*t3293;
  t3482 = -1.*t3460*t3305;
  t3483 = -1.*t3456*t3308;
  t3484 = t3480 + t3481 + t3482 + t3483;
  t3432 = 6.8*t3327*t3431;
  t3443 = 6.8*t3327*t3442;
  t3447 = 6.8*t3446*t3250;
  t3453 = 6.8*t3342*t3452;
  t3463 = 0.3*t3295*t3462;
  t3475 = 0.3*t3295*t3474;
  t3479 = 0.3*t3478*t3310;
  t3485 = 0.3*t3383*t3484;
  t3486 = t3432 + t3443 + t3447 + t3453 + t3463 + t3475 + t3479 + t3485;
  t3512 = 6.8*t3401*t3431;
  t3513 = 6.8*t3401*t3442;
  t3514 = 6.8*t3446*t3405;
  t3515 = 6.8*t3398*t3452;
  t3516 = 0.3*t3410*t3462;
  t3517 = 0.3*t3410*t3474;
  t3518 = 0.3*t3478*t3419;
  t3519 = 0.3*t3414*t3484;
  t3520 = t3512 + t3513 + t3514 + t3515 + t3516 + t3517 + t3518 + t3519;
  t3328 = 6.8*t3321*t3327;
  t3332 = 6.8*t3331*t3327;
  t3343 = 6.8*t3336*t3342;
  t3347 = 6.8*t3346*t3250;
  t3356 = 0.3*t3355*t3295;
  t3370 = 0.3*t3369*t3295;
  t3384 = 0.3*t3375*t3383;
  t3388 = 0.3*t3387*t3310;
  t3389 = t3328 + t3332 + t3343 + t3347 + t3356 + t3370 + t3384 + t3388;
  t3495 = 6.8*t3336*t3398;
  t3496 = 6.8*t3321*t3401;
  t3497 = 6.8*t3331*t3401;
  t3498 = 6.8*t3346*t3405;
  t3499 = 0.3*t3355*t3410;
  t3500 = 0.3*t3369*t3410;
  t3501 = 0.3*t3375*t3414;
  t3502 = 0.3*t3387*t3419;
  t3503 = t3495 + t3496 + t3497 + t3498 + t3499 + t3500 + t3501 + t3502;
  t3529 = 6.8*t3336*t3431;
  t3530 = 6.8*t3321*t3446;
  t3531 = 6.8*t3346*t3442;
  t3532 = 6.8*t3331*t3452;
  t3533 = 0.3*t3375*t3462;
  t3534 = 0.3*t3387*t3474;
  t3535 = 0.3*t3369*t3478;
  t3536 = 0.3*t3355*t3484;
  t3537 = t3529 + t3530 + t3531 + t3532 + t3533 + t3534 + t3535 + t3536;
  t3549 = -0.748*t3321;
  t3550 = 0.3*t3299*t3369;
  t3551 = 0.3*t3271*t3375;
  t3552 = t3549 + t3550 + t3551;
  t3251 = -0.748*t3250;
  t3296 = 0.3*t3271*t3295;
  t3311 = 0.3*t3299*t3310;
  t3312 = t3251 + t3296 + t3311;
  t3490 = -0.748*t3405;
  t3491 = 0.3*t3271*t3410;
  t3492 = 0.3*t3299*t3419;
  t3493 = t3490 + t3491 + t3492;
  t3524 = -0.748*t3442;
  t3525 = 0.3*t3299*t3474;
  t3526 = 0.3*t3271*t3484;
  t3527 = t3524 + t3525 + t3526;
  p_output1[0]=var2[5]*(-0.5*(0.6*t3295*t3310 + 13.6*t3250*t3327 + 13.6*t3327*t3342 + 0.6*t3295*t3383)*var2[0] - 0.5*t3421*var2[1] - 0.5*t3486*var2[2] - 0.5*t3389*var2[3] - 0.5*t3312*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t3421*var2[0] - 0.5*(13.6*t3398*t3401 + 13.6*t3401*t3405 + 0.6*t3410*t3414 + 0.6*t3410*t3419)*var2[1] - 0.5*t3520*var2[2] - 0.5*t3503*var2[3] - 0.5*t3493*var2[5]);
  p_output1[2]=var2[5]*(-0.5*t3486*var2[0] - 0.5*t3520*var2[1] - 0.5*(13.6*t3442*t3446 + 13.6*t3431*t3452 + 0.6*t3474*t3478 + 0.6*t3462*t3484)*var2[2] - 0.5*t3537*var2[3] - 0.5*t3527*var2[5]);
  p_output1[3]=var2[5]*(-0.5*t3389*var2[0] - 0.5*t3503*var2[1] - 0.5*t3537*var2[2] - 0.5*(13.6*t3331*t3336 + 13.6*t3321*t3346 + 0.6*t3355*t3375 + 0.6*t3369*t3387)*var2[3] - 0.5*t3552*var2[5]);
  p_output1[4]=0;
  p_output1[5]=(-0.5*t3312*var2[0] - 0.5*t3493*var2[1] - 0.5*t3527*var2[2] - 0.5*t3552*var2[3])*var2[5];
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

#include "Ce2_vec6_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec6_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
