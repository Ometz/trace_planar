/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:21:52 GMT-05:00
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
  double t359;
  double t320;
  double t343;
  double t361;
  double t286;
  double t378;
  double t379;
  double t380;
  double t354;
  double t373;
  double t374;
  double t381;
  double t254;
  double t375;
  double t382;
  double t383;
  double t389;
  double t397;
  double t398;
  double t399;
  double t405;
  double t406;
  double t418;
  double t427;
  double t429;
  double t431;
  double t437;
  double t438;
  double t439;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t477;
  double t486;
  double t492;
  double t493;
  double t496;
  double t500;
  double t501;
  double t503;
  double t504;
  double t505;
  double t469;
  double t471;
  double t476;
  double t479;
  double t480;
  double t481;
  double t482;
  double t484;
  double t485;
  double t506;
  double t508;
  double t509;
  double t434;
  double t435;
  double t436;
  double t443;
  double t531;
  double t541;
  double t542;
  double t543;
  double t530;
  double t535;
  double t447;
  double t558;
  double t568;
  double t569;
  double t572;
  double t573;
  double t574;
  double t576;
  double t577;
  double t519;
  double t585;
  double t446;
  double t584;
  double t586;
  double t587;
  double t588;
  double t589;
  double t590;
  double t591;
  double t592;
  double t582;
  double t583;
  double t593;
  double t594;
  double t595;
  double t600;
  double t601;
  double t602;
  double t605;
  double t606;
  double t607;
  double t603;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t613;
  double t614;
  double t615;
  double t599;
  double t604;
  double t620;
  double t617;
  double t619;
  double t630;
  double t559;
  double t562;
  double t564;
  double t642;
  double t643;
  double t644;
  double t641;
  double t645;
  double t646;
  double t647;
  double t648;
  double t649;
  double t650;
  double t651;
  double t652;
  double t653;
  double t654;
  double t659;
  double t660;
  double t661;
  double t621;
  double t622;
  double t537;
  double t538;
  double t625;
  double t671;
  double t679;
  double t680;
  double t681;
  double t682;
  double t683;
  double t684;
  double t685;
  double t686;
  double t687;
  double t694;
  double t695;
  double t696;
  double t707;
  double t708;
  double t709;
  double t710;
  double t711;
  double t712;
  double t713;
  double t714;
  double t715;
  double t716;
  double t717;
  double t718;
  double t719;
  double t692;
  double t693;
  double t697;
  double t698;
  double t699;
  double t700;
  double t701;
  double t702;
  double t703;
  double t704;
  double t705;
  double t706;
  double t720;
  double t721;
  double t722;
  t359 = Cos(var1[2]);
  t320 = Cos(var1[4]);
  t343 = Sin(var1[2]);
  t361 = Sin(var1[4]);
  t286 = Cos(var1[6]);
  t378 = t359*t320;
  t379 = -1.*t343*t361;
  t380 = t378 + t379;
  t354 = -1.*t320*t343;
  t373 = -1.*t359*t361;
  t374 = t354 + t373;
  t381 = Sin(var1[6]);
  t254 = Cos(var1[8]);
  t375 = t286*t374;
  t382 = -1.*t380*t381;
  t383 = t375 + t382;
  t389 = t254*t383;
  t397 = t286*t380;
  t398 = t374*t381;
  t399 = t397 + t398;
  t405 = Sin(var1[8]);
  t406 = -1.*t399*t405;
  t418 = t389 + t406;
  t427 = t320*t343;
  t429 = t359*t361;
  t431 = t427 + t429;
  t437 = -1.*t431*t381;
  t438 = t397 + t437;
  t439 = -1.*t438*t405;
  t487 = -1.*t359*t320;
  t488 = t343*t361;
  t489 = t487 + t488;
  t490 = t489*t381;
  t491 = t375 + t490;
  t477 = -1.*t374*t381;
  t486 = -0.4*t374;
  t492 = -0.4*t491;
  t493 = t254*t491;
  t496 = t286*t489;
  t500 = t496 + t477;
  t501 = t500*t405;
  t503 = t493 + t501;
  t504 = -0.025*t503;
  t505 = t486 + t492 + t504;
  t469 = -0.025*var2[8]*t418;
  t471 = -0.4*t383;
  t476 = -1.*t286*t380;
  t479 = t476 + t477;
  t480 = t479*t405;
  t481 = t389 + t480;
  t482 = -0.025*t481;
  t484 = t471 + t482;
  t485 = var2[6]*t484;
  t506 = var2[2]*t505;
  t508 = var2[4]*t505;
  t509 = t469 + t485 + t506 + t508;
  t434 = -1.*t286*t431;
  t435 = t434 + t382;
  t436 = t254*t435;
  t443 = t436 + t439;
  t531 = -1.*t383*t405;
  t541 = t254*t500;
  t542 = -1.*t491*t405;
  t543 = t541 + t542;
  t530 = t254*t479;
  t535 = t530 + t531;
  t447 = t380*t381;
  t558 = -1.*t286*t374;
  t568 = -0.4*t500;
  t569 = -1.*t489*t381;
  t572 = t558 + t569;
  t573 = t572*t405;
  t574 = t541 + t573;
  t576 = -0.025*t574;
  t577 = t568 + t576;
  t519 = t431*t381;
  t585 = t496 + t519;
  t446 = t286*t431;
  t584 = -0.4*t489;
  t586 = -0.4*t585;
  t587 = t254*t585;
  t588 = t446 + t569;
  t589 = t588*t405;
  t590 = t587 + t589;
  t591 = -0.025*t590;
  t592 = t584 + t586 + t591;
  t582 = -0.025*var2[8]*t543;
  t583 = var2[6]*t577;
  t593 = var2[2]*t592;
  t594 = var2[4]*t592;
  t595 = t582 + t583 + t593 + t594;
  t600 = t254*t399;
  t601 = t383*t405;
  t602 = t600 + t601;
  t605 = -1.*t254*t383;
  t606 = t399*t405;
  t607 = t605 + t606;
  t603 = Power(t602,2);
  t608 = -1.*t254*t479;
  t609 = t608 + t601;
  t610 = 2.*t607*t609;
  t611 = 2.*t481*t602;
  t612 = t610 + t611;
  t613 = Power(t607,2);
  t614 = t613 + t603;
  t615 = Power(t614,-2);
  t599 = Power(t418,2);
  t604 = 1/Sqrt(t603);
  t620 = 1/t614;
  t617 = Sqrt(t603);
  t619 = Power(t603,-1.5);
  t630 = Power(t481,2);
  t559 = t558 + t447;
  t562 = t559*t405;
  t564 = t530 + t562;
  t642 = -1.*t254*t500;
  t643 = t491*t405;
  t644 = t642 + t643;
  t641 = -1.*t503*t418*t602*t604*t612*t615;
  t645 = -1.*t617*t644*t612*t615;
  t646 = -1.*t481*t503*t418*t603*t619*t620;
  t647 = t481*t503*t418*t604*t620;
  t648 = t503*t535*t602*t604*t620;
  t649 = -1.*t254*t572;
  t650 = t649 + t501;
  t651 = t650*t617*t620;
  t652 = t418*t602*t604*t574*t620;
  t653 = t481*t602*t604*t644*t620;
  t654 = t641 + t645 + t646 + t647 + t648 + t651 + t652 + t653;
  t659 = 2.*t418*t602;
  t660 = 2.*t607*t602;
  t661 = t659 + t660;
  t621 = -1.*t481*t599*t603*t619*t620;
  t622 = t481*t599*t604*t620;
  t537 = -1.*t254*t399;
  t538 = t537 + t531;
  t625 = t481*t617*t620;
  t671 = Power(t418,3);
  t679 = -1.*t503*t418*t602*t604*t661*t615;
  t680 = -1.*t617*t644*t661*t615;
  t681 = -1.*t503*t599*t603*t619*t620;
  t682 = t503*t599*t604*t620;
  t683 = t503*t538*t602*t604*t620;
  t684 = t503*t617*t620;
  t685 = t418*t602*t604*t543*t620;
  t686 = t418*t602*t604*t644*t620;
  t687 = t679 + t680 + t681 + t682 + t683 + t684 + t685 + t686;
  t694 = 2.*t503*t602;
  t695 = 2.*t607*t644;
  t696 = t694 + t695;
  t707 = Power(t503,2);
  t708 = -1.*t707*t418*t603*t619*t620;
  t709 = t707*t418*t604*t620;
  t710 = -1.*t254*t588;
  t711 = t585*t405;
  t712 = t710 + t711;
  t713 = t712*t617*t620;
  t714 = t418*t602*t604*t590*t620;
  t715 = t503*t602*t604*t543*t620;
  t716 = t503*t602*t604*t644*t620;
  t717 = -1.*t503*t418*t602*t604*t615*t696;
  t718 = -1.*t617*t644*t615*t696;
  t719 = t708 + t709 + t713 + t714 + t715 + t716 + t717 + t718;
  t692 = t503*t609*t602*t604*t620;
  t693 = t481*t602*t604*t543*t620;
  t697 = -1.*t481*t418*t602*t604*t615*t696;
  t698 = -1.*t609*t617*t615*t696;
  t699 = t646 + t647 + t692 + t651 + t652 + t693 + t697 + t698;
  t700 = var2[6]*t699;
  t701 = t503*t603*t604*t620;
  t702 = 2.*t418*t602*t604*t543*t620;
  t703 = -1.*t599*t602*t604*t615*t696;
  t704 = -1.*t602*t617*t615*t696;
  t705 = t681 + t682 + t701 + t684 + t702 + t703 + t704;
  t706 = var2[8]*t705;
  t720 = var2[2]*t719;
  t721 = var2[4]*t719;
  t722 = t700 + t706 + t720 + t721;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=t509*var2[2] + t509*var2[4] + var2[6]*(t484*var2[2] + t484*var2[4] + (-0.4*t435 - 0.025*(t436 + t405*(t476 + t519)))*var2[6] - 0.025*t443*var2[8]) + var2[8]*(-0.025*t418*var2[2] - 0.025*t418*var2[4] - 0.025*t443*var2[6] - 0.025*(t439 - 1.*t254*(t446 + t447))*var2[8]);
  p_output1[4]=t595*var2[2] + t595*var2[4] + var2[6]*(t577*var2[2] + t577*var2[4] + (-0.4*t479 - 0.025*t564)*var2[6] - 0.025*t535*var2[8]) + var2[8]*(-0.025*t543*var2[2] - 0.025*t543*var2[4] - 0.025*t535*var2[6] - 0.025*t538*var2[8]);
  p_output1[5]=t722*var2[2] + t722*var2[4] + var2[6]*(t654*var2[2] + t654*var2[4] + (-1.*t418*t481*t602*t604*t612*t615 - 1.*t609*t612*t615*t617 + t481*t535*t602*t604*t620 + t418*t564*t602*t604*t620 + t481*t602*t604*t609*t620 + (t480 - 1.*t254*t559)*t617*t620 + t418*t604*t620*t630 - 1.*t418*t603*t619*t620*t630)*var2[6] + (-1.*t599*t602*t604*t612*t615 - 1.*t602*t612*t615*t617 + 2.*t418*t535*t602*t604*t620 + t481*t603*t604*t620 + t621 + t622 + t625)*var2[8]) + var2[8]*(t687*var2[2] + t687*var2[4] + (t418*t535*t602*t604*t620 + t481*t538*t602*t604*t620 + t418*t602*t604*t609*t620 + t621 + t622 + t625 - 1.*t418*t481*t602*t604*t615*t661 - 1.*t609*t615*t617*t661)*var2[6] + (2.*t418*t538*t602*t604*t620 + t418*t603*t604*t620 + t418*t617*t620 - 1.*t599*t602*t604*t615*t661 - 1.*t602*t615*t617*t661 + t604*t620*t671 - 1.*t603*t619*t620*t671)*var2[8]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_H_right_foot_stance_func.hh"

namespace SymFunction
{

void jj_H_right_foot_stance_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
