/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:21 GMT-04:00
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
  double t5385;
  double t5264;
  double t5271;
  double t5240;
  double t5467;
  double t5239;
  double t5395;
  double t5404;
  double t5419;
  double t5430;
  double t5431;
  double t5506;
  double t5507;
  double t5510;
  double t5584;
  double t5585;
  double t5587;
  double t5589;
  double t5595;
  double t5596;
  double t5649;
  double t5655;
  double t5656;
  double t5657;
  double t5663;
  double t5665;
  double t5671;
  double t5653;
  double t5654;
  double t5583;
  double t5605;
  double t5606;
  double t5617;
  double t5650;
  double t5651;
  double t5708;
  double t5549;
  double t5556;
  double t5557;
  double t5558;
  double t5559;
  double t5563;
  double t5461;
  double t5471;
  double t5475;
  double t5479;
  double t5486;
  double t5487;
  double t5488;
  double t5566;
  double t5652;
  double t5658;
  double t5662;
  double t5686;
  double t5709;
  double t5715;
  double t5717;
  double t5718;
  double t5722;
  double t5723;
  double t5724;
  double t5725;
  double t5726;
  double t5735;
  double t5745;
  double t5746;
  double t5244;
  double t5276;
  double t5373;
  double t5381;
  double t5766;
  double t5769;
  double t5505;
  double t5719;
  double t5731;
  double t5758;
  double t5759;
  double t5760;
  double t5761;
  double t5763;
  double t5800;
  double t5803;
  double t5804;
  double t5808;
  double t5809;
  double t5810;
  double t5774;
  double t5777;
  double t5815;
  double t5817;
  double t5845;
  double t5846;
  double t5847;
  double t5837;
  double t5838;
  double t5839;
  double t5841;
  double t5842;
  double t5843;
  double t5858;
  double t5859;
  double t5860;
  double t5863;
  double t5864;
  double t5865;
  double t5867;
  double t5868;
  double t5869;
  double t5894;
  double t5895;
  double t5896;
  double t5891;
  double t5892;
  double t5883;
  double t5884;
  double t5885;
  double t5890;
  double t5893;
  double t5897;
  double t5898;
  double t5899;
  double t5904;
  double t5905;
  double t5906;
  double t5907;
  double t5908;
  double t5909;
  double t5910;
  double t5911;
  double t5823;
  double t5824;
  double t5825;
  double t5915;
  double t5916;
  double t5917;
  double t5826;
  double t5827;
  double t5828;
  double t5929;
  double t5930;
  double t5931;
  double t5762;
  double t5764;
  double t5799;
  double t5805;
  double t5806;
  double t5807;
  double t5773;
  double t5775;
  double t5778;
  double t5782;
  double t5938;
  double t5939;
  double t5941;
  double t5942;
  double t5840;
  double t5848;
  double t5852;
  double t5967;
  double t5968;
  double t5970;
  double t5971;
  double t5855;
  double t5989;
  double t5990;
  double t5991;
  double t5984;
  double t5985;
  double t5986;
  double t5887;
  double t5888;
  double t5889;
  double t5901;
  double t5902;
  double t5903;
  double t6014;
  double t6016;
  double t5932;
  double t5934;
  double t5935;
  double t5936;
  double t5940;
  double t5943;
  double t5944;
  double t5945;
  double t5950;
  double t5953;
  double t5954;
  double t5955;
  double t5956;
  double t5979;
  double t5980;
  double t5981;
  double t5983;
  double t5988;
  double t5995;
  double t5996;
  double t5997;
  double t6001;
  double t6002;
  t5385 = Cos(var1[6]);
  t5264 = Sin(var1[2]);
  t5271 = Sin(var1[4]);
  t5240 = Cos(var1[4]);
  t5467 = Sin(var1[6]);
  t5239 = Cos(var1[2]);
  t5395 = -1.*t5385;
  t5404 = 1. + t5395;
  t5419 = -0.4*t5404;
  t5430 = -0.51*t5385;
  t5431 = t5419 + t5430;
  t5506 = t5240*t5385;
  t5507 = -1.*t5271*t5467;
  t5510 = t5506 + t5507;
  t5584 = Cos(var1[8]);
  t5585 = -1.*t5584;
  t5587 = 1. + t5585;
  t5589 = -0.8*t5587;
  t5595 = -0.8*t5584;
  t5596 = t5589 + t5595;
  t5649 = Sin(var1[8]);
  t5655 = t5385*t5584;
  t5656 = -1.*t5467*t5649;
  t5657 = t5655 + t5656;
  t5663 = -1.*t5584*t5467;
  t5665 = -1.*t5385*t5649;
  t5671 = t5663 + t5665;
  t5653 = t5385*t5596;
  t5654 = t5419 + t5653;
  t5583 = 0.4*t5467;
  t5605 = t5596*t5467;
  t5606 = t5583 + t5605;
  t5617 = t5584*t5467;
  t5650 = t5385*t5649;
  t5651 = t5617 + t5650;
  t5708 = t5240*t5657;
  t5549 = t5431*t5467;
  t5556 = 0.11*t5385*t5467;
  t5557 = t5549 + t5556;
  t5558 = t5385*t5271;
  t5559 = t5240*t5467;
  t5563 = t5558 + t5559;
  t5461 = t5431*t5385;
  t5471 = Power(t5467,2);
  t5475 = -0.11*t5471;
  t5479 = t5461 + t5475;
  t5486 = -1.*t5385*t5271;
  t5487 = -1.*t5240*t5467;
  t5488 = t5486 + t5487;
  t5566 = -1.*t5264*t5510;
  t5652 = t5606*t5651;
  t5658 = t5654*t5657;
  t5662 = t5652 + t5658;
  t5686 = t5271*t5671;
  t5709 = t5686 + t5708;
  t5715 = t5240*t5671;
  t5717 = -1.*t5271*t5657;
  t5718 = t5715 + t5717;
  t5722 = -1.*t5654*t5671;
  t5723 = -1.*t5606*t5657;
  t5724 = t5722 + t5723;
  t5725 = -1.*t5271*t5651;
  t5726 = t5725 + t5708;
  t5735 = t5240*t5651;
  t5745 = t5271*t5657;
  t5746 = t5735 + t5745;
  t5244 = -1.*t5239*t5240;
  t5276 = t5264*t5271;
  t5373 = t5244 + t5276;
  t5381 = 0.748*t5373;
  t5766 = t5239*t5488;
  t5769 = t5766 + t5566;
  t5505 = -1.*t5264*t5488;
  t5719 = -1.*t5264*t5718;
  t5731 = -1.*t5264*t5726;
  t5758 = -1.*t5240*t5264;
  t5759 = -1.*t5239*t5271;
  t5760 = t5758 + t5759;
  t5761 = 0.748*t5760;
  t5763 = t5239*t5510;
  t5800 = -1.*t5240*t5385;
  t5803 = t5271*t5467;
  t5804 = t5800 + t5803;
  t5808 = -1.*t5271*t5671;
  t5809 = -1.*t5240*t5657;
  t5810 = t5808 + t5809;
  t5774 = t5239*t5718;
  t5777 = t5239*t5726;
  t5815 = -1.*t5240*t5651;
  t5817 = t5815 + t5717;
  t5845 = t5240*t5431;
  t5846 = 0.11*t5271*t5467;
  t5847 = t5845 + t5846;
  t5837 = t5431*t5271;
  t5838 = -0.11*t5240*t5467;
  t5839 = t5837 + t5838;
  t5841 = -1.*t5431*t5271;
  t5842 = 0.11*t5240*t5467;
  t5843 = t5841 + t5842;
  t5858 = t5240*t5654;
  t5859 = -1.*t5271*t5606;
  t5860 = t5858 + t5859;
  t5863 = -1.*t5654*t5271;
  t5864 = -1.*t5240*t5606;
  t5865 = t5863 + t5864;
  t5867 = t5654*t5271;
  t5868 = t5240*t5606;
  t5869 = t5867 + t5868;
  t5894 = -0.4*t5467;
  t5895 = -1.*t5596*t5467;
  t5896 = t5894 + t5895;
  t5891 = 0.4*t5385;
  t5892 = t5891 + t5653;
  t5883 = -1.*t5431*t5467;
  t5884 = -0.11*t5385*t5467;
  t5885 = t5883 + t5884;
  t5890 = t5654*t5671;
  t5893 = t5892*t5651;
  t5897 = t5896*t5657;
  t5898 = t5606*t5657;
  t5899 = t5890 + t5893 + t5897 + t5898;
  t5904 = -1.*t5896*t5671;
  t5905 = -1.*t5606*t5671;
  t5906 = -1.*t5892*t5657;
  t5907 = -1.*t5385*t5584;
  t5908 = t5467*t5649;
  t5909 = t5907 + t5908;
  t5910 = -1.*t5654*t5909;
  t5911 = t5904 + t5905 + t5906 + t5910;
  t5823 = t5264*t5488;
  t5824 = t5823 + t5763;
  t5825 = -6.8*t5557*t5824;
  t5915 = Power(t5385,2);
  t5916 = 0.11*t5915;
  t5917 = t5461 + t5916;
  t5826 = t5264*t5804;
  t5827 = t5766 + t5826;
  t5828 = -6.8*t5479*t5827;
  t5929 = t5239*t5709;
  t5930 = t5264*t5718;
  t5931 = t5929 + t5930;
  t5762 = -1.*t5264*t5563;
  t5764 = t5762 + t5763;
  t5799 = -6.8*t5557*t5769;
  t5805 = t5239*t5804;
  t5806 = t5505 + t5805;
  t5807 = -6.8*t5479*t5806;
  t5773 = -1.*t5264*t5709;
  t5775 = t5773 + t5774;
  t5778 = -1.*t5264*t5746;
  t5782 = t5777 + t5778;
  t5938 = t5240*t5909;
  t5939 = t5808 + t5938;
  t5941 = t5271*t5909;
  t5942 = t5715 + t5941;
  t5840 = t5839*t5510;
  t5848 = t5488*t5847;
  t5852 = -1.*t5488*t5839;
  t5967 = 0.11*t5385*t5271;
  t5968 = t5967 + t5842;
  t5970 = -0.11*t5240*t5385;
  t5971 = t5970 + t5846;
  t5855 = -1.*t5847*t5804;
  t5989 = t5240*t5892;
  t5990 = t5271*t5896;
  t5991 = t5989 + t5990;
  t5984 = -1.*t5892*t5271;
  t5985 = t5240*t5896;
  t5986 = t5984 + t5985;
  t5887 = 0.4*t5584;
  t5888 = t5596*t5584;
  t5889 = t5887 + t5888;
  t5901 = 0.4*t5649;
  t5902 = t5596*t5649;
  t5903 = t5901 + t5902;
  t6014 = t5890 + t5898;
  t6016 = t5905 + t5910;
  t5932 = -0.3*t5724*t5931;
  t5934 = t5264*t5726;
  t5935 = t5239*t5746;
  t5936 = t5934 + t5935;
  t5940 = t5264*t5939;
  t5943 = t5239*t5942;
  t5944 = t5940 + t5943;
  t5945 = -0.3*t5662*t5944;
  t5950 = -0.3*t5724*t5775;
  t5953 = t5239*t5939;
  t5954 = -1.*t5264*t5942;
  t5955 = t5953 + t5954;
  t5956 = -0.3*t5662*t5955;
  t5979 = -1.*t5869*t5709;
  t5980 = -1.*t5860*t5718;
  t5981 = t5979 + t5980;
  t5983 = t5869*t5709;
  t5988 = t5860*t5718;
  t5995 = t5860*t5726;
  t5996 = t5869*t5746;
  t5997 = t5995 + t5996;
  t6001 = -1.*t5860*t5939;
  t6002 = -1.*t5869*t5942;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t5761 - 6.8*t5557*t5764 - 6.8*t5479*t5769 - 0.3*t5662*t5775 - 0.3*t5724*t5782)*var2[0] - 0.5*(t5381 - 6.8*t5479*(t5505 - 1.*t5239*t5510) - 6.8*t5557*(-1.*t5239*t5563 + t5566) - 0.3*t5662*(-1.*t5239*t5709 + t5719) - 0.3*t5724*(t5731 - 1.*t5239*t5746))*var2[1])*var2[4];
  p_output1[3]=0;
  p_output1[4]=(-0.5*(t5761 - 0.3*t5662*(t5774 + t5264*t5810) - 0.3*t5724*(t5777 + t5264*t5817) + t5825 + t5828)*var2[0] - 0.5*(t5381 + t5799 + t5807 - 0.3*t5662*(t5719 + t5239*t5810) - 0.3*t5724*(t5731 + t5239*t5817))*var2[1] - 0.5*(-6.8*t5479*(t5840 + t5510*t5843 + t5563*t5847 + t5848) - 6.8*t5557*(-1.*t5488*t5843 - 1.*t5510*t5847 + t5852 + t5855) - 0.3*t5724*(-1.*t5709*t5860 - 1.*t5810*t5860 - 1.*t5718*t5865 - 1.*t5718*t5869) - 0.3*t5662*(t5746*t5860 + t5817*t5860 + t5726*t5865 + t5726*t5869))*var2[2])*var2[4];
  p_output1[5]=0;
  p_output1[6]=var2[4]*(-0.5*(t5825 + t5828 - 6.8*t5824*t5885 - 6.8*(t5264*t5510 + t5239*t5563)*t5917 - 0.3*t5899*t5931 + t5932 - 0.3*t5911*t5936 + t5945)*var2[0] - 0.5*(t5799 + t5807 - 6.8*t5769*t5885 - 0.3*t5775*t5899 - 0.3*t5782*t5911 - 6.8*t5764*t5917 + t5950 + t5956)*var2[1] - 0.5*(-6.8*(t5563*t5839 + t5510*t5847)*t5885 - 6.8*(-1.*t5510*t5839 - 1.*t5488*t5847)*t5917 - 6.8*t5557*(t5852 + t5855 - 1.*t5488*t5968 - 1.*t5510*t5971) - 6.8*t5479*(t5840 + t5848 + t5510*t5968 + t5563*t5971) - 0.3*t5911*t5981 - 0.3*t5662*(t5983 + t5726*t5986 + t5988 + t5746*t5991) - 0.3*t5899*t5997 - 0.3*t5724*(-1.*t5718*t5986 - 1.*t5709*t5991 + t6001 + t6002))*var2[2] - 0.5*(-13.6*t5479*t5885 - 0.6*t5662*t5899 - 0.6*t5724*t5911 - 13.6*t5557*t5917)*var2[4] - 0.5*(0.748*t5885 - 0.3*t5889*t5899 - 0.3*t5903*t5911)*var2[6]);
  p_output1[7]=0;
  p_output1[8]=var2[4]*(-0.5*(t5932 + t5945 - 0.3*t5931*t6014 - 0.3*t5936*t6016)*var2[0] - 0.5*(t5950 + t5956 - 0.3*t5775*t6014 - 0.3*t5782*t6016)*var2[1] - 0.5*(-0.3*t5662*(t5983 + t5988) - 0.3*t5724*(t6001 + t6002) - 0.3*t5997*t6014 - 0.3*t5981*t6016)*var2[2] - 0.5*(-0.6*t5662*t6014 - 0.6*t5724*t6016)*var2[4] - 0.5*(-0.3*(-0.4*t5649 - 1.*t5596*t5649)*t5662 - 0.3*t5724*t5889 - 0.3*t5889*t6014 - 0.3*t5903*t6016)*var2[6]);
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

#include "Ce3_vec5_seven_link_walker.hh"

namespace SymFunction
{

void Ce3_vec5_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
