/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jul 2022 14:58:44 GMT-04:00
 */

#ifndef JDQ_AMWORLD_ABOUT_PA_FUNC_HH
#define JDQ_AMWORLD_ABOUT_PA_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jdq_AMworld_about_pA_func_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void Jdq_AMworld_about_pA_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 12, 1);
    assert_size_matrix(var2, 12, 1);
    assert_size_matrix(var3, 3, 1);
    assert_size_matrix(var4, 3, 12);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 12);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jdq_AMworld_about_pA_func_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JDQ_AMWORLD_ABOUT_PA_FUNC_HH
