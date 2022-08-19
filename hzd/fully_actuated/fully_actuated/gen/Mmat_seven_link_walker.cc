/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:11 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t6;
  double t3;
  double t9;
  double t11;
  double t21;
  double t23;
  double t33;
  double t35;
  double t39;
  double t40;
  double t41;
  double t54;
  double t56;
  double t60;
  double t61;
  double t62;
  double t75;
  double t77;
  double t76;
  double t78;
  double t79;
  double t81;
  double t82;
  double t83;
  double t84;
  double t94;
  double t95;
  double t96;
  double t107;
  double t109;
  double t108;
  double t110;
  double t111;
  double t113;
  double t114;
  double t115;
  double t116;
  double t126;
  double t127;
  double t128;
  double t16;
  double t17;
  double t18;
  double t10;
  double t12;
  double t13;
  double t28;
  double t29;
  double t30;
  double t22;
  double t24;
  double t25;
  double t34;
  double t36;
  double t37;
  double t38;
  double t42;
  double t43;
  double t46;
  double t47;
  double t48;
  double t49;
  double t50;
  double t51;
  double t55;
  double t57;
  double t58;
  double t59;
  double t63;
  double t64;
  double t67;
  double t68;
  double t69;
  double t70;
  double t71;
  double t72;
  double t80;
  double t85;
  double t87;
  double t88;
  double t89;
  double t86;
  double t90;
  double t91;
  double t97;
  double t98;
  double t99;
  double t100;
  double t101;
  double t102;
  double t103;
  double t104;
  double t112;
  double t117;
  double t119;
  double t120;
  double t121;
  double t118;
  double t122;
  double t123;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t203;
  double t204;
  double t205;
  double t213;
  double t214;
  double t215;
  double t216;
  double t217;
  double t218;
  double t219;
  double t220;
  double t222;
  double t223;
  double t224;
  double t232;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t240;
  double t241;
  double t242;
  double t246;
  double t247;
  double t248;
  double t239;
  double t243;
  double t244;
  double t256;
  double t257;
  double t258;
  double t259;
  double t260;
  double t261;
  double t262;
  double t264;
  double t265;
  double t266;
  double t270;
  double t271;
  double t272;
  double t263;
  double t267;
  double t268;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t149;
  double t150;
  double t151;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t162;
  double t163;
  double t164;
  double t165;
  double t166;
  double t167;
  double t168;
  double t169;
  double t170;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t4;
  double t5;
  double t7;
  double t8;
  double t19;
  double t20;
  double t31;
  double t32;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t188;
  double t189;
  double t190;
  double t191;
  double t192;
  double t202;
  double t206;
  double t207;
  double t209;
  double t210;
  double t211;
  double t221;
  double t225;
  double t226;
  double t228;
  double t229;
  double t230;
  double t245;
  double t249;
  double t250;
  double t252;
  double t253;
  double t254;
  double t269;
  double t273;
  double t274;
  double t276;
  double t277;
  double t278;
  double t287;
  double t288;
  double t289;
  double t282;
  double t283;
  double t284;
  double t285;
  double t291;
  double t292;
  double t293;
  double t295;
  double t296;
  double t297;
  double t306;
  double t307;
  double t308;
  double t301;
  double t302;
  double t303;
  double t304;
  double t310;
  double t311;
  double t312;
  double t314;
  double t315;
  double t316;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t326;
  double t330;
  double t331;
  double t332;
  double t334;
  double t335;
  double t336;
  double t181;
  double t187;
  double t193;
  double t208;
  double t212;
  double t227;
  double t231;
  double t251;
  double t255;
  double t275;
  double t279;
  double t280;
  double t360;
  double t361;
  double t362;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  double t368;
  double t369;
  double t370;
  double t371;
  double t281;
  double t286;
  double t290;
  double t294;
  double t298;
  double t299;
  double t372;
  double t373;
  double t374;
  double t375;
  double t376;
  double t377;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t300;
  double t305;
  double t309;
  double t313;
  double t317;
  double t318;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t383;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t319;
  double t323;
  double t327;
  double t328;
  double t384;
  double t385;
  double t386;
  double t387;
  double t425;
  double t426;
  double t427;
  double t428;
  double t442;
  double t443;
  double t444;
  double t445;
  double t329;
  double t333;
  double t337;
  double t338;
  double t388;
  double t389;
  double t390;
  double t391;
  double t429;
  double t430;
  double t431;
  double t432;
  double t455;
  double t456;
  double t457;
  double t458;
  t6 = Sin(var1[2]);
  t3 = Cos(var1[2]);
  t9 = Cos(var1[3]);
  t11 = Sin(var1[3]);
  t21 = Cos(var1[4]);
  t23 = Sin(var1[4]);
  t33 = Cos(var1[5]);
  t35 = Sin(var1[5]);
  t39 = t9*t33;
  t40 = -1.*t11*t35;
  t41 = t39 + t40;
  t54 = Cos(var1[6]);
  t56 = Sin(var1[6]);
  t60 = t21*t54;
  t61 = -1.*t23*t56;
  t62 = t60 + t61;
  t75 = Cos(var1[7]);
  t77 = Sin(var1[7]);
  t76 = -1.*t75*t35;
  t78 = -1.*t33*t77;
  t79 = t76 + t78;
  t81 = t33*t75;
  t82 = -1.*t35*t77;
  t83 = t81 + t82;
  t84 = t9*t83;
  t94 = t75*t35;
  t95 = t33*t77;
  t96 = t94 + t95;
  t107 = Cos(var1[8]);
  t109 = Sin(var1[8]);
  t108 = -1.*t107*t56;
  t110 = -1.*t54*t109;
  t111 = t108 + t110;
  t113 = t54*t107;
  t114 = -1.*t56*t109;
  t115 = t113 + t114;
  t116 = t21*t115;
  t126 = t107*t56;
  t127 = t54*t109;
  t128 = t126 + t127;
  t16 = t3*t9;
  t17 = -1.*t6*t11;
  t18 = t16 + t17;
  t10 = t9*t6;
  t12 = t3*t11;
  t13 = t10 + t12;
  t28 = t3*t21;
  t29 = -1.*t6*t23;
  t30 = t28 + t29;
  t22 = t21*t6;
  t24 = t3*t23;
  t25 = t22 + t24;
  t34 = -1.*t33*t11;
  t36 = -1.*t9*t35;
  t37 = t34 + t36;
  t38 = t6*t37;
  t42 = t3*t41;
  t43 = t38 + t42;
  t46 = t33*t11;
  t47 = t9*t35;
  t48 = t46 + t47;
  t49 = t3*t48;
  t50 = t6*t41;
  t51 = t49 + t50;
  t55 = -1.*t54*t23;
  t57 = -1.*t21*t56;
  t58 = t55 + t57;
  t59 = t6*t58;
  t63 = t3*t62;
  t64 = t59 + t63;
  t67 = t54*t23;
  t68 = t21*t56;
  t69 = t67 + t68;
  t70 = t3*t69;
  t71 = t6*t62;
  t72 = t70 + t71;
  t80 = t11*t79;
  t85 = t80 + t84;
  t87 = t9*t79;
  t88 = -1.*t11*t83;
  t89 = t87 + t88;
  t86 = t3*t85;
  t90 = t6*t89;
  t91 = t86 + t90;
  t97 = -1.*t11*t96;
  t98 = t97 + t84;
  t99 = t6*t98;
  t100 = t9*t96;
  t101 = t11*t83;
  t102 = t100 + t101;
  t103 = t3*t102;
  t104 = t99 + t103;
  t112 = t23*t111;
  t117 = t112 + t116;
  t119 = t21*t111;
  t120 = -1.*t23*t115;
  t121 = t119 + t120;
  t118 = t3*t117;
  t122 = t6*t121;
  t123 = t118 + t122;
  t129 = -1.*t23*t128;
  t130 = t129 + t116;
  t131 = t6*t130;
  t132 = t21*t128;
  t133 = t23*t115;
  t134 = t132 + t133;
  t135 = t3*t134;
  t136 = t131 + t135;
  t194 = -1.*t33;
  t195 = 1. + t194;
  t196 = -0.4*t195;
  t197 = -0.51*t33;
  t198 = t196 + t197;
  t199 = t198*t11;
  t200 = -0.11*t9*t35;
  t201 = t199 + t200;
  t203 = t9*t198;
  t204 = 0.11*t11*t35;
  t205 = t203 + t204;
  t213 = -1.*t54;
  t214 = 1. + t213;
  t215 = -0.4*t214;
  t216 = -0.51*t54;
  t217 = t215 + t216;
  t218 = t217*t23;
  t219 = -0.11*t21*t56;
  t220 = t218 + t219;
  t222 = t21*t217;
  t223 = 0.11*t23*t56;
  t224 = t222 + t223;
  t232 = -1.*t75;
  t233 = 1. + t232;
  t234 = -0.8*t233;
  t235 = -0.8*t75;
  t236 = t234 + t235;
  t237 = t33*t236;
  t238 = t196 + t237;
  t240 = 0.4*t35;
  t241 = t236*t35;
  t242 = t240 + t241;
  t246 = t9*t238;
  t247 = -1.*t11*t242;
  t248 = t246 + t247;
  t239 = t238*t11;
  t243 = t9*t242;
  t244 = t239 + t243;
  t256 = -1.*t107;
  t257 = 1. + t256;
  t258 = -0.8*t257;
  t259 = -0.8*t107;
  t260 = t258 + t259;
  t261 = t54*t260;
  t262 = t215 + t261;
  t264 = 0.4*t56;
  t265 = t260*t56;
  t266 = t264 + t265;
  t270 = t21*t262;
  t271 = -1.*t23*t266;
  t272 = t270 + t271;
  t263 = t262*t23;
  t267 = t21*t266;
  t268 = t263 + t267;
  t140 = -1.*t9*t6;
  t141 = -1.*t3*t11;
  t142 = t140 + t141;
  t143 = 6.8*t142*t18;
  t144 = 6.8*t13*t18;
  t145 = -1.*t21*t6;
  t146 = -1.*t3*t23;
  t147 = t145 + t146;
  t148 = 6.8*t147*t30;
  t149 = 6.8*t25*t30;
  t150 = t3*t37;
  t151 = -1.*t6*t41;
  t152 = t150 + t151;
  t153 = 6.8*t43*t152;
  t154 = -1.*t6*t48;
  t155 = t154 + t42;
  t156 = 6.8*t155*t51;
  t157 = t3*t58;
  t158 = -1.*t6*t62;
  t159 = t157 + t158;
  t160 = 6.8*t64*t159;
  t161 = -1.*t6*t69;
  t162 = t161 + t63;
  t163 = 6.8*t162*t72;
  t164 = -1.*t6*t85;
  t165 = t3*t89;
  t166 = t164 + t165;
  t167 = 0.3*t166*t91;
  t168 = t3*t98;
  t169 = -1.*t6*t102;
  t170 = t168 + t169;
  t171 = 0.3*t104*t170;
  t172 = -1.*t6*t117;
  t173 = t3*t121;
  t174 = t172 + t173;
  t175 = 0.3*t174*t123;
  t176 = t3*t130;
  t177 = -1.*t6*t134;
  t178 = t176 + t177;
  t179 = 0.3*t136*t178;
  t180 = t143 + t144 + t148 + t149 + t153 + t156 + t160 + t163 + t167 + t171 + t175 + t179;
  t4 = Power(t3,2);
  t5 = 12.*t4;
  t7 = Power(t6,2);
  t8 = 12.*t7;
  t19 = Power(t18,2);
  t20 = 6.8*t19;
  t31 = Power(t30,2);
  t32 = 6.8*t31;
  t182 = Power(t9,2);
  t183 = -0.11*t182;
  t184 = Power(t11,2);
  t185 = -0.11*t184;
  t186 = t183 + t185;
  t188 = Power(t21,2);
  t189 = -0.11*t188;
  t190 = Power(t23,2);
  t191 = -0.11*t190;
  t192 = t189 + t191;
  t202 = -1.*t201*t41;
  t206 = -1.*t37*t205;
  t207 = t202 + t206;
  t209 = t201*t48;
  t210 = t41*t205;
  t211 = t209 + t210;
  t221 = -1.*t220*t62;
  t225 = -1.*t58*t224;
  t226 = t221 + t225;
  t228 = t220*t69;
  t229 = t62*t224;
  t230 = t228 + t229;
  t245 = -1.*t244*t85;
  t249 = -1.*t248*t89;
  t250 = t245 + t249;
  t252 = t248*t98;
  t253 = t244*t102;
  t254 = t252 + t253;
  t269 = -1.*t268*t117;
  t273 = -1.*t272*t121;
  t274 = t269 + t273;
  t276 = t272*t130;
  t277 = t268*t134;
  t278 = t276 + t277;
  t287 = t198*t35;
  t288 = 0.11*t33*t35;
  t289 = t287 + t288;
  t282 = t198*t33;
  t283 = Power(t35,2);
  t284 = -0.11*t283;
  t285 = t282 + t284;
  t291 = t242*t96;
  t292 = t238*t83;
  t293 = t291 + t292;
  t295 = -1.*t238*t79;
  t296 = -1.*t242*t83;
  t297 = t295 + t296;
  t306 = t217*t56;
  t307 = 0.11*t54*t56;
  t308 = t306 + t307;
  t301 = t217*t54;
  t302 = Power(t56,2);
  t303 = -0.11*t302;
  t304 = t301 + t303;
  t310 = t266*t128;
  t311 = t262*t115;
  t312 = t310 + t311;
  t314 = -1.*t262*t111;
  t315 = -1.*t266*t115;
  t316 = t314 + t315;
  t320 = 0.4*t75;
  t321 = t236*t75;
  t322 = t320 + t321;
  t324 = 0.4*t77;
  t325 = t236*t77;
  t326 = t324 + t325;
  t330 = 0.4*t107;
  t331 = t260*t107;
  t332 = t330 + t331;
  t334 = 0.4*t109;
  t335 = t260*t109;
  t336 = t334 + t335;
  t181 = 2.88*t3;
  t187 = 6.8*t18*t186;
  t193 = 6.8*t30*t192;
  t208 = 6.8*t51*t207;
  t212 = 6.8*t43*t211;
  t227 = 6.8*t72*t226;
  t231 = 6.8*t64*t230;
  t251 = 0.3*t250*t104;
  t255 = 0.3*t91*t254;
  t275 = 0.3*t274*t136;
  t279 = 0.3*t123*t278;
  t280 = t181 + t187 + t193 + t208 + t212 + t227 + t231 + t251 + t255 + t275 + t279;
  t360 = -2.88*t6;
  t361 = 6.8*t142*t186;
  t362 = 6.8*t147*t192;
  t363 = 6.8*t155*t207;
  t364 = 6.8*t152*t211;
  t365 = 6.8*t162*t226;
  t366 = 6.8*t159*t230;
  t367 = 0.3*t250*t170;
  t368 = 0.3*t166*t254;
  t369 = 0.3*t274*t178;
  t370 = 0.3*t174*t278;
  t371 = t360 + t361 + t362 + t363 + t364 + t365 + t366 + t367 + t368 + t369 + t370;
  t281 = -0.748*t18;
  t286 = 6.8*t285*t43;
  t290 = 6.8*t289*t51;
  t294 = 0.3*t293*t91;
  t298 = 0.3*t297*t104;
  t299 = t281 + t286 + t290 + t294 + t298;
  t372 = -0.748*t142;
  t373 = 6.8*t289*t155;
  t374 = 6.8*t285*t152;
  t375 = 0.3*t293*t166;
  t376 = 0.3*t297*t170;
  t377 = t372 + t373 + t374 + t375 + t376;
  t413 = -0.748*t186;
  t414 = 6.8*t289*t207;
  t415 = 6.8*t285*t211;
  t416 = 0.3*t297*t250;
  t417 = 0.3*t293*t254;
  t418 = 1.14 + t413 + t414 + t415 + t416 + t417;
  t300 = -0.748*t30;
  t305 = 6.8*t304*t64;
  t309 = 6.8*t308*t72;
  t313 = 0.3*t312*t123;
  t317 = 0.3*t316*t136;
  t318 = t300 + t305 + t309 + t313 + t317;
  t378 = -0.748*t147;
  t379 = 6.8*t308*t162;
  t380 = 6.8*t304*t159;
  t381 = 0.3*t312*t174;
  t382 = 0.3*t316*t178;
  t383 = t378 + t379 + t380 + t381 + t382;
  t419 = -0.748*t192;
  t420 = 6.8*t308*t226;
  t421 = 6.8*t304*t230;
  t422 = 0.3*t316*t274;
  t423 = 0.3*t312*t278;
  t424 = 1.14 + t419 + t420 + t421 + t422 + t423;
  t319 = -0.748*t43;
  t323 = 0.3*t322*t91;
  t327 = 0.3*t326*t104;
  t328 = t319 + t323 + t327;
  t384 = -0.748*t152;
  t385 = 0.3*t322*t166;
  t386 = 0.3*t326*t170;
  t387 = t384 + t385 + t386;
  t425 = -0.748*t211;
  t426 = 0.3*t326*t250;
  t427 = 0.3*t322*t254;
  t428 = 0.67 + t425 + t426 + t427;
  t442 = -0.748*t285;
  t443 = 0.3*t322*t293;
  t444 = 0.3*t326*t297;
  t445 = 0.67 + t442 + t443 + t444;
  t329 = -0.748*t64;
  t333 = 0.3*t332*t123;
  t337 = 0.3*t336*t136;
  t338 = t329 + t333 + t337;
  t388 = -0.748*t159;
  t389 = 0.3*t332*t174;
  t390 = 0.3*t336*t178;
  t391 = t388 + t389 + t390;
  t429 = -0.748*t230;
  t430 = 0.3*t336*t274;
  t431 = 0.3*t332*t278;
  t432 = 0.67 + t429 + t430 + t431;
  t455 = -0.748*t304;
  t456 = 0.3*t332*t312;
  t457 = 0.3*t336*t316;
  t458 = 0.67 + t455 + t456 + t457;
  p_output1[0]=0.3*Power(t104,2) + 0.3*Power(t123,2) + 6.8*Power(t13,2) + 0.3*Power(t136,2) + t20 + 6.8*Power(t25,2) + t32 + 6.8*Power(t43,2) + t5 + 6.8*Power(t51,2) + 6.8*Power(t64,2) + 6.8*Power(t72,2) + t8 + 0.3*Power(t91,2);
  p_output1[1]=t180;
  p_output1[2]=t280;
  p_output1[3]=t299;
  p_output1[4]=t318;
  p_output1[5]=t328;
  p_output1[6]=t338;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t180;
  p_output1[10]=6.8*Power(t142,2) + 6.8*Power(t147,2) + 6.8*Power(t152,2) + 6.8*Power(t155,2) + 6.8*Power(t159,2) + 6.8*Power(t162,2) + 0.3*Power(t166,2) + 0.3*Power(t170,2) + 0.3*Power(t174,2) + 0.3*Power(t178,2) + t20 + t32 + t5 + t8;
  p_output1[11]=t371;
  p_output1[12]=t377;
  p_output1[13]=t383;
  p_output1[14]=t387;
  p_output1[15]=t391;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t280;
  p_output1[19]=t371;
  p_output1[20]=4.3012 + 6.8*Power(t186,2) + 6.8*Power(t192,2) + 6.8*Power(t207,2) + 6.8*Power(t211,2) + 6.8*Power(t226,2) + 6.8*Power(t230,2) + 0.3*Power(t250,2) + 0.3*Power(t254,2) + 0.3*Power(t274,2) + 0.3*Power(t278,2);
  p_output1[21]=t418;
  p_output1[22]=t424;
  p_output1[23]=t428;
  p_output1[24]=t432;
  p_output1[25]=0.2;
  p_output1[26]=0.2;
  p_output1[27]=t299;
  p_output1[28]=t377;
  p_output1[29]=t418;
  p_output1[30]=2.05228 + 6.8*Power(t285,2) + 6.8*Power(t289,2) + 0.3*Power(t293,2) + 0.3*Power(t297,2);
  p_output1[31]=0;
  p_output1[32]=t445;
  p_output1[33]=0;
  p_output1[34]=0.2;
  p_output1[35]=0;
  p_output1[36]=t318;
  p_output1[37]=t383;
  p_output1[38]=t424;
  p_output1[39]=0;
  p_output1[40]=2.05228 + 6.8*Power(t304,2) + 6.8*Power(t308,2) + 0.3*Power(t312,2) + 0.3*Power(t316,2);
  p_output1[41]=0;
  p_output1[42]=t458;
  p_output1[43]=0;
  p_output1[44]=0.2;
  p_output1[45]=t328;
  p_output1[46]=t387;
  p_output1[47]=t428;
  p_output1[48]=t445;
  p_output1[49]=0;
  p_output1[50]=1.58228 + 0.3*Power(t322,2) + 0.3*Power(t326,2);
  p_output1[51]=0;
  p_output1[52]=0.2;
  p_output1[53]=0;
  p_output1[54]=t338;
  p_output1[55]=t391;
  p_output1[56]=t432;
  p_output1[57]=0;
  p_output1[58]=t458;
  p_output1[59]=0;
  p_output1[60]=1.58228 + 0.3*Power(t332,2) + 0.3*Power(t336,2);
  p_output1[61]=0;
  p_output1[62]=0.2;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0.2;
  p_output1[66]=0.2;
  p_output1[67]=0;
  p_output1[68]=0.2;
  p_output1[69]=0;
  p_output1[70]=1.03;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0.2;
  p_output1[75]=0;
  p_output1[76]=0.2;
  p_output1[77]=0;
  p_output1[78]=0.2;
  p_output1[79]=0;
  p_output1[80]=1.03;
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

#include "Mmat_seven_link_walker.hh"

namespace SymFunction
{

void Mmat_seven_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
