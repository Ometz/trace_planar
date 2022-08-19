/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:15 GMT-04:00
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
  double t15;
  double t10;
  double t12;
  double t16;
  double t26;
  double t27;
  double t28;
  double t46;
  double t49;
  double t59;
  double t60;
  double t63;
  double t47;
  double t50;
  double t52;
  double t53;
  double t65;
  double t66;
  double t94;
  double t98;
  double t95;
  double t99;
  double t100;
  double t103;
  double t105;
  double t106;
  double t118;
  double t119;
  double t122;
  double t127;
  double t137;
  double t138;
  double t139;
  double t150;
  double t157;
  double t126;
  double t130;
  double t131;
  double t132;
  double t133;
  double t198;
  double t199;
  double t203;
  double t209;
  double t210;
  double t217;
  double t101;
  double t236;
  double t237;
  double t239;
  double t67;
  double t68;
  double t70;
  double t71;
  double t73;
  double t74;
  double t80;
  double t81;
  double t84;
  double t86;
  double t87;
  double t90;
  double t92;
  double t93;
  double t229;
  double t241;
  double t243;
  double t246;
  double t252;
  double t253;
  double t260;
  double t261;
  double t263;
  double t277;
  double t282;
  double t292;
  double t299;
  double t301;
  double t325;
  double t331;
  double t340;
  double t341;
  double t342;
  double t328;
  double t335;
  double t338;
  double t339;
  double t343;
  double t344;
  double t359;
  double t377;
  double t371;
  double t383;
  double t387;
  double t392;
  double t393;
  double t394;
  double t398;
  double t399;
  double t400;
  double t404;
  double t410;
  double t411;
  double t412;
  double t433;
  double t434;
  double t14;
  double t22;
  double t24;
  double t38;
  double t39;
  double t42;
  double t44;
  double t45;
  double t280;
  double t287;
  double t291;
  double t306;
  double t310;
  double t311;
  double t318;
  double t321;
  double t352;
  double t345;
  double t346;
  double t347;
  double t348;
  double t349;
  double t350;
  double t124;
  double t165;
  double t403;
  double t405;
  double t401;
  double t406;
  double t407;
  double t408;
  double t440;
  double t441;
  double t446;
  double t447;
  double t448;
  double t449;
  double t435;
  double t391;
  double t484;
  double t485;
  double t486;
  double t351;
  double t353;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t483;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t492;
  double t493;
  double t494;
  double t460;
  double t461;
  double t453;
  double t454;
  double t112;
  double t113;
  double t116;
  double t125;
  double t469;
  double t470;
  double t168;
  double t173;
  double t176;
  double t180;
  double t472;
  double t473;
  double t510;
  double t511;
  double t512;
  double t513;
  double t514;
  double t515;
  double t516;
  double t529;
  double t530;
  double t531;
  double t532;
  double t533;
  double t534;
  double t535;
  double t466;
  double t467;
  double t463;
  double t464;
  double t395;
  double t396;
  double t397;
  double t402;
  double t475;
  double t476;
  double t436;
  double t437;
  double t438;
  double t439;
  double t478;
  double t479;
  double t501;
  double t502;
  double t503;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t540;
  double t541;
  double t542;
  double t543;
  double t544;
  double t545;
  double t546;
  double t547;
  double t548;
  double t551;
  double t519;
  double t522;
  double t558;
  double t561;
  double t549;
  double t550;
  double t552;
  double t553;
  double t554;
  double t555;
  double t610;
  double t611;
  double t612;
  double t613;
  double t614;
  double t615;
  double t616;
  double t629;
  double t630;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t636;
  double t638;
  double t639;
  double t640;
  double t645;
  double t646;
  double t647;
  double t663;
  double t664;
  double t665;
  double t666;
  double t667;
  double t668;
  double t669;
  double t671;
  double t672;
  double t673;
  double t677;
  double t678;
  double t679;
  double t670;
  double t674;
  double t675;
  double t685;
  double t686;
  double t687;
  double t676;
  double t680;
  double t681;
  double t692;
  double t693;
  double t694;
  double t637;
  double t641;
  double t642;
  double t643;
  double t644;
  double t649;
  double t653;
  double t654;
  double t655;
  double t656;
  double t657;
  double t716;
  double t717;
  double t719;
  double t720;
  double t660;
  double t704;
  double t705;
  double t706;
  double t728;
  double t729;
  double t731;
  double t732;
  double t733;
  double t709;
  double t737;
  double t738;
  double t739;
  double t730;
  double t734;
  double t735;
  double t710;
  double t711;
  double t623;
  double t624;
  double t625;
  double t626;
  double t627;
  double t628;
  double t758;
  double t759;
  double t760;
  double t761;
  double t762;
  double t763;
  double t764;
  double t765;
  double t767;
  double t768;
  double t769;
  double t779;
  double t780;
  double t781;
  double t782;
  double t783;
  double t784;
  double t785;
  double t787;
  double t788;
  double t789;
  double t793;
  double t794;
  double t795;
  double t786;
  double t790;
  double t791;
  double t750;
  double t751;
  double t752;
  double t753;
  double t754;
  double t755;
  double t766;
  double t770;
  double t771;
  double t773;
  double t774;
  double t775;
  double t807;
  double t808;
  double t809;
  double t792;
  double t796;
  double t797;
  double t799;
  double t800;
  double t801;
  double t825;
  double t826;
  double t827;
  double t805;
  double t806;
  double t811;
  double t815;
  double t816;
  double t853;
  double t854;
  double t856;
  double t857;
  double t819;
  double t841;
  double t842;
  double t843;
  double t865;
  double t866;
  double t868;
  double t869;
  double t870;
  double t846;
  double t874;
  double t875;
  double t876;
  double t867;
  double t871;
  double t872;
  double t847;
  double t848;
  double t888;
  double t889;
  double t890;
  double t891;
  double t893;
  double t894;
  double t895;
  double t896;
  double t898;
  double t899;
  double t900;
  double t902;
  double t903;
  double t904;
  double t892;
  double t897;
  double t914;
  double t915;
  double t916;
  double t919;
  double t920;
  double t923;
  double t946;
  double t947;
  double t948;
  double t949;
  double t951;
  double t952;
  double t953;
  double t954;
  double t956;
  double t957;
  double t958;
  double t960;
  double t961;
  double t962;
  double t950;
  double t955;
  double t972;
  double t973;
  double t974;
  double t977;
  double t978;
  double t981;
  double t1005;
  double t1006;
  double t1007;
  double t1009;
  double t1010;
  double t1011;
  double t1004;
  double t1020;
  double t1021;
  double t1034;
  double t1035;
  double t1036;
  double t1038;
  double t1039;
  double t1040;
  double t1033;
  double t1049;
  double t1050;
  t15 = Cos(var1[2]);
  t10 = Cos(var1[3]);
  t12 = Sin(var1[2]);
  t16 = Sin(var1[3]);
  t26 = t15*t10;
  t27 = -1.*t12*t16;
  t28 = t26 + t27;
  t46 = Cos(var1[5]);
  t49 = Sin(var1[5]);
  t59 = t10*t46;
  t60 = -1.*t16*t49;
  t63 = t59 + t60;
  t47 = -1.*t46*t16;
  t50 = -1.*t10*t49;
  t52 = t47 + t50;
  t53 = t12*t52;
  t65 = t15*t63;
  t66 = t53 + t65;
  t94 = Cos(var1[7]);
  t98 = Sin(var1[7]);
  t95 = -1.*t94*t49;
  t99 = -1.*t46*t98;
  t100 = t95 + t99;
  t103 = t46*t94;
  t105 = -1.*t49*t98;
  t106 = t103 + t105;
  t118 = t10*t100;
  t119 = -1.*t16*t106;
  t122 = t118 + t119;
  t127 = t10*t106;
  t137 = t94*t49;
  t138 = t46*t98;
  t139 = t137 + t138;
  t150 = -1.*t16*t139;
  t157 = t150 + t127;
  t126 = t16*t100;
  t130 = t126 + t127;
  t131 = t15*t130;
  t132 = t12*t122;
  t133 = t131 + t132;
  t198 = t12*t157;
  t199 = t10*t139;
  t203 = t16*t106;
  t209 = t199 + t203;
  t210 = t15*t209;
  t217 = t198 + t210;
  t101 = -1.*t16*t100;
  t236 = -1.*t46*t94;
  t237 = t49*t98;
  t239 = t236 + t237;
  t67 = t46*t16;
  t68 = t10*t49;
  t70 = t67 + t68;
  t71 = t15*t70;
  t73 = t12*t63;
  t74 = t71 + t73;
  t80 = 13.6*t66*t74;
  t81 = t15*t52;
  t84 = -1.*t10*t46;
  t86 = t16*t49;
  t87 = t84 + t86;
  t90 = t12*t87;
  t92 = t81 + t90;
  t93 = 13.6*t66*t92;
  t229 = 0.6*t133*t217;
  t241 = t10*t239;
  t243 = t101 + t241;
  t246 = t12*t243;
  t252 = t16*t239;
  t253 = t118 + t252;
  t260 = t15*t253;
  t261 = t246 + t260;
  t263 = 0.6*t133*t261;
  t277 = Cos(var1[4]);
  t282 = Sin(var1[4]);
  t292 = t15*t277;
  t299 = -1.*t12*t282;
  t301 = t292 + t299;
  t325 = Cos(var1[6]);
  t331 = Sin(var1[6]);
  t340 = t277*t325;
  t341 = -1.*t282*t331;
  t342 = t340 + t341;
  t328 = -1.*t325*t282;
  t335 = -1.*t277*t331;
  t338 = t328 + t335;
  t339 = t12*t338;
  t343 = t15*t342;
  t344 = t339 + t343;
  t359 = Cos(var1[8]);
  t377 = Sin(var1[8]);
  t371 = -1.*t359*t331;
  t383 = -1.*t325*t377;
  t387 = t371 + t383;
  t392 = t325*t359;
  t393 = -1.*t331*t377;
  t394 = t392 + t393;
  t398 = t277*t387;
  t399 = -1.*t282*t394;
  t400 = t398 + t399;
  t404 = t277*t394;
  t410 = t359*t331;
  t411 = t325*t377;
  t412 = t410 + t411;
  t433 = -1.*t282*t412;
  t434 = t433 + t404;
  t14 = -1.*t10*t12;
  t22 = -1.*t15*t16;
  t24 = t14 + t22;
  t38 = 13.6*t24*t28;
  t39 = t10*t12;
  t42 = t15*t16;
  t44 = t39 + t42;
  t45 = 13.6*t44*t28;
  t280 = -1.*t277*t12;
  t287 = -1.*t15*t282;
  t291 = t280 + t287;
  t306 = 13.6*t291*t301;
  t310 = t277*t12;
  t311 = t15*t282;
  t318 = t310 + t311;
  t321 = 13.6*t318*t301;
  t352 = t15*t338;
  t345 = t325*t282;
  t346 = t277*t331;
  t347 = t345 + t346;
  t348 = t15*t347;
  t349 = t12*t342;
  t350 = t348 + t349;
  t124 = t15*t122;
  t165 = t15*t157;
  t403 = t282*t387;
  t405 = t403 + t404;
  t401 = t15*t400;
  t406 = t15*t405;
  t407 = t12*t400;
  t408 = t406 + t407;
  t440 = t12*t434;
  t441 = t277*t412;
  t446 = t282*t394;
  t447 = t441 + t446;
  t448 = t15*t447;
  t449 = t440 + t448;
  t435 = t15*t434;
  t391 = -1.*t282*t387;
  t484 = -1.*t325*t359;
  t485 = t331*t377;
  t486 = t484 + t485;
  t351 = 13.6*t344*t350;
  t353 = -1.*t277*t325;
  t354 = t282*t331;
  t355 = t353 + t354;
  t356 = t12*t355;
  t357 = t352 + t356;
  t358 = 13.6*t344*t357;
  t483 = 0.6*t408*t449;
  t487 = t277*t486;
  t488 = t391 + t487;
  t489 = t12*t488;
  t490 = t282*t486;
  t491 = t398 + t490;
  t492 = t15*t491;
  t493 = t489 + t492;
  t494 = 0.6*t408*t493;
  t460 = -1.*t12*t70;
  t461 = t460 + t65;
  t453 = -1.*t12*t63;
  t454 = t81 + t453;
  t112 = -1.*t10*t106;
  t113 = t101 + t112;
  t116 = t12*t113;
  t125 = t116 + t124;
  t469 = -1.*t12*t130;
  t470 = t469 + t124;
  t168 = -1.*t10*t139;
  t173 = t168 + t119;
  t176 = t12*t173;
  t180 = t165 + t176;
  t472 = -1.*t12*t209;
  t473 = t165 + t472;
  t510 = 6.8*t66*t461;
  t511 = 6.8*t454*t74;
  t512 = -1.*t12*t52;
  t513 = t15*t87;
  t514 = t512 + t513;
  t515 = 6.8*t66*t514;
  t516 = 6.8*t454*t92;
  t529 = 0.3*t470*t217;
  t530 = 0.3*t133*t473;
  t531 = 0.3*t470*t261;
  t532 = t15*t243;
  t533 = -1.*t12*t253;
  t534 = t532 + t533;
  t535 = 0.3*t133*t534;
  t466 = -1.*t12*t347;
  t467 = t466 + t343;
  t463 = -1.*t12*t342;
  t464 = t352 + t463;
  t395 = -1.*t277*t394;
  t396 = t391 + t395;
  t397 = t12*t396;
  t402 = t397 + t401;
  t475 = -1.*t12*t405;
  t476 = t475 + t401;
  t436 = -1.*t277*t412;
  t437 = t436 + t399;
  t438 = t12*t437;
  t439 = t435 + t438;
  t478 = -1.*t12*t447;
  t479 = t435 + t478;
  t501 = Power(t24,2);
  t502 = 6.8*t501;
  t503 = 6.8*t24*t44;
  t504 = Power(t28,2);
  t505 = 6.8*t504;
  t506 = -1.*t15*t10;
  t507 = t12*t16;
  t508 = t506 + t507;
  t509 = 6.8*t28*t508;
  t540 = Power(t291,2);
  t541 = 6.8*t540;
  t542 = 6.8*t291*t318;
  t543 = Power(t301,2);
  t544 = 6.8*t543;
  t545 = -1.*t15*t277;
  t546 = t12*t282;
  t547 = t545 + t546;
  t548 = 6.8*t301*t547;
  t551 = -1.*t12*t338;
  t519 = -1.*t12*t122;
  t522 = -1.*t12*t157;
  t558 = -1.*t12*t400;
  t561 = -1.*t12*t434;
  t549 = 6.8*t344*t467;
  t550 = 6.8*t464*t350;
  t552 = t15*t355;
  t553 = t551 + t552;
  t554 = 6.8*t344*t553;
  t555 = 6.8*t464*t357;
  t610 = 0.3*t476*t449;
  t611 = 0.3*t408*t479;
  t612 = 0.3*t476*t493;
  t613 = t15*t488;
  t614 = -1.*t12*t491;
  t615 = t613 + t614;
  t616 = 0.3*t408*t615;
  t629 = -1.*t46;
  t630 = 1. + t629;
  t631 = -0.4*t630;
  t632 = -0.51*t46;
  t633 = t631 + t632;
  t634 = t633*t16;
  t635 = -0.11*t10*t49;
  t636 = t634 + t635;
  t638 = t10*t633;
  t639 = 0.11*t16*t49;
  t640 = t638 + t639;
  t645 = -1.*t633*t16;
  t646 = 0.11*t10*t49;
  t647 = t645 + t646;
  t663 = -1.*t94;
  t664 = 1. + t663;
  t665 = -0.8*t664;
  t666 = -0.8*t94;
  t667 = t665 + t666;
  t668 = t46*t667;
  t669 = t631 + t668;
  t671 = 0.4*t49;
  t672 = t667*t49;
  t673 = t671 + t672;
  t677 = t10*t669;
  t678 = -1.*t16*t673;
  t679 = t677 + t678;
  t670 = t669*t16;
  t674 = t10*t673;
  t675 = t670 + t674;
  t685 = -1.*t669*t16;
  t686 = -1.*t10*t673;
  t687 = t685 + t686;
  t676 = -1.*t675*t130;
  t680 = -1.*t679*t122;
  t681 = t676 + t680;
  t692 = t679*t157;
  t693 = t675*t209;
  t694 = t692 + t693;
  t637 = -1.*t636*t63;
  t641 = -1.*t52*t640;
  t642 = t637 + t641;
  t643 = 6.8*t66*t642;
  t644 = t636*t63;
  t649 = t52*t640;
  t653 = t636*t70;
  t654 = t63*t640;
  t655 = t653 + t654;
  t656 = 6.8*t655*t92;
  t657 = -1.*t52*t636;
  t716 = 0.11*t46*t16;
  t717 = t716 + t646;
  t719 = -0.11*t10*t46;
  t720 = t719 + t639;
  t660 = -1.*t640*t87;
  t704 = 0.3*t133*t681;
  t705 = t675*t130;
  t706 = t679*t122;
  t728 = 0.4*t46;
  t729 = t728 + t668;
  t731 = -0.4*t49;
  t732 = -1.*t667*t49;
  t733 = t731 + t732;
  t709 = 0.3*t694*t261;
  t737 = t10*t729;
  t738 = t16*t733;
  t739 = t737 + t738;
  t730 = -1.*t729*t16;
  t734 = t10*t733;
  t735 = t730 + t734;
  t710 = -1.*t679*t243;
  t711 = -1.*t675*t253;
  t623 = Power(t10,2);
  t624 = -0.11*t623;
  t625 = Power(t16,2);
  t626 = -0.11*t625;
  t627 = t624 + t626;
  t628 = 6.8*t24*t627;
  t758 = -1.*t325;
  t759 = 1. + t758;
  t760 = -0.4*t759;
  t761 = -0.51*t325;
  t762 = t760 + t761;
  t763 = t762*t282;
  t764 = -0.11*t277*t331;
  t765 = t763 + t764;
  t767 = t277*t762;
  t768 = 0.11*t282*t331;
  t769 = t767 + t768;
  t779 = -1.*t359;
  t780 = 1. + t779;
  t781 = -0.8*t780;
  t782 = -0.8*t359;
  t783 = t781 + t782;
  t784 = t325*t783;
  t785 = t760 + t784;
  t787 = 0.4*t331;
  t788 = t783*t331;
  t789 = t787 + t788;
  t793 = t277*t785;
  t794 = -1.*t282*t789;
  t795 = t793 + t794;
  t786 = t785*t282;
  t790 = t277*t789;
  t791 = t786 + t790;
  t750 = Power(t277,2);
  t751 = -0.11*t750;
  t752 = Power(t282,2);
  t753 = -0.11*t752;
  t754 = t751 + t753;
  t755 = 6.8*t291*t754;
  t766 = -1.*t765*t342;
  t770 = -1.*t338*t769;
  t771 = t766 + t770;
  t773 = t765*t347;
  t774 = t342*t769;
  t775 = t773 + t774;
  t807 = -1.*t762*t282;
  t808 = 0.11*t277*t331;
  t809 = t807 + t808;
  t792 = -1.*t791*t405;
  t796 = -1.*t795*t400;
  t797 = t792 + t796;
  t799 = t795*t434;
  t800 = t791*t447;
  t801 = t799 + t800;
  t825 = -1.*t785*t282;
  t826 = -1.*t277*t789;
  t827 = t825 + t826;
  t805 = 6.8*t344*t771;
  t806 = t765*t342;
  t811 = t338*t769;
  t815 = 6.8*t775*t357;
  t816 = -1.*t338*t765;
  t853 = 0.11*t325*t282;
  t854 = t853 + t808;
  t856 = -0.11*t277*t325;
  t857 = t856 + t768;
  t819 = -1.*t769*t355;
  t841 = 0.3*t408*t797;
  t842 = t791*t405;
  t843 = t795*t400;
  t865 = 0.4*t325;
  t866 = t865 + t784;
  t868 = -0.4*t331;
  t869 = -1.*t783*t331;
  t870 = t868 + t869;
  t846 = 0.3*t801*t493;
  t874 = t277*t866;
  t875 = t282*t870;
  t876 = t874 + t875;
  t867 = -1.*t866*t282;
  t871 = t277*t870;
  t872 = t867 + t871;
  t847 = -1.*t795*t488;
  t848 = -1.*t791*t491;
  t888 = -0.748*t24;
  t889 = t633*t49;
  t890 = 0.11*t46*t49;
  t891 = t889 + t890;
  t893 = t633*t46;
  t894 = Power(t49,2);
  t895 = -0.11*t894;
  t896 = t893 + t895;
  t898 = t673*t139;
  t899 = t669*t106;
  t900 = t898 + t899;
  t902 = -1.*t669*t100;
  t903 = -1.*t673*t106;
  t904 = t902 + t903;
  t892 = 6.8*t891*t66;
  t897 = 6.8*t896*t92;
  t914 = 0.3*t904*t133;
  t915 = t669*t100;
  t916 = t673*t106;
  t919 = -1.*t673*t100;
  t920 = -1.*t669*t239;
  t923 = 0.3*t900*t261;
  t946 = -0.748*t291;
  t947 = t762*t331;
  t948 = 0.11*t325*t331;
  t949 = t947 + t948;
  t951 = t762*t325;
  t952 = Power(t331,2);
  t953 = -0.11*t952;
  t954 = t951 + t953;
  t956 = t789*t412;
  t957 = t785*t394;
  t958 = t956 + t957;
  t960 = -1.*t785*t387;
  t961 = -1.*t789*t394;
  t962 = t960 + t961;
  t950 = 6.8*t949*t344;
  t955 = 6.8*t954*t357;
  t972 = 0.3*t962*t408;
  t973 = t785*t387;
  t974 = t789*t394;
  t977 = -1.*t789*t387;
  t978 = -1.*t785*t486;
  t981 = 0.3*t958*t493;
  t1005 = 0.4*t94;
  t1006 = t667*t94;
  t1007 = t1005 + t1006;
  t1009 = 0.4*t98;
  t1010 = t667*t98;
  t1011 = t1009 + t1010;
  t1004 = -0.748*t92;
  t1020 = 0.3*t1011*t133;
  t1021 = 0.3*t1007*t261;
  t1034 = 0.4*t359;
  t1035 = t783*t359;
  t1036 = t1034 + t1035;
  t1038 = 0.4*t377;
  t1039 = t783*t377;
  t1040 = t1038 + t1039;
  t1033 = -0.748*t357;
  t1049 = 0.3*t1040*t408;
  t1050 = 0.3*t1036*t493;
  p_output1[0]=var2[0]*(-0.5*(t306 + t321 + t38 + t45 + 13.6*t344*t464 + 13.6*t350*t467 + 0.6*t133*t470 + 0.6*t217*t473 + 0.6*t408*t476 + 0.6*t449*t479 + 13.6*t454*t66 + 13.6*t461*t74)*var2[2] - 0.5*(0.6*t125*t133 + 0.6*t180*t217 + t38 + t45 + t80 + t93)*var2[3] - 0.5*(t306 + t321 + t351 + t358 + 0.6*t402*t408 + 0.6*t439*t449)*var2[4] - 0.5*(t229 + t263 + t80 + t93)*var2[5] - 0.5*(t351 + t358 + t483 + t494)*var2[6] - 0.5*(t229 + t263)*var2[7] - 0.5*(t483 + t494)*var2[8]);
  p_output1[1]=var2[0]*(-0.5*(6.8*Power(t454,2) + 6.8*Power(t461,2) + 6.8*t350*(-1.*t15*t347 + t463) + 6.8*Power(t464,2) + 6.8*Power(t467,2) + 0.3*Power(t470,2) + 0.3*Power(t473,2) + 0.3*Power(t476,2) + 0.3*Power(t479,2) + t502 + t503 + t505 + t509 + 0.3*t133*(-1.*t130*t15 + t519) + 0.3*t217*(-1.*t15*t209 + t522) + t541 + t542 + t544 + t548 + 6.8*t344*(-1.*t15*t342 + t551) + 0.3*t408*(-1.*t15*t405 + t558) + 0.3*t449*(-1.*t15*t447 + t561) + 6.8*(t512 - 1.*t15*t63)*t66 + 6.8*(t453 - 1.*t15*t70)*t74)*var2[2] - 0.5*(0.3*t125*t470 + 0.3*t180*t473 + t502 + t503 + t505 + t509 + t510 + t511 + t515 + t516 + 0.3*t133*(t113*t15 + t519) + 0.3*t217*(t15*t173 + t522))*var2[3] - 0.5*(0.3*t402*t476 + 0.3*t439*t479 + t541 + t542 + t544 + t548 + t549 + t550 + t554 + t555 + 0.3*t408*(t15*t396 + t558) + 0.3*t449*(t15*t437 + t561))*var2[4] - 0.5*(t510 + t511 + t515 + t516 + t529 + t530 + t531 + t535)*var2[5] - 0.5*(t549 + t550 + t554 + t555 + t610 + t611 + t612 + t616)*var2[6] - 0.5*(t529 + t530 + t531 + t535)*var2[7] - 0.5*(t610 + t611 + t612 + t616)*var2[8]);
  p_output1[2]=var2[0]*(-0.5*(-2.88*t12 + t628 + 6.8*t461*t642 + 6.8*t454*t655 + 0.3*t473*t681 + 0.3*t470*t694 + t755 + 6.8*t467*t771 + 6.8*t464*t775 + 0.3*t479*t797 + 0.3*t476*t801)*var2[2] - 0.5*(t628 + t643 + t656 + 0.3*t180*t681 + 0.3*t217*(-1.*t122*t675 - 1.*t113*t679 - 1.*t130*t679 - 1.*t122*t687) + 0.3*t133*(t157*t675 + t173*t679 + t209*t679 + t157*t687) + 0.3*t125*t694 + 6.8*t66*(t644 + t63*t647 + t649 + t640*t70) + 6.8*(-1.*t63*t640 - 1.*t52*t647 + t657 + t660)*t74)*var2[3] - 0.5*(t755 + 0.3*t439*t797 + 0.3*t402*t801 + t805 + 6.8*t344*(t347*t769 + t806 + t342*t809 + t811) + t815 + 6.8*t350*(-1.*t342*t769 - 1.*t338*t809 + t816 + t819) + 0.3*t449*(-1.*t400*t791 - 1.*t396*t795 - 1.*t405*t795 - 1.*t400*t827) + 0.3*t408*(t434*t791 + t437*t795 + t447*t795 + t434*t827))*var2[4] - 0.5*(t643 + t656 + t704 + t709 + 6.8*t66*(t644 + t649 + t63*t717 + t70*t720) + 0.3*t217*(t710 + t711 - 1.*t122*t735 - 1.*t130*t739) + 0.3*t133*(t705 + t706 + t157*t735 + t209*t739) + 6.8*(t657 + t660 - 1.*t52*t717 - 1.*t63*t720)*t74)*var2[5] - 0.5*(t805 + t815 + t841 + t846 + 6.8*t350*(t816 + t819 - 1.*t338*t854 - 1.*t342*t857) + 6.8*t344*(t806 + t811 + t342*t854 + t347*t857) + 0.3*t449*(t847 + t848 - 1.*t400*t872 - 1.*t405*t876) + 0.3*t408*(t842 + t843 + t434*t872 + t447*t876))*var2[6] - 0.5*(t704 + 0.3*t133*(t705 + t706) + t709 + 0.3*t217*(t710 + t711))*var2[7] - 0.5*(t841 + 0.3*t408*(t842 + t843) + t846 + 0.3*t449*(t847 + t848))*var2[8]);
  p_output1[3]=var2[0]*(-0.5*(t888 + 6.8*t461*t891 + 6.8*t454*t896 + 0.3*t470*t900 + 0.3*t473*t904)*var2[2] - 0.5*(t888 + t892 + t897 + 0.3*t125*t900 + 0.3*t180*t904)*var2[3] - 0.5*(6.8*(-0.11*t46*t49 - 1.*t49*t633)*t66 + t892 + 6.8*t74*(0.11*Power(t46,2) + t893) + t897 + t914 + 0.3*t133*(t139*t729 + t106*t733 + t915 + t916) + 0.3*t217*(-1.*t106*t729 - 1.*t100*t733 + t919 + t920) + t923)*var2[5] - 0.5*(t914 + 0.3*t133*(t915 + t916) + 0.3*t217*(t919 + t920) + t923)*var2[7]);
  p_output1[4]=var2[0]*(-0.5*(t946 + 6.8*t467*t949 + 6.8*t464*t954 + 0.3*t476*t958 + 0.3*t479*t962)*var2[2] - 0.5*(t946 + t950 + t955 + 0.3*t402*t958 + 0.3*t439*t962)*var2[4] - 0.5*(6.8*t344*(-0.11*t325*t331 - 1.*t331*t762) + t950 + 6.8*t350*(0.11*Power(t325,2) + t951) + t955 + t972 + 0.3*t408*(t412*t866 + t394*t870 + t973 + t974) + 0.3*t449*(-1.*t394*t866 - 1.*t387*t870 + t977 + t978) + t981)*var2[6] - 0.5*(t972 + 0.3*t408*(t973 + t974) + 0.3*t449*(t977 + t978) + t981)*var2[8]);
  p_output1[5]=var2[0]*(-0.5*(-0.748*t454 + 0.3*t1007*t470 + 0.3*t1011*t473)*var2[2] - 0.5*(t1004 + 0.3*t1007*t125 + 0.3*t1011*t180)*var2[3] - 0.5*(t1004 + t1020 + t1021)*var2[5] - 0.5*(t1020 + t1021 + 0.3*t1007*t217 + 0.3*t133*(-0.4*t98 - 1.*t667*t98))*var2[7]);
  p_output1[6]=var2[0]*(-0.5*(-0.748*t464 + 0.3*t1036*t476 + 0.3*t1040*t479)*var2[2] - 0.5*(t1033 + 0.3*t1036*t402 + 0.3*t1040*t439)*var2[4] - 0.5*(t1033 + t1049 + t1050)*var2[6] - 0.5*(t1049 + t1050 + 0.3*t1036*t449 + 0.3*t408*(-0.4*t377 - 1.*t377*t783))*var2[8]);
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

#include "Ce1_vec1_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec1_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
