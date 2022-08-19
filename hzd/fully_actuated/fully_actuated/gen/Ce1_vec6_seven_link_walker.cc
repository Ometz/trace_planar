/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:16 GMT-04:00
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
  double t1930;
  double t1906;
  double t1907;
  double t1931;
  double t2009;
  double t1958;
  double t2042;
  double t1896;
  double t2041;
  double t2043;
  double t2044;
  double t2056;
  double t2057;
  double t2059;
  double t2017;
  double t2024;
  double t2025;
  double t2026;
  double t2027;
  double t2072;
  double t2073;
  double t2074;
  double t2064;
  double t1929;
  double t1938;
  double t1944;
  double t1955;
  double t2010;
  double t2036;
  double t2040;
  double t2076;
  double t2063;
  double t2065;
  double t2066;
  double t2069;
  double t2070;
  double t2071;
  double t2075;
  double t2077;
  double t2079;
  double t1963;
  double t1973;
  double t1974;
  double t1975;
  double t1989;
  double t1999;
  double t2108;
  double t2109;
  double t2054;
  double t2136;
  double t2137;
  double t2138;
  double t2132;
  double t2133;
  double t2134;
  double t2135;
  double t2115;
  double t2119;
  double t2120;
  double t2142;
  double t2145;
  double t2146;
  double t2150;
  double t2153;
  double t2154;
  double t2155;
  double t2156;
  double t2060;
  double t2061;
  double t2080;
  double t2085;
  double t2175;
  double t2091;
  double t2092;
  double t2093;
  double t2186;
  double t2189;
  double t2176;
  double t2177;
  double t2181;
  double t2111;
  double t2112;
  double t2159;
  double t2160;
  double t2161;
  double t2206;
  double t2124;
  double t2128;
  double t2207;
  double t2208;
  double t2209;
  double t2210;
  double t2225;
  double t2226;
  double t2227;
  double t2228;
  double t2229;
  double t2238;
  double t2239;
  double t2240;
  double t2248;
  double t2249;
  double t2250;
  double t2251;
  double t2252;
  double t2253;
  double t2254;
  double t2255;
  double t2258;
  double t2259;
  double t2260;
  double t2262;
  double t2263;
  double t2264;
  double t2230;
  double t2231;
  double t2232;
  double t2233;
  double t2235;
  double t2241;
  double t2242;
  double t2243;
  double t2244;
  double t2280;
  double t2281;
  double t2302;
  double t2303;
  double t2305;
  double t2306;
  double t2307;
  double t2311;
  double t2312;
  double t2313;
  double t2304;
  double t2308;
  double t2309;
  double t2288;
  double t2289;
  double t2333;
  double t2334;
  double t2337;
  double t2338;
  t1930 = Cos(var1[3]);
  t1906 = Cos(var1[5]);
  t1907 = Sin(var1[3]);
  t1931 = Sin(var1[5]);
  t2009 = Cos(var1[7]);
  t1958 = Sin(var1[2]);
  t2042 = Sin(var1[7]);
  t1896 = Cos(var1[2]);
  t2041 = -1.*t2009*t1931;
  t2043 = -1.*t1906*t2042;
  t2044 = t2041 + t2043;
  t2056 = t1906*t2009;
  t2057 = -1.*t1931*t2042;
  t2059 = t2056 + t2057;
  t2017 = -1.*t2009;
  t2024 = 1. + t2017;
  t2025 = -0.8*t2024;
  t2026 = -0.8*t2009;
  t2027 = t2025 + t2026;
  t2072 = t2009*t1931;
  t2073 = t1906*t2042;
  t2074 = t2072 + t2073;
  t2064 = -1.*t1907*t2059;
  t1929 = -1.*t1906*t1907;
  t1938 = -1.*t1930*t1931;
  t1944 = t1929 + t1938;
  t1955 = t1896*t1944;
  t2010 = 0.4*t2009;
  t2036 = t2027*t2009;
  t2040 = t2010 + t2036;
  t2076 = t1930*t2059;
  t2063 = t1930*t2044;
  t2065 = t2063 + t2064;
  t2066 = t1896*t2065;
  t2069 = 0.4*t2042;
  t2070 = t2027*t2042;
  t2071 = t2069 + t2070;
  t2075 = -1.*t1907*t2074;
  t2077 = t2075 + t2076;
  t2079 = t1896*t2077;
  t1963 = -1.*t1930*t1906;
  t1973 = t1907*t1931;
  t1974 = t1963 + t1973;
  t1975 = t1958*t1974;
  t1989 = t1955 + t1975;
  t1999 = -0.748*t1989;
  t2108 = t1907*t2044;
  t2109 = t2108 + t2076;
  t2054 = -1.*t1907*t2044;
  t2136 = -1.*t1906*t2009;
  t2137 = t1931*t2042;
  t2138 = t2136 + t2137;
  t2132 = t1896*t2109;
  t2133 = t1958*t2065;
  t2134 = t2132 + t2133;
  t2135 = 0.3*t2071*t2134;
  t2115 = t1930*t2074;
  t2119 = t1907*t2059;
  t2120 = t2115 + t2119;
  t2142 = t1930*t2138;
  t2145 = t2054 + t2142;
  t2146 = t1958*t2145;
  t2150 = t1907*t2138;
  t2153 = t2063 + t2150;
  t2154 = t1896*t2153;
  t2155 = t2146 + t2154;
  t2156 = 0.3*t2040*t2155;
  t2060 = -1.*t1930*t2059;
  t2061 = t2054 + t2060;
  t2080 = -1.*t1930*t2074;
  t2085 = t2080 + t2064;
  t2175 = -1.*t1958*t1944;
  t2091 = t1930*t1906;
  t2092 = -1.*t1907*t1931;
  t2093 = t2091 + t2092;
  t2186 = -1.*t1958*t2065;
  t2189 = -1.*t1958*t2077;
  t2176 = t1896*t1974;
  t2177 = t2175 + t2176;
  t2181 = -0.748*t2177;
  t2111 = -1.*t1958*t2109;
  t2112 = t2111 + t2066;
  t2159 = -0.4*t2042;
  t2160 = -1.*t2027*t2042;
  t2161 = t2159 + t2160;
  t2206 = 0.3*t2071*t2112;
  t2124 = -1.*t1958*t2120;
  t2128 = t2079 + t2124;
  t2207 = t1896*t2145;
  t2208 = -1.*t1958*t2153;
  t2209 = t2207 + t2208;
  t2210 = 0.3*t2040*t2209;
  t2225 = -1.*t1906;
  t2226 = 1. + t2225;
  t2227 = -0.4*t2226;
  t2228 = -0.51*t1906;
  t2229 = t2227 + t2228;
  t2238 = t1930*t2229;
  t2239 = 0.11*t1907*t1931;
  t2240 = t2238 + t2239;
  t2248 = t1906*t2027;
  t2249 = t2227 + t2248;
  t2250 = t1930*t2249;
  t2251 = 0.4*t1931;
  t2252 = t2027*t1931;
  t2253 = t2251 + t2252;
  t2254 = -1.*t1907*t2253;
  t2255 = t2250 + t2254;
  t2258 = -1.*t2249*t1907;
  t2259 = -1.*t1930*t2253;
  t2260 = t2258 + t2259;
  t2262 = t2249*t1907;
  t2263 = t1930*t2253;
  t2264 = t2262 + t2263;
  t2230 = t2229*t1907;
  t2231 = -0.11*t1930*t1931;
  t2232 = t2230 + t2231;
  t2233 = t2232*t2093;
  t2235 = 0.11*t1930*t1931;
  t2241 = t1944*t2240;
  t2242 = t1906*t1907;
  t2243 = t1930*t1931;
  t2244 = t2242 + t2243;
  t2280 = t2264*t2109;
  t2281 = t2255*t2065;
  t2302 = 0.4*t1906;
  t2303 = t2302 + t2248;
  t2305 = -0.4*t1931;
  t2306 = -1.*t2027*t1931;
  t2307 = t2305 + t2306;
  t2311 = t1930*t2303;
  t2312 = t1907*t2307;
  t2313 = t2311 + t2312;
  t2304 = -1.*t2303*t1907;
  t2308 = t1930*t2307;
  t2309 = t2304 + t2308;
  t2288 = -1.*t2255*t2145;
  t2289 = -1.*t2264*t2153;
  t2333 = t2249*t2044;
  t2334 = t2253*t2059;
  t2337 = -1.*t2253*t2044;
  t2338 = -1.*t2249*t2138;
  p_output1[0]=var2[5]*(-0.5*(-0.748*(t1955 - 1.*t1958*t2093) + 0.3*t2040*t2112 + 0.3*t2071*t2128)*var2[2] - 0.5*(t1999 + 0.3*t2040*(t1958*t2061 + t2066) + 0.3*t2071*(t2079 + t1958*t2085))*var2[3] - 0.5*(t1999 + t2135 + t2156)*var2[5] - 0.5*(0.3*t2040*(t1958*t2077 + t1896*t2120) + t2135 + t2156 + 0.3*t2134*t2161)*var2[7]);
  p_output1[1]=var2[5]*(-0.5*(-0.748*(-1.*t1896*t2093 + t2175) + 0.3*t2040*(-1.*t1896*t2109 + t2186) + 0.3*t2071*(-1.*t1896*t2120 + t2189))*var2[2] - 0.5*(t2181 + 0.3*t2040*(t1896*t2061 + t2186) + 0.3*t2071*(t1896*t2085 + t2189))*var2[3] - 0.5*(t2181 + t2206 + t2210)*var2[5] - 0.5*(0.3*t2040*t2128 + 0.3*t2112*t2161 + t2206 + t2210)*var2[7]);
  p_output1[2]=var2[5]*(-0.5*(-0.748*(t2233 + t2093*(-1.*t1907*t2229 + t2235) + t2241 + t2240*t2244) + 0.3*t2071*(-1.*t2061*t2255 - 1.*t2109*t2255 - 1.*t2065*t2260 - 1.*t2065*t2264) + 0.3*t2040*(t2085*t2255 + t2120*t2255 + t2077*t2260 + t2077*t2264))*var2[3] - 0.5*(-0.748*(t2233 + t2093*(0.11*t1906*t1907 + t2235) + t2241 + (-0.11*t1906*t1930 + t2239)*t2244) + 0.3*t2071*(t2288 + t2289 - 1.*t2065*t2309 - 1.*t2109*t2313) + 0.3*t2040*(t2280 + t2281 + t2077*t2309 + t2120*t2313))*var2[5] - 0.5*(0.3*t2040*(-1.*t2065*t2255 - 1.*t2109*t2264) + 0.3*t2161*(t2077*t2255 + t2120*t2264) + 0.3*t2040*(t2280 + t2281) + 0.3*t2071*(t2288 + t2289))*var2[7]);
  p_output1[3]=var2[5]*(-0.5*(-0.748*(-0.11*t1906*t1931 - 1.*t1931*t2229) + 0.3*t2040*(t2074*t2303 + t2059*t2307 + t2333 + t2334) + 0.3*t2071*(-1.*t2059*t2303 - 1.*t2044*t2307 + t2337 + t2338))*var2[5] - 0.5*(0.3*t2040*(-1.*t2044*t2249 - 1.*t2059*t2253) + 0.3*t2161*(t2059*t2249 + t2074*t2253) + 0.3*t2040*(t2333 + t2334) + 0.3*t2071*(t2337 + t2338))*var2[7]);
  p_output1[4]=0;
  p_output1[5]=-0.5*(0.6*t2040*t2071 + 0.6*t2040*t2161)*var2[5]*var2[7];
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

#include "Ce1_vec6_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec6_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
