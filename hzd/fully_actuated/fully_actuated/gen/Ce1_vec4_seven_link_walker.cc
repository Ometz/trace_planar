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
  double t1242;
  double t1314;
  double t1070;
  double t1179;
  double t1032;
  double t1178;
  double t1281;
  double t1282;
  double t1284;
  double t1292;
  double t1313;
  double t1373;
  double t1377;
  double t1381;
  double t1588;
  double t1589;
  double t1598;
  double t1599;
  double t1600;
  double t1605;
  double t1630;
  double t1656;
  double t1657;
  double t1663;
  double t1671;
  double t1672;
  double t1673;
  double t1654;
  double t1655;
  double t1587;
  double t1620;
  double t1621;
  double t1622;
  double t1634;
  double t1649;
  double t1680;
  double t1177;
  double t1212;
  double t1213;
  double t1221;
  double t1315;
  double t1327;
  double t1342;
  double t1385;
  double t1400;
  double t1403;
  double t1454;
  double t1467;
  double t1530;
  double t1537;
  double t1538;
  double t1539;
  double t1653;
  double t1668;
  double t1670;
  double t1694;
  double t1679;
  double t1682;
  double t1687;
  double t1690;
  double t1691;
  double t1692;
  double t1693;
  double t1695;
  double t1696;
  double t1718;
  double t1719;
  double t1737;
  double t1738;
  double t1739;
  double t1724;
  double t1726;
  double t1727;
  double t1674;
  double t1747;
  double t1752;
  double t1753;
  double t1382;
  double t1461;
  double t1464;
  double t1708;
  double t1709;
  double t1711;
  double t1551;
  double t1566;
  double t1569;
  double t1570;
  double t1571;
  double t1586;
  double t1740;
  double t1741;
  double t1742;
  double t1784;
  double t1785;
  double t1786;
  double t1745;
  double t1781;
  double t1782;
  double t1754;
  double t1756;
  double t1757;
  double t1758;
  double t1760;
  double t1761;
  double t1762;
  double t1763;
  double t1764;
  double t1765;
  double t1766;
  double t1767;
  double t1715;
  double t1716;
  double t1676;
  double t1677;
  double t1701;
  double t1702;
  double t1805;
  double t1809;
  double t1813;
  double t1814;
  double t1818;
  double t1825;
  double t1828;
  double t1721;
  double t1722;
  double t1743;
  double t1755;
  double t1728;
  double t1729;
  double t1774;
  double t1775;
  double t1776;
  double t1712;
  double t1713;
  double t1770;
  double t1771;
  double t1772;
  double t1815;
  double t1819;
  double t1820;
  double t1823;
  double t1848;
  double t1783;
  double t1787;
  double t1788;
  double t1790;
  double t1791;
  double t1792;
  double t1851;
  double t1856;
  double t1860;
  double t1864;
  double t1890;
  double t1891;
  double t1892;
  double t1882;
  double t1883;
  double t1884;
  double t1886;
  double t1887;
  double t1888;
  double t1903;
  double t1904;
  double t1905;
  double t1911;
  double t1915;
  double t1916;
  double t1918;
  double t1919;
  double t1920;
  double t1885;
  double t1893;
  double t1897;
  double t1964;
  double t1965;
  double t1967;
  double t1968;
  double t1900;
  double t1932;
  double t1933;
  double t1934;
  double t1942;
  double t1943;
  double t1946;
  double t1947;
  double t1948;
  double t1981;
  double t1982;
  double t1983;
  double t1977;
  double t1978;
  double t1979;
  double t1950;
  double t1951;
  double t2013;
  double t2014;
  double t2015;
  double t2018;
  double t2019;
  double t2020;
  t1242 = Cos(var1[5]);
  t1314 = Sin(var1[5]);
  t1070 = Sin(var1[2]);
  t1179 = Sin(var1[3]);
  t1032 = Cos(var1[3]);
  t1178 = Cos(var1[2]);
  t1281 = -1.*t1242;
  t1282 = 1. + t1281;
  t1284 = -0.4*t1282;
  t1292 = -0.51*t1242;
  t1313 = t1284 + t1292;
  t1373 = -1.*t1242*t1179;
  t1377 = -1.*t1032*t1314;
  t1381 = t1373 + t1377;
  t1588 = Cos(var1[7]);
  t1589 = -1.*t1588;
  t1598 = 1. + t1589;
  t1599 = -0.8*t1598;
  t1600 = -0.8*t1588;
  t1605 = t1599 + t1600;
  t1630 = Sin(var1[7]);
  t1656 = t1242*t1588;
  t1657 = -1.*t1314*t1630;
  t1663 = t1656 + t1657;
  t1671 = -1.*t1588*t1314;
  t1672 = -1.*t1242*t1630;
  t1673 = t1671 + t1672;
  t1654 = t1242*t1605;
  t1655 = t1284 + t1654;
  t1587 = 0.4*t1314;
  t1620 = t1605*t1314;
  t1621 = t1587 + t1620;
  t1622 = t1588*t1314;
  t1634 = t1242*t1630;
  t1649 = t1622 + t1634;
  t1680 = -1.*t1179*t1663;
  t1177 = -1.*t1032*t1070;
  t1212 = -1.*t1178*t1179;
  t1213 = t1177 + t1212;
  t1221 = -0.748*t1213;
  t1315 = t1313*t1314;
  t1327 = 0.11*t1242*t1314;
  t1342 = t1315 + t1327;
  t1385 = t1032*t1242;
  t1400 = -1.*t1179*t1314;
  t1403 = t1385 + t1400;
  t1454 = t1178*t1403;
  t1467 = t1313*t1242;
  t1530 = Power(t1314,2);
  t1537 = -0.11*t1530;
  t1538 = t1467 + t1537;
  t1539 = t1178*t1381;
  t1653 = t1621*t1649;
  t1668 = t1655*t1663;
  t1670 = t1653 + t1668;
  t1694 = t1032*t1663;
  t1679 = t1032*t1673;
  t1682 = t1679 + t1680;
  t1687 = t1178*t1682;
  t1690 = -1.*t1655*t1673;
  t1691 = -1.*t1621*t1663;
  t1692 = t1690 + t1691;
  t1693 = -1.*t1179*t1649;
  t1695 = t1693 + t1694;
  t1696 = t1178*t1695;
  t1718 = t1179*t1673;
  t1719 = t1718 + t1694;
  t1737 = t1178*t1719;
  t1738 = t1070*t1682;
  t1739 = t1737 + t1738;
  t1724 = t1032*t1649;
  t1726 = t1179*t1663;
  t1727 = t1724 + t1726;
  t1674 = -1.*t1179*t1673;
  t1747 = -1.*t1242*t1588;
  t1752 = t1314*t1630;
  t1753 = t1747 + t1752;
  t1382 = t1070*t1381;
  t1461 = t1382 + t1454;
  t1464 = 6.8*t1342*t1461;
  t1708 = t1242*t1179;
  t1709 = t1032*t1314;
  t1711 = t1708 + t1709;
  t1551 = -1.*t1032*t1242;
  t1566 = t1179*t1314;
  t1569 = t1551 + t1566;
  t1570 = t1070*t1569;
  t1571 = t1539 + t1570;
  t1586 = 6.8*t1538*t1571;
  t1740 = 0.3*t1692*t1739;
  t1741 = t1655*t1673;
  t1742 = t1621*t1663;
  t1784 = -0.4*t1314;
  t1785 = -1.*t1605*t1314;
  t1786 = t1784 + t1785;
  t1745 = -1.*t1621*t1673;
  t1781 = 0.4*t1242;
  t1782 = t1781 + t1654;
  t1754 = -1.*t1655*t1753;
  t1756 = t1070*t1695;
  t1757 = t1178*t1727;
  t1758 = t1756 + t1757;
  t1760 = t1032*t1753;
  t1761 = t1674 + t1760;
  t1762 = t1070*t1761;
  t1763 = t1179*t1753;
  t1764 = t1679 + t1763;
  t1765 = t1178*t1764;
  t1766 = t1762 + t1765;
  t1767 = 0.3*t1670*t1766;
  t1715 = -1.*t1070*t1403;
  t1716 = t1539 + t1715;
  t1676 = -1.*t1032*t1663;
  t1677 = t1674 + t1676;
  t1701 = -1.*t1032*t1649;
  t1702 = t1701 + t1680;
  t1805 = -1.*t1178*t1032;
  t1809 = t1070*t1179;
  t1813 = t1805 + t1809;
  t1814 = -0.748*t1813;
  t1818 = -1.*t1070*t1381;
  t1825 = -1.*t1070*t1682;
  t1828 = -1.*t1070*t1695;
  t1721 = -1.*t1070*t1719;
  t1722 = t1721 + t1687;
  t1743 = t1741 + t1742;
  t1755 = t1745 + t1754;
  t1728 = -1.*t1070*t1727;
  t1729 = t1696 + t1728;
  t1774 = Power(t1242,2);
  t1775 = 0.11*t1774;
  t1776 = t1467 + t1775;
  t1712 = -1.*t1070*t1711;
  t1713 = t1712 + t1454;
  t1770 = -1.*t1313*t1314;
  t1771 = -0.11*t1242*t1314;
  t1772 = t1770 + t1771;
  t1815 = 6.8*t1342*t1716;
  t1819 = t1178*t1569;
  t1820 = t1818 + t1819;
  t1823 = 6.8*t1538*t1820;
  t1848 = 0.3*t1692*t1722;
  t1783 = t1782*t1649;
  t1787 = t1786*t1663;
  t1788 = t1741 + t1783 + t1787 + t1742;
  t1790 = -1.*t1786*t1673;
  t1791 = -1.*t1782*t1663;
  t1792 = t1790 + t1745 + t1791 + t1754;
  t1851 = t1178*t1761;
  t1856 = -1.*t1070*t1764;
  t1860 = t1851 + t1856;
  t1864 = 0.3*t1670*t1860;
  t1890 = t1032*t1313;
  t1891 = 0.11*t1179*t1314;
  t1892 = t1890 + t1891;
  t1882 = t1313*t1179;
  t1883 = -0.11*t1032*t1314;
  t1884 = t1882 + t1883;
  t1886 = -1.*t1313*t1179;
  t1887 = 0.11*t1032*t1314;
  t1888 = t1886 + t1887;
  t1903 = t1032*t1655;
  t1904 = -1.*t1179*t1621;
  t1905 = t1903 + t1904;
  t1911 = -1.*t1655*t1179;
  t1915 = -1.*t1032*t1621;
  t1916 = t1911 + t1915;
  t1918 = t1655*t1179;
  t1919 = t1032*t1621;
  t1920 = t1918 + t1919;
  t1885 = t1884*t1403;
  t1893 = t1381*t1892;
  t1897 = -1.*t1381*t1884;
  t1964 = 0.11*t1242*t1179;
  t1965 = t1964 + t1887;
  t1967 = -0.11*t1032*t1242;
  t1968 = t1967 + t1891;
  t1900 = -1.*t1892*t1569;
  t1932 = -1.*t1920*t1719;
  t1933 = -1.*t1905*t1682;
  t1934 = t1932 + t1933;
  t1942 = t1920*t1719;
  t1943 = t1905*t1682;
  t1946 = t1905*t1695;
  t1947 = t1920*t1727;
  t1948 = t1946 + t1947;
  t1981 = t1032*t1782;
  t1982 = t1179*t1786;
  t1983 = t1981 + t1982;
  t1977 = -1.*t1782*t1179;
  t1978 = t1032*t1786;
  t1979 = t1977 + t1978;
  t1950 = -1.*t1905*t1761;
  t1951 = -1.*t1920*t1764;
  t2013 = 0.4*t1588;
  t2014 = t1605*t1588;
  t2015 = t2013 + t2014;
  t2018 = 0.4*t1630;
  t2019 = t1605*t1630;
  t2020 = t2018 + t2019;
  p_output1[0]=var2[3]*(-0.5*(t1221 + 6.8*t1342*t1713 + 6.8*t1538*t1716 + 0.3*t1670*t1722 + 0.3*t1692*t1729)*var2[2] - 0.5*(t1221 + t1464 + t1586 + 0.3*t1670*(t1070*t1677 + t1687) + 0.3*t1692*(t1696 + t1070*t1702))*var2[3] - 0.5*(t1464 + t1586 + t1740 + t1767 + 6.8*t1461*t1772 + 6.8*(t1070*t1403 + t1178*t1711)*t1776 + 0.3*t1739*t1788 + 0.3*t1758*t1792)*var2[5] - 0.5*(t1740 + 0.3*t1739*t1743 + 0.3*t1755*t1758 + t1767)*var2[7]);
  p_output1[1]=var2[3]*(-0.5*(6.8*t1342*(-1.*t1178*t1711 + t1715) + t1814 + 6.8*t1538*(-1.*t1178*t1403 + t1818) + 0.3*t1670*(-1.*t1178*t1719 + t1825) + 0.3*t1692*(-1.*t1178*t1727 + t1828))*var2[2] - 0.5*(t1814 + t1815 + t1823 + 0.3*t1670*(t1178*t1677 + t1825) + 0.3*t1692*(t1178*t1702 + t1828))*var2[3] - 0.5*(6.8*t1716*t1772 + 6.8*t1713*t1776 + 0.3*t1722*t1788 + 0.3*t1729*t1792 + t1815 + t1823 + t1848 + t1864)*var2[5] - 0.5*(0.3*t1722*t1743 + 0.3*t1729*t1755 + t1848 + t1864)*var2[7]);
  p_output1[2]=var2[3]*(-0.5*(6.8*t1538*(t1885 + t1403*t1888 + t1711*t1892 + t1893) + 6.8*t1342*(-1.*t1381*t1888 - 1.*t1403*t1892 + t1897 + t1900) + 0.3*t1692*(-1.*t1677*t1905 - 1.*t1719*t1905 - 1.*t1682*t1916 - 1.*t1682*t1920) + 0.3*t1670*(t1702*t1905 + t1727*t1905 + t1695*t1916 + t1695*t1920))*var2[3] - 0.5*(6.8*t1776*(-1.*t1403*t1884 - 1.*t1381*t1892) + 6.8*t1772*(t1711*t1884 + t1403*t1892) + 0.3*t1792*t1934 + 0.3*t1788*t1948 + 6.8*t1342*(t1897 + t1900 - 1.*t1381*t1965 - 1.*t1403*t1968) + 6.8*t1538*(t1885 + t1893 + t1403*t1965 + t1711*t1968) + 0.3*t1692*(t1950 + t1951 - 1.*t1682*t1979 - 1.*t1719*t1983) + 0.3*t1670*(t1942 + t1943 + t1695*t1979 + t1727*t1983))*var2[5] - 0.5*(0.3*t1755*t1934 + 0.3*t1670*(t1942 + t1943) + 0.3*t1743*t1948 + 0.3*t1692*(t1950 + t1951))*var2[7]);
  p_output1[3]=var2[3]*(-0.5*(13.6*t1538*t1772 + 13.6*t1342*t1776 + 0.6*t1670*t1788 + 0.6*t1692*t1792)*var2[5] - 0.5*(0.6*t1670*t1743 + 0.6*t1692*t1755)*var2[7]);
  p_output1[4]=0;
  p_output1[5]=var2[3]*(-0.5*(-0.748*t1772 + 0.3*t1788*t2015 + 0.3*t1792*t2020)*var2[5] - 0.5*(0.3*(-0.4*t1630 - 1.*t1605*t1630)*t1670 + 0.3*t1692*t2015 + 0.3*t1743*t2015 + 0.3*t1755*t2020)*var2[7]);
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

#include "Ce1_vec4_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec4_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
