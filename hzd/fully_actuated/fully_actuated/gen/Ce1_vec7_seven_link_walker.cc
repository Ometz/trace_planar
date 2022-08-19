/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:17 GMT-04:00
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
  double t2087;
  double t2067;
  double t2068;
  double t2088;
  double t2158;
  double t2102;
  double t2185;
  double t2062;
  double t2174;
  double t2187;
  double t2188;
  double t2191;
  double t2192;
  double t2193;
  double t2163;
  double t2164;
  double t2167;
  double t2170;
  double t2171;
  double t2211;
  double t2212;
  double t2216;
  double t2198;
  double t2086;
  double t2089;
  double t2090;
  double t2094;
  double t2162;
  double t2172;
  double t2173;
  double t2221;
  double t2197;
  double t2199;
  double t2200;
  double t2203;
  double t2204;
  double t2205;
  double t2217;
  double t2222;
  double t2223;
  double t2107;
  double t2114;
  double t2129;
  double t2130;
  double t2131;
  double t2157;
  double t2268;
  double t2269;
  double t2190;
  double t2287;
  double t2290;
  double t2291;
  double t2283;
  double t2284;
  double t2285;
  double t2286;
  double t2273;
  double t2274;
  double t2275;
  double t2292;
  double t2293;
  double t2294;
  double t2295;
  double t2296;
  double t2297;
  double t2298;
  double t2299;
  double t2194;
  double t2195;
  double t2224;
  double t2234;
  double t2325;
  double t2256;
  double t2257;
  double t2261;
  double t2330;
  double t2335;
  double t2326;
  double t2327;
  double t2328;
  double t2270;
  double t2271;
  double t2310;
  double t2314;
  double t2315;
  double t2354;
  double t2276;
  double t2277;
  double t2355;
  double t2356;
  double t2357;
  double t2358;
  double t2367;
  double t2368;
  double t2369;
  double t2370;
  double t2371;
  double t2380;
  double t2381;
  double t2382;
  double t2390;
  double t2391;
  double t2392;
  double t2393;
  double t2394;
  double t2395;
  double t2396;
  double t2397;
  double t2400;
  double t2401;
  double t2402;
  double t2404;
  double t2405;
  double t2406;
  double t2372;
  double t2373;
  double t2374;
  double t2375;
  double t2377;
  double t2383;
  double t2384;
  double t2385;
  double t2386;
  double t2422;
  double t2423;
  double t2444;
  double t2445;
  double t2447;
  double t2448;
  double t2449;
  double t2453;
  double t2454;
  double t2455;
  double t2446;
  double t2450;
  double t2451;
  double t2430;
  double t2431;
  double t2475;
  double t2476;
  double t2479;
  double t2480;
  t2087 = Cos(var1[4]);
  t2067 = Cos(var1[6]);
  t2068 = Sin(var1[4]);
  t2088 = Sin(var1[6]);
  t2158 = Cos(var1[8]);
  t2102 = Sin(var1[2]);
  t2185 = Sin(var1[8]);
  t2062 = Cos(var1[2]);
  t2174 = -1.*t2158*t2088;
  t2187 = -1.*t2067*t2185;
  t2188 = t2174 + t2187;
  t2191 = t2067*t2158;
  t2192 = -1.*t2088*t2185;
  t2193 = t2191 + t2192;
  t2163 = -1.*t2158;
  t2164 = 1. + t2163;
  t2167 = -0.8*t2164;
  t2170 = -0.8*t2158;
  t2171 = t2167 + t2170;
  t2211 = t2158*t2088;
  t2212 = t2067*t2185;
  t2216 = t2211 + t2212;
  t2198 = -1.*t2068*t2193;
  t2086 = -1.*t2067*t2068;
  t2089 = -1.*t2087*t2088;
  t2090 = t2086 + t2089;
  t2094 = t2062*t2090;
  t2162 = 0.4*t2158;
  t2172 = t2171*t2158;
  t2173 = t2162 + t2172;
  t2221 = t2087*t2193;
  t2197 = t2087*t2188;
  t2199 = t2197 + t2198;
  t2200 = t2062*t2199;
  t2203 = 0.4*t2185;
  t2204 = t2171*t2185;
  t2205 = t2203 + t2204;
  t2217 = -1.*t2068*t2216;
  t2222 = t2217 + t2221;
  t2223 = t2062*t2222;
  t2107 = -1.*t2087*t2067;
  t2114 = t2068*t2088;
  t2129 = t2107 + t2114;
  t2130 = t2102*t2129;
  t2131 = t2094 + t2130;
  t2157 = -0.748*t2131;
  t2268 = t2068*t2188;
  t2269 = t2268 + t2221;
  t2190 = -1.*t2068*t2188;
  t2287 = -1.*t2067*t2158;
  t2290 = t2088*t2185;
  t2291 = t2287 + t2290;
  t2283 = t2062*t2269;
  t2284 = t2102*t2199;
  t2285 = t2283 + t2284;
  t2286 = 0.3*t2205*t2285;
  t2273 = t2087*t2216;
  t2274 = t2068*t2193;
  t2275 = t2273 + t2274;
  t2292 = t2087*t2291;
  t2293 = t2190 + t2292;
  t2294 = t2102*t2293;
  t2295 = t2068*t2291;
  t2296 = t2197 + t2295;
  t2297 = t2062*t2296;
  t2298 = t2294 + t2297;
  t2299 = 0.3*t2173*t2298;
  t2194 = -1.*t2087*t2193;
  t2195 = t2190 + t2194;
  t2224 = -1.*t2087*t2216;
  t2234 = t2224 + t2198;
  t2325 = -1.*t2102*t2090;
  t2256 = t2087*t2067;
  t2257 = -1.*t2068*t2088;
  t2261 = t2256 + t2257;
  t2330 = -1.*t2102*t2199;
  t2335 = -1.*t2102*t2222;
  t2326 = t2062*t2129;
  t2327 = t2325 + t2326;
  t2328 = -0.748*t2327;
  t2270 = -1.*t2102*t2269;
  t2271 = t2270 + t2200;
  t2310 = -0.4*t2185;
  t2314 = -1.*t2171*t2185;
  t2315 = t2310 + t2314;
  t2354 = 0.3*t2205*t2271;
  t2276 = -1.*t2102*t2275;
  t2277 = t2223 + t2276;
  t2355 = t2062*t2293;
  t2356 = -1.*t2102*t2296;
  t2357 = t2355 + t2356;
  t2358 = 0.3*t2173*t2357;
  t2367 = -1.*t2067;
  t2368 = 1. + t2367;
  t2369 = -0.4*t2368;
  t2370 = -0.51*t2067;
  t2371 = t2369 + t2370;
  t2380 = t2087*t2371;
  t2381 = 0.11*t2068*t2088;
  t2382 = t2380 + t2381;
  t2390 = t2067*t2171;
  t2391 = t2369 + t2390;
  t2392 = t2087*t2391;
  t2393 = 0.4*t2088;
  t2394 = t2171*t2088;
  t2395 = t2393 + t2394;
  t2396 = -1.*t2068*t2395;
  t2397 = t2392 + t2396;
  t2400 = -1.*t2391*t2068;
  t2401 = -1.*t2087*t2395;
  t2402 = t2400 + t2401;
  t2404 = t2391*t2068;
  t2405 = t2087*t2395;
  t2406 = t2404 + t2405;
  t2372 = t2371*t2068;
  t2373 = -0.11*t2087*t2088;
  t2374 = t2372 + t2373;
  t2375 = t2374*t2261;
  t2377 = 0.11*t2087*t2088;
  t2383 = t2090*t2382;
  t2384 = t2067*t2068;
  t2385 = t2087*t2088;
  t2386 = t2384 + t2385;
  t2422 = t2406*t2269;
  t2423 = t2397*t2199;
  t2444 = 0.4*t2067;
  t2445 = t2444 + t2390;
  t2447 = -0.4*t2088;
  t2448 = -1.*t2171*t2088;
  t2449 = t2447 + t2448;
  t2453 = t2087*t2445;
  t2454 = t2068*t2449;
  t2455 = t2453 + t2454;
  t2446 = -1.*t2445*t2068;
  t2450 = t2087*t2449;
  t2451 = t2446 + t2450;
  t2430 = -1.*t2397*t2293;
  t2431 = -1.*t2406*t2296;
  t2475 = t2391*t2188;
  t2476 = t2395*t2193;
  t2479 = -1.*t2395*t2188;
  t2480 = -1.*t2391*t2291;
  p_output1[0]=var2[6]*(-0.5*(-0.748*(t2094 - 1.*t2102*t2261) + 0.3*t2173*t2271 + 0.3*t2205*t2277)*var2[2] - 0.5*(t2157 + 0.3*t2173*(t2102*t2195 + t2200) + 0.3*t2205*(t2223 + t2102*t2234))*var2[4] - 0.5*(t2157 + t2286 + t2299)*var2[6] - 0.5*(0.3*t2173*(t2102*t2222 + t2062*t2275) + t2286 + t2299 + 0.3*t2285*t2315)*var2[8]);
  p_output1[1]=var2[6]*(-0.5*(-0.748*(-1.*t2062*t2261 + t2325) + 0.3*t2173*(-1.*t2062*t2269 + t2330) + 0.3*t2205*(-1.*t2062*t2275 + t2335))*var2[2] - 0.5*(t2328 + 0.3*t2173*(t2062*t2195 + t2330) + 0.3*t2205*(t2062*t2234 + t2335))*var2[4] - 0.5*(t2328 + t2354 + t2358)*var2[6] - 0.5*(0.3*t2173*t2277 + 0.3*t2271*t2315 + t2354 + t2358)*var2[8]);
  p_output1[2]=var2[6]*(-0.5*(-0.748*(t2375 + t2261*(-1.*t2068*t2371 + t2377) + t2383 + t2382*t2386) + 0.3*t2205*(-1.*t2195*t2397 - 1.*t2269*t2397 - 1.*t2199*t2402 - 1.*t2199*t2406) + 0.3*t2173*(t2234*t2397 + t2275*t2397 + t2222*t2402 + t2222*t2406))*var2[4] - 0.5*(-0.748*(t2375 + t2261*(0.11*t2067*t2068 + t2377) + t2383 + (-0.11*t2067*t2087 + t2381)*t2386) + 0.3*t2205*(t2430 + t2431 - 1.*t2199*t2451 - 1.*t2269*t2455) + 0.3*t2173*(t2422 + t2423 + t2222*t2451 + t2275*t2455))*var2[6] - 0.5*(0.3*t2173*(-1.*t2199*t2397 - 1.*t2269*t2406) + 0.3*t2315*(t2222*t2397 + t2275*t2406) + 0.3*t2173*(t2422 + t2423) + 0.3*t2205*(t2430 + t2431))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=var2[6]*(-0.5*(-0.748*(-0.11*t2067*t2088 - 1.*t2088*t2371) + 0.3*t2173*(t2216*t2445 + t2193*t2449 + t2475 + t2476) + 0.3*t2205*(-1.*t2193*t2445 - 1.*t2188*t2449 + t2479 + t2480))*var2[6] - 0.5*(0.3*t2173*(-1.*t2188*t2391 - 1.*t2193*t2395) + 0.3*t2315*(t2193*t2391 + t2216*t2395) + 0.3*t2173*(t2475 + t2476) + 0.3*t2205*(t2479 + t2480))*var2[8]);
  p_output1[5]=0;
  p_output1[6]=-0.5*(0.6*t2173*t2205 + 0.6*t2173*t2315)*var2[6]*var2[8];
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

#include "Ce1_vec7_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec7_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
