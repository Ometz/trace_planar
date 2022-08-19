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
  double t1714;
  double t1744;
  double t1688;
  double t1704;
  double t1678;
  double t1703;
  double t1717;
  double t1723;
  double t1731;
  double t1735;
  double t1736;
  double t1773;
  double t1777;
  double t1778;
  double t1837;
  double t1838;
  double t1839;
  double t1840;
  double t1841;
  double t1842;
  double t1846;
  double t1870;
  double t1873;
  double t1874;
  double t1879;
  double t1880;
  double t1881;
  double t1868;
  double t1869;
  double t1836;
  double t1843;
  double t1844;
  double t1845;
  double t1847;
  double t1849;
  double t1899;
  double t1689;
  double t1705;
  double t1706;
  double t1707;
  double t1759;
  double t1768;
  double t1769;
  double t1780;
  double t1789;
  double t1793;
  double t1794;
  double t1801;
  double t1824;
  double t1826;
  double t1827;
  double t1829;
  double t1850;
  double t1875;
  double t1878;
  double t1924;
  double t1898;
  double t1901;
  double t1902;
  double t1917;
  double t1921;
  double t1922;
  double t1923;
  double t1925;
  double t1926;
  double t1959;
  double t1960;
  double t1976;
  double t1980;
  double t1984;
  double t1966;
  double t1969;
  double t1970;
  double t1889;
  double t1991;
  double t1992;
  double t1993;
  double t1779;
  double t1795;
  double t1796;
  double t1945;
  double t1949;
  double t1952;
  double t1830;
  double t1831;
  double t1832;
  double t1833;
  double t1834;
  double t1835;
  double t1985;
  double t1986;
  double t1987;
  double t2031;
  double t2032;
  double t2033;
  double t1990;
  double t2028;
  double t2029;
  double t1994;
  double t1996;
  double t1997;
  double t1998;
  double t2001;
  double t2002;
  double t2003;
  double t2004;
  double t2005;
  double t2006;
  double t2007;
  double t2008;
  double t1956;
  double t1957;
  double t1894;
  double t1895;
  double t1927;
  double t1928;
  double t2045;
  double t2046;
  double t2047;
  double t2048;
  double t2050;
  double t2055;
  double t2058;
  double t1961;
  double t1962;
  double t1988;
  double t1995;
  double t1971;
  double t1972;
  double t2021;
  double t2022;
  double t2023;
  double t1953;
  double t1954;
  double t2011;
  double t2012;
  double t2016;
  double t2049;
  double t2051;
  double t2052;
  double t2053;
  double t2078;
  double t2030;
  double t2034;
  double t2035;
  double t2037;
  double t2038;
  double t2039;
  double t2081;
  double t2082;
  double t2083;
  double t2084;
  double t2103;
  double t2104;
  double t2105;
  double t2095;
  double t2096;
  double t2097;
  double t2099;
  double t2100;
  double t2101;
  double t2116;
  double t2117;
  double t2118;
  double t2121;
  double t2122;
  double t2123;
  double t2125;
  double t2126;
  double t2127;
  double t2098;
  double t2106;
  double t2110;
  double t2165;
  double t2166;
  double t2168;
  double t2169;
  double t2113;
  double t2139;
  double t2140;
  double t2141;
  double t2143;
  double t2144;
  double t2147;
  double t2148;
  double t2149;
  double t2182;
  double t2183;
  double t2184;
  double t2178;
  double t2179;
  double t2180;
  double t2151;
  double t2152;
  double t2213;
  double t2214;
  double t2215;
  double t2218;
  double t2219;
  double t2220;
  t1714 = Cos(var1[6]);
  t1744 = Sin(var1[6]);
  t1688 = Sin(var1[2]);
  t1704 = Sin(var1[4]);
  t1678 = Cos(var1[4]);
  t1703 = Cos(var1[2]);
  t1717 = -1.*t1714;
  t1723 = 1. + t1717;
  t1731 = -0.4*t1723;
  t1735 = -0.51*t1714;
  t1736 = t1731 + t1735;
  t1773 = -1.*t1714*t1704;
  t1777 = -1.*t1678*t1744;
  t1778 = t1773 + t1777;
  t1837 = Cos(var1[8]);
  t1838 = -1.*t1837;
  t1839 = 1. + t1838;
  t1840 = -0.8*t1839;
  t1841 = -0.8*t1837;
  t1842 = t1840 + t1841;
  t1846 = Sin(var1[8]);
  t1870 = t1714*t1837;
  t1873 = -1.*t1744*t1846;
  t1874 = t1870 + t1873;
  t1879 = -1.*t1837*t1744;
  t1880 = -1.*t1714*t1846;
  t1881 = t1879 + t1880;
  t1868 = t1714*t1842;
  t1869 = t1731 + t1868;
  t1836 = 0.4*t1744;
  t1843 = t1842*t1744;
  t1844 = t1836 + t1843;
  t1845 = t1837*t1744;
  t1847 = t1714*t1846;
  t1849 = t1845 + t1847;
  t1899 = -1.*t1704*t1874;
  t1689 = -1.*t1678*t1688;
  t1705 = -1.*t1703*t1704;
  t1706 = t1689 + t1705;
  t1707 = -0.748*t1706;
  t1759 = t1736*t1744;
  t1768 = 0.11*t1714*t1744;
  t1769 = t1759 + t1768;
  t1780 = t1678*t1714;
  t1789 = -1.*t1704*t1744;
  t1793 = t1780 + t1789;
  t1794 = t1703*t1793;
  t1801 = t1736*t1714;
  t1824 = Power(t1744,2);
  t1826 = -0.11*t1824;
  t1827 = t1801 + t1826;
  t1829 = t1703*t1778;
  t1850 = t1844*t1849;
  t1875 = t1869*t1874;
  t1878 = t1850 + t1875;
  t1924 = t1678*t1874;
  t1898 = t1678*t1881;
  t1901 = t1898 + t1899;
  t1902 = t1703*t1901;
  t1917 = -1.*t1869*t1881;
  t1921 = -1.*t1844*t1874;
  t1922 = t1917 + t1921;
  t1923 = -1.*t1704*t1849;
  t1925 = t1923 + t1924;
  t1926 = t1703*t1925;
  t1959 = t1704*t1881;
  t1960 = t1959 + t1924;
  t1976 = t1703*t1960;
  t1980 = t1688*t1901;
  t1984 = t1976 + t1980;
  t1966 = t1678*t1849;
  t1969 = t1704*t1874;
  t1970 = t1966 + t1969;
  t1889 = -1.*t1704*t1881;
  t1991 = -1.*t1714*t1837;
  t1992 = t1744*t1846;
  t1993 = t1991 + t1992;
  t1779 = t1688*t1778;
  t1795 = t1779 + t1794;
  t1796 = 6.8*t1769*t1795;
  t1945 = t1714*t1704;
  t1949 = t1678*t1744;
  t1952 = t1945 + t1949;
  t1830 = -1.*t1678*t1714;
  t1831 = t1704*t1744;
  t1832 = t1830 + t1831;
  t1833 = t1688*t1832;
  t1834 = t1829 + t1833;
  t1835 = 6.8*t1827*t1834;
  t1985 = 0.3*t1922*t1984;
  t1986 = t1869*t1881;
  t1987 = t1844*t1874;
  t2031 = -0.4*t1744;
  t2032 = -1.*t1842*t1744;
  t2033 = t2031 + t2032;
  t1990 = -1.*t1844*t1881;
  t2028 = 0.4*t1714;
  t2029 = t2028 + t1868;
  t1994 = -1.*t1869*t1993;
  t1996 = t1688*t1925;
  t1997 = t1703*t1970;
  t1998 = t1996 + t1997;
  t2001 = t1678*t1993;
  t2002 = t1889 + t2001;
  t2003 = t1688*t2002;
  t2004 = t1704*t1993;
  t2005 = t1898 + t2004;
  t2006 = t1703*t2005;
  t2007 = t2003 + t2006;
  t2008 = 0.3*t1878*t2007;
  t1956 = -1.*t1688*t1793;
  t1957 = t1829 + t1956;
  t1894 = -1.*t1678*t1874;
  t1895 = t1889 + t1894;
  t1927 = -1.*t1678*t1849;
  t1928 = t1927 + t1899;
  t2045 = -1.*t1703*t1678;
  t2046 = t1688*t1704;
  t2047 = t2045 + t2046;
  t2048 = -0.748*t2047;
  t2050 = -1.*t1688*t1778;
  t2055 = -1.*t1688*t1901;
  t2058 = -1.*t1688*t1925;
  t1961 = -1.*t1688*t1960;
  t1962 = t1961 + t1902;
  t1988 = t1986 + t1987;
  t1995 = t1990 + t1994;
  t1971 = -1.*t1688*t1970;
  t1972 = t1926 + t1971;
  t2021 = Power(t1714,2);
  t2022 = 0.11*t2021;
  t2023 = t1801 + t2022;
  t1953 = -1.*t1688*t1952;
  t1954 = t1953 + t1794;
  t2011 = -1.*t1736*t1744;
  t2012 = -0.11*t1714*t1744;
  t2016 = t2011 + t2012;
  t2049 = 6.8*t1769*t1957;
  t2051 = t1703*t1832;
  t2052 = t2050 + t2051;
  t2053 = 6.8*t1827*t2052;
  t2078 = 0.3*t1922*t1962;
  t2030 = t2029*t1849;
  t2034 = t2033*t1874;
  t2035 = t1986 + t2030 + t2034 + t1987;
  t2037 = -1.*t2033*t1881;
  t2038 = -1.*t2029*t1874;
  t2039 = t2037 + t1990 + t2038 + t1994;
  t2081 = t1703*t2002;
  t2082 = -1.*t1688*t2005;
  t2083 = t2081 + t2082;
  t2084 = 0.3*t1878*t2083;
  t2103 = t1678*t1736;
  t2104 = 0.11*t1704*t1744;
  t2105 = t2103 + t2104;
  t2095 = t1736*t1704;
  t2096 = -0.11*t1678*t1744;
  t2097 = t2095 + t2096;
  t2099 = -1.*t1736*t1704;
  t2100 = 0.11*t1678*t1744;
  t2101 = t2099 + t2100;
  t2116 = t1678*t1869;
  t2117 = -1.*t1704*t1844;
  t2118 = t2116 + t2117;
  t2121 = -1.*t1869*t1704;
  t2122 = -1.*t1678*t1844;
  t2123 = t2121 + t2122;
  t2125 = t1869*t1704;
  t2126 = t1678*t1844;
  t2127 = t2125 + t2126;
  t2098 = t2097*t1793;
  t2106 = t1778*t2105;
  t2110 = -1.*t1778*t2097;
  t2165 = 0.11*t1714*t1704;
  t2166 = t2165 + t2100;
  t2168 = -0.11*t1678*t1714;
  t2169 = t2168 + t2104;
  t2113 = -1.*t2105*t1832;
  t2139 = -1.*t2127*t1960;
  t2140 = -1.*t2118*t1901;
  t2141 = t2139 + t2140;
  t2143 = t2127*t1960;
  t2144 = t2118*t1901;
  t2147 = t2118*t1925;
  t2148 = t2127*t1970;
  t2149 = t2147 + t2148;
  t2182 = t1678*t2029;
  t2183 = t1704*t2033;
  t2184 = t2182 + t2183;
  t2178 = -1.*t2029*t1704;
  t2179 = t1678*t2033;
  t2180 = t2178 + t2179;
  t2151 = -1.*t2118*t2002;
  t2152 = -1.*t2127*t2005;
  t2213 = 0.4*t1837;
  t2214 = t1842*t1837;
  t2215 = t2213 + t2214;
  t2218 = 0.4*t1846;
  t2219 = t1842*t1846;
  t2220 = t2218 + t2219;
  p_output1[0]=var2[4]*(-0.5*(t1707 + 6.8*t1769*t1954 + 6.8*t1827*t1957 + 0.3*t1878*t1962 + 0.3*t1922*t1972)*var2[2] - 0.5*(t1707 + t1796 + t1835 + 0.3*t1878*(t1688*t1895 + t1902) + 0.3*t1922*(t1926 + t1688*t1928))*var2[4] - 0.5*(t1796 + t1835 + t1985 + t2008 + 6.8*t1795*t2016 + 6.8*(t1688*t1793 + t1703*t1952)*t2023 + 0.3*t1984*t2035 + 0.3*t1998*t2039)*var2[6] - 0.5*(t1985 + 0.3*t1984*t1988 + 0.3*t1995*t1998 + t2008)*var2[8]);
  p_output1[1]=var2[4]*(-0.5*(6.8*t1769*(-1.*t1703*t1952 + t1956) + t2048 + 6.8*t1827*(-1.*t1703*t1793 + t2050) + 0.3*t1878*(-1.*t1703*t1960 + t2055) + 0.3*t1922*(-1.*t1703*t1970 + t2058))*var2[2] - 0.5*(t2048 + t2049 + t2053 + 0.3*t1878*(t1703*t1895 + t2055) + 0.3*t1922*(t1703*t1928 + t2058))*var2[4] - 0.5*(6.8*t1957*t2016 + 6.8*t1954*t2023 + 0.3*t1962*t2035 + 0.3*t1972*t2039 + t2049 + t2053 + t2078 + t2084)*var2[6] - 0.5*(0.3*t1962*t1988 + 0.3*t1972*t1995 + t2078 + t2084)*var2[8]);
  p_output1[2]=var2[4]*(-0.5*(6.8*t1827*(t2098 + t1793*t2101 + t1952*t2105 + t2106) + 6.8*t1769*(-1.*t1778*t2101 - 1.*t1793*t2105 + t2110 + t2113) + 0.3*t1922*(-1.*t1895*t2118 - 1.*t1960*t2118 - 1.*t1901*t2123 - 1.*t1901*t2127) + 0.3*t1878*(t1928*t2118 + t1970*t2118 + t1925*t2123 + t1925*t2127))*var2[4] - 0.5*(6.8*t2023*(-1.*t1793*t2097 - 1.*t1778*t2105) + 6.8*t2016*(t1952*t2097 + t1793*t2105) + 0.3*t2039*t2141 + 0.3*t2035*t2149 + 6.8*t1769*(t2110 + t2113 - 1.*t1778*t2166 - 1.*t1793*t2169) + 6.8*t1827*(t2098 + t2106 + t1793*t2166 + t1952*t2169) + 0.3*t1922*(t2151 + t2152 - 1.*t1901*t2180 - 1.*t1960*t2184) + 0.3*t1878*(t2143 + t2144 + t1925*t2180 + t1970*t2184))*var2[6] - 0.5*(0.3*t1995*t2141 + 0.3*t1878*(t2143 + t2144) + 0.3*t1988*t2149 + 0.3*t1922*(t2151 + t2152))*var2[8]);
  p_output1[3]=0;
  p_output1[4]=var2[4]*(-0.5*(13.6*t1827*t2016 + 13.6*t1769*t2023 + 0.6*t1878*t2035 + 0.6*t1922*t2039)*var2[6] - 0.5*(0.6*t1878*t1988 + 0.6*t1922*t1995)*var2[8]);
  p_output1[5]=0;
  p_output1[6]=var2[4]*(-0.5*(-0.748*t2016 + 0.3*t2035*t2215 + 0.3*t2039*t2220)*var2[6] - 0.5*(0.3*(-0.4*t1846 - 1.*t1842*t1846)*t1878 + 0.3*t1922*t2215 + 0.3*t1988*t2215 + 0.3*t1995*t2220)*var2[8]);
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

#include "Ce1_vec5_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec5_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
