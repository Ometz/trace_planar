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
  double t3393;
  double t3390;
  double t3391;
  double t3394;
  double t3509;
  double t3507;
  double t3313;
  double t3487;
  double t3539;
  double t3540;
  double t3541;
  double t3543;
  double t3544;
  double t3545;
  double t3510;
  double t3511;
  double t3521;
  double t3522;
  double t3523;
  double t3553;
  double t3563;
  double t3564;
  double t3565;
  double t3392;
  double t3395;
  double t3396;
  double t3576;
  double t3577;
  double t3578;
  double t3579;
  double t3580;
  double t3584;
  double t3585;
  double t3586;
  double t3587;
  double t3588;
  double t3589;
  double t3595;
  double t3422;
  double t3488;
  double t3489;
  double t3494;
  double t3504;
  double t3505;
  double t3542;
  double t3546;
  double t3547;
  double t3548;
  double t3554;
  double t3555;
  double t3556;
  double t3557;
  double t3610;
  double t3611;
  double t3613;
  double t3614;
  double t3615;
  double t3626;
  double t3627;
  double t3628;
  double t3620;
  double t3621;
  double t3622;
  double t3623;
  double t3624;
  double t3562;
  double t3566;
  double t3567;
  double t3568;
  double t3569;
  double t3570;
  double t3571;
  double t3572;
  double t3599;
  double t3600;
  double t3601;
  double t3602;
  double t3603;
  double t3604;
  double t3638;
  double t3639;
  double t3640;
  double t3641;
  double t3642;
  double t3643;
  double t3644;
  double t3645;
  double t3662;
  double t3663;
  double t3670;
  double t3671;
  double t3672;
  double t3685;
  double t3686;
  double t3687;
  double t3689;
  double t3690;
  double t3691;
  double t3696;
  double t3697;
  double t3698;
  double t3701;
  double t3702;
  double t3716;
  double t3717;
  double t3718;
  double t3720;
  double t3721;
  double t3722;
  double t3732;
  double t3733;
  double t3734;
  double t3727;
  double t3728;
  double t3729;
  double t3665;
  double t3666;
  double t3667;
  double t3508;
  double t3528;
  double t3538;
  double t3559;
  double t3560;
  double t3561;
  double t3679;
  double t3680;
  double t3681;
  double t3596;
  double t3597;
  double t3598;
  double t3659;
  double t3660;
  double t3581;
  double t3582;
  double t3583;
  double t3591;
  double t3592;
  double t3593;
  double t3606;
  double t3607;
  double t3608;
  double t3612;
  double t3616;
  double t3617;
  double t3619;
  double t3625;
  double t3629;
  double t3630;
  double t3631;
  double t3633;
  double t3634;
  double t3635;
  double t3636;
  double t3637;
  double t3674;
  double t3675;
  double t3676;
  double t3647;
  double t3648;
  double t3649;
  double t3661;
  double t3664;
  double t3668;
  double t3669;
  double t3673;
  double t3677;
  double t3678;
  double t3682;
  double t3683;
  double t3688;
  double t3692;
  double t3693;
  double t3695;
  double t3699;
  double t3700;
  double t3703;
  double t3704;
  double t3706;
  double t3707;
  double t3708;
  double t3710;
  double t3711;
  double t3712;
  double t3713;
  double t3714;
  double t3719;
  double t3723;
  double t3724;
  double t3726;
  double t3730;
  double t3731;
  double t3735;
  double t3736;
  double t3738;
  double t3739;
  double t3740;
  double t3742;
  double t3743;
  double t3744;
  double t3745;
  double t3746;
  double t3694;
  double t3705;
  double t3709;
  double t3715;
  double t3725;
  double t3737;
  double t3741;
  double t3747;
  double t3748;
  double t3774;
  double t3775;
  double t3776;
  double t3777;
  double t3778;
  double t3779;
  double t3780;
  double t3781;
  double t3782;
  double t3590;
  double t3594;
  double t3605;
  double t3609;
  double t3618;
  double t3632;
  double t3646;
  double t3650;
  double t3651;
  double t3757;
  double t3758;
  double t3759;
  double t3760;
  double t3761;
  double t3762;
  double t3763;
  double t3764;
  double t3765;
  double t3791;
  double t3792;
  double t3793;
  double t3794;
  double t3795;
  double t3796;
  double t3797;
  double t3798;
  double t3799;
  double t3811;
  double t3812;
  double t3813;
  double t3814;
  double t3506;
  double t3558;
  double t3573;
  double t3574;
  double t3752;
  double t3753;
  double t3754;
  double t3755;
  double t3786;
  double t3787;
  double t3788;
  double t3789;
  t3393 = Cos(var1[4]);
  t3390 = Cos(var1[6]);
  t3391 = Sin(var1[4]);
  t3394 = Sin(var1[6]);
  t3509 = Cos(var1[8]);
  t3507 = Sin(var1[8]);
  t3313 = Cos(var1[2]);
  t3487 = Sin(var1[2]);
  t3539 = -1.*t3509*t3394;
  t3540 = -1.*t3390*t3507;
  t3541 = t3539 + t3540;
  t3543 = t3390*t3509;
  t3544 = -1.*t3394*t3507;
  t3545 = t3543 + t3544;
  t3510 = -1.*t3509;
  t3511 = 1. + t3510;
  t3521 = -0.8*t3511;
  t3522 = -0.8*t3509;
  t3523 = t3521 + t3522;
  t3553 = t3393*t3541;
  t3563 = -1.*t3390*t3509;
  t3564 = t3394*t3507;
  t3565 = t3563 + t3564;
  t3392 = -1.*t3390*t3391;
  t3395 = -1.*t3393*t3394;
  t3396 = t3392 + t3395;
  t3576 = -1.*t3390;
  t3577 = 1. + t3576;
  t3578 = -0.4*t3577;
  t3579 = -0.51*t3390;
  t3580 = t3578 + t3579;
  t3584 = t3487*t3396;
  t3585 = t3393*t3390;
  t3586 = -1.*t3391*t3394;
  t3587 = t3585 + t3586;
  t3588 = t3313*t3587;
  t3589 = t3584 + t3588;
  t3595 = t3580*t3390;
  t3422 = t3313*t3396;
  t3488 = -1.*t3393*t3390;
  t3489 = t3391*t3394;
  t3494 = t3488 + t3489;
  t3504 = t3487*t3494;
  t3505 = t3422 + t3504;
  t3542 = t3391*t3541;
  t3546 = t3393*t3545;
  t3547 = t3542 + t3546;
  t3548 = t3313*t3547;
  t3554 = -1.*t3391*t3545;
  t3555 = t3553 + t3554;
  t3556 = t3487*t3555;
  t3557 = t3548 + t3556;
  t3610 = t3390*t3523;
  t3611 = t3578 + t3610;
  t3613 = 0.4*t3394;
  t3614 = t3523*t3394;
  t3615 = t3613 + t3614;
  t3626 = -0.4*t3394;
  t3627 = -1.*t3523*t3394;
  t3628 = t3626 + t3627;
  t3620 = 0.4*t3390;
  t3621 = t3620 + t3610;
  t3622 = t3509*t3394;
  t3623 = t3390*t3507;
  t3624 = t3622 + t3623;
  t3562 = -1.*t3391*t3541;
  t3566 = t3393*t3565;
  t3567 = t3562 + t3566;
  t3568 = t3487*t3567;
  t3569 = t3391*t3565;
  t3570 = t3553 + t3569;
  t3571 = t3313*t3570;
  t3572 = t3568 + t3571;
  t3599 = t3390*t3391;
  t3600 = t3393*t3394;
  t3601 = t3599 + t3600;
  t3602 = t3313*t3601;
  t3603 = t3487*t3587;
  t3604 = t3602 + t3603;
  t3638 = -1.*t3391*t3624;
  t3639 = t3638 + t3546;
  t3640 = t3487*t3639;
  t3641 = t3393*t3624;
  t3642 = t3391*t3545;
  t3643 = t3641 + t3642;
  t3644 = t3313*t3643;
  t3645 = t3640 + t3644;
  t3662 = -1.*t3487*t3587;
  t3663 = t3422 + t3662;
  t3670 = -1.*t3487*t3547;
  t3671 = t3313*t3555;
  t3672 = t3670 + t3671;
  t3685 = t3580*t3391;
  t3686 = -0.11*t3393*t3394;
  t3687 = t3685 + t3686;
  t3689 = t3393*t3580;
  t3690 = 0.11*t3391*t3394;
  t3691 = t3689 + t3690;
  t3696 = 0.11*t3390*t3391;
  t3697 = 0.11*t3393*t3394;
  t3698 = t3696 + t3697;
  t3701 = -0.11*t3393*t3390;
  t3702 = t3701 + t3690;
  t3716 = t3611*t3391;
  t3717 = t3393*t3615;
  t3718 = t3716 + t3717;
  t3720 = t3393*t3611;
  t3721 = -1.*t3391*t3615;
  t3722 = t3720 + t3721;
  t3732 = t3393*t3621;
  t3733 = t3391*t3628;
  t3734 = t3732 + t3733;
  t3727 = -1.*t3621*t3391;
  t3728 = t3393*t3628;
  t3729 = t3727 + t3728;
  t3665 = -1.*t3487*t3396;
  t3666 = t3313*t3494;
  t3667 = t3665 + t3666;
  t3508 = 0.4*t3507;
  t3528 = t3523*t3507;
  t3538 = t3508 + t3528;
  t3559 = 0.4*t3509;
  t3560 = t3523*t3509;
  t3561 = t3559 + t3560;
  t3679 = t3313*t3567;
  t3680 = -1.*t3487*t3570;
  t3681 = t3679 + t3680;
  t3596 = Power(t3390,2);
  t3597 = 0.11*t3596;
  t3598 = t3595 + t3597;
  t3659 = -1.*t3487*t3601;
  t3660 = t3659 + t3588;
  t3581 = -1.*t3580*t3394;
  t3582 = -0.11*t3390*t3394;
  t3583 = t3581 + t3582;
  t3591 = t3580*t3394;
  t3592 = 0.11*t3390*t3394;
  t3593 = t3591 + t3592;
  t3606 = Power(t3394,2);
  t3607 = -0.11*t3606;
  t3608 = t3595 + t3607;
  t3612 = -1.*t3611*t3541;
  t3616 = -1.*t3615*t3545;
  t3617 = t3612 + t3616;
  t3619 = t3611*t3541;
  t3625 = t3621*t3624;
  t3629 = t3628*t3545;
  t3630 = t3615*t3545;
  t3631 = t3619 + t3625 + t3629 + t3630;
  t3633 = -1.*t3628*t3541;
  t3634 = -1.*t3615*t3541;
  t3635 = -1.*t3621*t3545;
  t3636 = -1.*t3611*t3565;
  t3637 = t3633 + t3634 + t3635 + t3636;
  t3674 = t3313*t3639;
  t3675 = -1.*t3487*t3643;
  t3676 = t3674 + t3675;
  t3647 = t3615*t3624;
  t3648 = t3611*t3545;
  t3649 = t3647 + t3648;
  t3661 = 6.8*t3589*t3660;
  t3664 = 6.8*t3663*t3604;
  t3668 = 6.8*t3589*t3667;
  t3669 = 6.8*t3663*t3505;
  t3673 = 0.3*t3672*t3645;
  t3677 = 0.3*t3557*t3676;
  t3678 = 0.3*t3672*t3572;
  t3682 = 0.3*t3557*t3681;
  t3683 = t3661 + t3664 + t3668 + t3669 + t3673 + t3677 + t3678 + t3682;
  t3688 = -1.*t3687*t3587;
  t3692 = -1.*t3396*t3691;
  t3693 = t3688 + t3692;
  t3695 = t3687*t3587;
  t3699 = t3698*t3587;
  t3700 = t3396*t3691;
  t3703 = t3601*t3702;
  t3704 = t3695 + t3699 + t3700 + t3703;
  t3706 = t3687*t3601;
  t3707 = t3587*t3691;
  t3708 = t3706 + t3707;
  t3710 = -1.*t3396*t3687;
  t3711 = -1.*t3396*t3698;
  t3712 = -1.*t3587*t3702;
  t3713 = -1.*t3691*t3494;
  t3714 = t3710 + t3711 + t3712 + t3713;
  t3719 = -1.*t3718*t3547;
  t3723 = -1.*t3722*t3555;
  t3724 = t3719 + t3723;
  t3726 = t3718*t3547;
  t3730 = t3729*t3639;
  t3731 = t3722*t3555;
  t3735 = t3734*t3643;
  t3736 = t3726 + t3730 + t3731 + t3735;
  t3738 = t3722*t3639;
  t3739 = t3718*t3643;
  t3740 = t3738 + t3739;
  t3742 = -1.*t3734*t3547;
  t3743 = -1.*t3729*t3555;
  t3744 = -1.*t3722*t3567;
  t3745 = -1.*t3718*t3570;
  t3746 = t3742 + t3743 + t3744 + t3745;
  t3694 = 6.8*t3589*t3693;
  t3705 = 6.8*t3589*t3704;
  t3709 = 6.8*t3708*t3505;
  t3715 = 6.8*t3604*t3714;
  t3725 = 0.3*t3557*t3724;
  t3737 = 0.3*t3557*t3736;
  t3741 = 0.3*t3740*t3572;
  t3747 = 0.3*t3645*t3746;
  t3748 = t3694 + t3705 + t3709 + t3715 + t3725 + t3737 + t3741 + t3747;
  t3774 = 6.8*t3663*t3693;
  t3775 = 6.8*t3663*t3704;
  t3776 = 6.8*t3708*t3667;
  t3777 = 6.8*t3660*t3714;
  t3778 = 0.3*t3672*t3724;
  t3779 = 0.3*t3672*t3736;
  t3780 = 0.3*t3740*t3681;
  t3781 = 0.3*t3676*t3746;
  t3782 = t3774 + t3775 + t3776 + t3777 + t3778 + t3779 + t3780 + t3781;
  t3590 = 6.8*t3583*t3589;
  t3594 = 6.8*t3593*t3589;
  t3605 = 6.8*t3598*t3604;
  t3609 = 6.8*t3608*t3505;
  t3618 = 0.3*t3617*t3557;
  t3632 = 0.3*t3631*t3557;
  t3646 = 0.3*t3637*t3645;
  t3650 = 0.3*t3649*t3572;
  t3651 = t3590 + t3594 + t3605 + t3609 + t3618 + t3632 + t3646 + t3650;
  t3757 = 6.8*t3598*t3660;
  t3758 = 6.8*t3583*t3663;
  t3759 = 6.8*t3593*t3663;
  t3760 = 6.8*t3608*t3667;
  t3761 = 0.3*t3617*t3672;
  t3762 = 0.3*t3631*t3672;
  t3763 = 0.3*t3637*t3676;
  t3764 = 0.3*t3649*t3681;
  t3765 = t3757 + t3758 + t3759 + t3760 + t3761 + t3762 + t3763 + t3764;
  t3791 = 6.8*t3598*t3693;
  t3792 = 6.8*t3583*t3708;
  t3793 = 6.8*t3608*t3704;
  t3794 = 6.8*t3593*t3714;
  t3795 = 0.3*t3637*t3724;
  t3796 = 0.3*t3649*t3736;
  t3797 = 0.3*t3631*t3740;
  t3798 = 0.3*t3617*t3746;
  t3799 = t3791 + t3792 + t3793 + t3794 + t3795 + t3796 + t3797 + t3798;
  t3811 = -0.748*t3583;
  t3812 = 0.3*t3561*t3631;
  t3813 = 0.3*t3538*t3637;
  t3814 = t3811 + t3812 + t3813;
  t3506 = -0.748*t3505;
  t3558 = 0.3*t3538*t3557;
  t3573 = 0.3*t3561*t3572;
  t3574 = t3506 + t3558 + t3573;
  t3752 = -0.748*t3667;
  t3753 = 0.3*t3538*t3672;
  t3754 = 0.3*t3561*t3681;
  t3755 = t3752 + t3753 + t3754;
  t3786 = -0.748*t3704;
  t3787 = 0.3*t3561*t3736;
  t3788 = 0.3*t3538*t3746;
  t3789 = t3786 + t3787 + t3788;
  p_output1[0]=var2[6]*(-0.5*(0.6*t3557*t3572 + 13.6*t3505*t3589 + 13.6*t3589*t3604 + 0.6*t3557*t3645)*var2[0] - 0.5*t3683*var2[1] - 0.5*t3748*var2[2] - 0.5*t3651*var2[4] - 0.5*t3574*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t3683*var2[0] - 0.5*(13.6*t3660*t3663 + 13.6*t3663*t3667 + 0.6*t3672*t3676 + 0.6*t3672*t3681)*var2[1] - 0.5*t3782*var2[2] - 0.5*t3765*var2[4] - 0.5*t3755*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t3748*var2[0] - 0.5*t3782*var2[1] - 0.5*(13.6*t3704*t3708 + 13.6*t3693*t3714 + 0.6*t3736*t3740 + 0.6*t3724*t3746)*var2[2] - 0.5*t3799*var2[4] - 0.5*t3789*var2[6]);
  p_output1[3]=0;
  p_output1[4]=var2[6]*(-0.5*t3651*var2[0] - 0.5*t3765*var2[1] - 0.5*t3799*var2[2] - 0.5*(13.6*t3593*t3598 + 13.6*t3583*t3608 + 0.6*t3617*t3637 + 0.6*t3631*t3649)*var2[4] - 0.5*t3814*var2[6]);
  p_output1[5]=0;
  p_output1[6]=(-0.5*t3574*var2[0] - 0.5*t3755*var2[1] - 0.5*t3789*var2[2] - 0.5*t3814*var2[4])*var2[6];
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

#include "Ce2_vec7_seven_link_walker.hh"

namespace SymFunction
{

void Ce2_vec7_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
