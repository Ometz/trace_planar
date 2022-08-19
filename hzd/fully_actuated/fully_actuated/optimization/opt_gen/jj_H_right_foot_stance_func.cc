/*
 * Automatically Generated from Mathematica.
 * Tue 23 Oct 2018 19:47:52 GMT-04:00
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
  double t432;
  double t399;
  double t413;
  double t434;
  double t361;
  double t430;
  double t445;
  double t456;
  double t457;
  double t461;
  double t462;
  double t463;
  double t466;
  double t467;
  double t468;
  double t470;
  double t472;
  double t476;
  double t478;
  double t480;
  double t469;
  double t471;
  double t481;
  double t482;
  double t485;
  double t486;
  double t487;
  double t489;
  double t491;
  double t494;
  double t497;
  double t498;
  double t499;
  double t509;
  double t510;
  double t512;
  double t503;
  double t505;
  double t507;
  double t527;
  double t528;
  double t520;
  double t540;
  double t548;
  double t549;
  double t555;
  double t556;
  double t557;
  double t563;
  double t564;
  double t569;
  double t513;
  double t515;
  double t516;
  double t517;
  double t522;
  double t523;
  double t524;
  double t586;
  double t594;
  double t595;
  double t613;
  double t614;
  double t615;
  double t616;
  double t618;
  double t623;
  double t625;
  double t612;
  double t620;
  double t622;
  double t629;
  double t633;
  double t634;
  double t638;
  double t639;
  double t640;
  double t641;
  double t642;
  double t610;
  double t611;
  double t643;
  double t644;
  double t646;
  double t663;
  double t671;
  double t675;
  double t676;
  double t677;
  double t680;
  double t681;
  double t683;
  double t696;
  double t695;
  double t700;
  double t701;
  double t704;
  double t705;
  double t706;
  double t707;
  double t708;
  double t688;
  double t694;
  double t711;
  double t712;
  double t713;
  double t718;
  double t719;
  double t720;
  double t725;
  double t726;
  double t728;
  double t721;
  double t729;
  double t730;
  double t731;
  double t732;
  double t733;
  double t734;
  double t735;
  double t736;
  double t717;
  double t724;
  double t741;
  double t738;
  double t740;
  double t751;
  double t665;
  double t666;
  double t667;
  double t763;
  double t764;
  double t765;
  double t762;
  double t766;
  double t767;
  double t768;
  double t769;
  double t770;
  double t771;
  double t772;
  double t773;
  double t774;
  double t775;
  double t780;
  double t781;
  double t782;
  double t742;
  double t743;
  double t746;
  double t792;
  double t800;
  double t801;
  double t802;
  double t803;
  double t804;
  double t805;
  double t806;
  double t807;
  double t808;
  double t815;
  double t816;
  double t817;
  double t828;
  double t829;
  double t830;
  double t831;
  double t832;
  double t833;
  double t834;
  double t835;
  double t836;
  double t837;
  double t838;
  double t839;
  double t840;
  double t813;
  double t814;
  double t818;
  double t819;
  double t820;
  double t821;
  double t822;
  double t823;
  double t824;
  double t825;
  double t826;
  double t827;
  double t841;
  double t842;
  double t843;
  t432 = Cos(var1[2]);
  t399 = Cos(var1[4]);
  t413 = Sin(var1[2]);
  t434 = Sin(var1[4]);
  t361 = Cos(var1[6]);
  t430 = -1.*t399*t413;
  t445 = -1.*t432*t434;
  t456 = t430 + t445;
  t457 = t361*t456;
  t461 = t432*t399;
  t462 = -1.*t413*t434;
  t463 = t461 + t462;
  t466 = Sin(var1[6]);
  t467 = -1.*t463*t466;
  t468 = t457 + t467;
  t470 = Cos(var1[8]);
  t472 = -1.*t361*t463;
  t476 = -1.*t456*t466;
  t478 = t472 + t476;
  t480 = Sin(var1[8]);
  t469 = -0.4*t468;
  t471 = t470*t468;
  t481 = t478*t480;
  t482 = t471 + t481;
  t485 = -0.025*t482;
  t486 = t470*t478;
  t487 = -1.*t468*t480;
  t489 = t486 + t487;
  t491 = 0.075*t489;
  t494 = t469 + t485 + t491;
  t497 = t399*t413;
  t498 = t432*t434;
  t499 = t497 + t498;
  t509 = t361*t463;
  t510 = -1.*t499*t466;
  t512 = t509 + t510;
  t503 = -1.*t361*t499;
  t505 = t503 + t467;
  t507 = t470*t505;
  t527 = t499*t466;
  t528 = t472 + t527;
  t520 = -1.*t505*t480;
  t540 = t456*t466;
  t548 = t509 + t540;
  t549 = -1.*t548*t480;
  t555 = t471 + t549;
  t556 = -0.025*t555;
  t557 = -1.*t470*t548;
  t563 = t557 + t487;
  t564 = 0.075*t563;
  t569 = t556 + t564;
  t513 = -1.*t512*t480;
  t515 = t507 + t513;
  t516 = -0.025*t515;
  t517 = -1.*t470*t512;
  t522 = t517 + t520;
  t523 = 0.075*t522;
  t524 = t516 + t523;
  t586 = t361*t499;
  t594 = t463*t466;
  t595 = t586 + t594;
  t613 = -1.*t432*t399;
  t614 = t413*t434;
  t615 = t613 + t614;
  t616 = t615*t466;
  t618 = t457 + t616;
  t623 = t361*t615;
  t625 = t623 + t476;
  t612 = -0.4*t456;
  t620 = -0.4*t618;
  t622 = t470*t618;
  t629 = t625*t480;
  t633 = t622 + t629;
  t634 = -0.025*t633;
  t638 = t470*t625;
  t639 = -1.*t618*t480;
  t640 = t638 + t639;
  t641 = 0.075*t640;
  t642 = t612 + t620 + t634 + t641;
  t610 = var2[6]*t494;
  t611 = var2[8]*t569;
  t643 = var2[2]*t642;
  t644 = var2[4]*t642;
  t646 = t610 + t611 + t643 + t644;
  t663 = -1.*t361*t456;
  t671 = -0.4*t625;
  t675 = -1.*t615*t466;
  t676 = t663 + t675;
  t677 = t676*t480;
  t680 = t638 + t677;
  t681 = -0.025*t680;
  t683 = t671 + t681;
  t696 = t623 + t527;
  t695 = -0.4*t615;
  t700 = -0.4*t696;
  t701 = t470*t696;
  t704 = t586 + t675;
  t705 = t704*t480;
  t706 = t701 + t705;
  t707 = -0.025*t706;
  t708 = t695 + t700 + t707;
  t688 = -0.025*var2[8]*t640;
  t694 = var2[6]*t683;
  t711 = var2[2]*t708;
  t712 = var2[4]*t708;
  t713 = t688 + t694 + t711 + t712;
  t718 = t470*t548;
  t719 = t468*t480;
  t720 = t718 + t719;
  t725 = -1.*t470*t468;
  t726 = t548*t480;
  t728 = t725 + t726;
  t721 = Power(t720,2);
  t729 = -1.*t470*t478;
  t730 = t729 + t719;
  t731 = 2.*t728*t730;
  t732 = 2.*t482*t720;
  t733 = t731 + t732;
  t734 = Power(t728,2);
  t735 = t734 + t721;
  t736 = Power(t735,-2);
  t717 = Power(t555,2);
  t724 = 1/Sqrt(t721);
  t741 = 1/t735;
  t738 = Sqrt(t721);
  t740 = Power(t721,-1.5);
  t751 = Power(t482,2);
  t665 = t663 + t594;
  t666 = t665*t480;
  t667 = t486 + t666;
  t763 = -1.*t470*t625;
  t764 = t618*t480;
  t765 = t763 + t764;
  t762 = -1.*t633*t555*t720*t724*t733*t736;
  t766 = -1.*t738*t765*t733*t736;
  t767 = -1.*t482*t633*t555*t721*t740*t741;
  t768 = t482*t633*t555*t724*t741;
  t769 = t633*t489*t720*t724*t741;
  t770 = -1.*t470*t676;
  t771 = t770 + t629;
  t772 = t771*t738*t741;
  t773 = t555*t720*t724*t680*t741;
  t774 = t482*t720*t724*t765*t741;
  t775 = t762 + t766 + t767 + t768 + t769 + t772 + t773 + t774;
  t780 = 2.*t555*t720;
  t781 = 2.*t728*t720;
  t782 = t780 + t781;
  t742 = -1.*t482*t717*t721*t740*t741;
  t743 = t482*t717*t724*t741;
  t746 = t482*t738*t741;
  t792 = Power(t555,3);
  t800 = -1.*t633*t555*t720*t724*t782*t736;
  t801 = -1.*t738*t765*t782*t736;
  t802 = -1.*t633*t717*t721*t740*t741;
  t803 = t633*t717*t724*t741;
  t804 = t633*t563*t720*t724*t741;
  t805 = t633*t738*t741;
  t806 = t555*t720*t724*t640*t741;
  t807 = t555*t720*t724*t765*t741;
  t808 = t800 + t801 + t802 + t803 + t804 + t805 + t806 + t807;
  t815 = 2.*t633*t720;
  t816 = 2.*t728*t765;
  t817 = t815 + t816;
  t828 = Power(t633,2);
  t829 = -1.*t828*t555*t721*t740*t741;
  t830 = t828*t555*t724*t741;
  t831 = -1.*t470*t704;
  t832 = t696*t480;
  t833 = t831 + t832;
  t834 = t833*t738*t741;
  t835 = t555*t720*t724*t706*t741;
  t836 = t633*t720*t724*t640*t741;
  t837 = t633*t720*t724*t765*t741;
  t838 = -1.*t633*t555*t720*t724*t736*t817;
  t839 = -1.*t738*t765*t736*t817;
  t840 = t829 + t830 + t834 + t835 + t836 + t837 + t838 + t839;
  t813 = t633*t730*t720*t724*t741;
  t814 = t482*t720*t724*t640*t741;
  t818 = -1.*t482*t555*t720*t724*t736*t817;
  t819 = -1.*t730*t738*t736*t817;
  t820 = t767 + t768 + t813 + t772 + t773 + t814 + t818 + t819;
  t821 = var2[6]*t820;
  t822 = t633*t721*t724*t741;
  t823 = 2.*t555*t720*t724*t640*t741;
  t824 = -1.*t717*t720*t724*t736*t817;
  t825 = -1.*t720*t738*t736*t817;
  t826 = t802 + t803 + t822 + t805 + t823 + t824 + t825;
  t827 = var2[8]*t826;
  t841 = var2[2]*t840;
  t842 = var2[4]*t840;
  t843 = t821 + t827 + t841 + t842;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=t646*var2[2] + t646*var2[4] + var2[6]*(t494*var2[2] + t494*var2[4] + (-0.4*t505 + 0.075*(t520 + t470*t528) - 0.025*(t507 + t480*t528))*var2[6] + t524*var2[8]) + var2[8]*(t569*var2[2] + t569*var2[4] + t524*var2[6] + (-0.025*(t513 - 1.*t470*t595) + 0.075*(t517 + t480*t595))*var2[8]);
  p_output1[4]=t713*var2[2] + t713*var2[4] + var2[6]*(t683*var2[2] + t683*var2[4] + (-0.4*t478 - 0.025*t667)*var2[6] - 0.025*t489*var2[8]) + var2[8]*(-0.025*t640*var2[2] - 0.025*t640*var2[4] - 0.025*t489*var2[6] - 0.025*t563*var2[8]);
  p_output1[5]=t843*var2[2] + t843*var2[4] + var2[6]*(t775*var2[2] + t775*var2[4] + (-1.*t482*t555*t720*t724*t733*t736 - 1.*t730*t733*t736*t738 + t482*t489*t720*t724*t741 + t555*t667*t720*t724*t741 + t482*t720*t724*t730*t741 + (t481 - 1.*t470*t665)*t738*t741 + t555*t724*t741*t751 - 1.*t555*t721*t740*t741*t751)*var2[6] + (-1.*t717*t720*t724*t733*t736 - 1.*t720*t733*t736*t738 + 2.*t489*t555*t720*t724*t741 + t482*t721*t724*t741 + t742 + t743 + t746)*var2[8]) + var2[8]*(t808*var2[2] + t808*var2[4] + (t489*t555*t720*t724*t741 + t482*t563*t720*t724*t741 + t555*t720*t724*t730*t741 + t742 + t743 + t746 - 1.*t482*t555*t720*t724*t736*t782 - 1.*t730*t736*t738*t782)*var2[6] + (2.*t555*t563*t720*t724*t741 + t555*t721*t724*t741 + t555*t738*t741 - 1.*t717*t720*t724*t736*t782 - 1.*t720*t736*t738*t782 + t724*t741*t792 - 1.*t721*t740*t741*t792)*var2[8]);
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
