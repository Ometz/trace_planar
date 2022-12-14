/*
 * Automatically Generated from Mathematica.
 * Sun 4 Nov 2018 19:50:58 GMT-05:00
 */

#ifndef JJ_H_LEFT_STANCE_FOOT_FUNC_HH
#define JJ_H_LEFT_STANCE_FOOT_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void jj_H_left_stance_foot_func_raw(double *p_output1, const double *var1,const double *var2);

  inline void jj_H_left_stance_foot_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    jj_H_left_stance_foot_func_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JJ_H_LEFT_STANCE_FOOT_FUNC_HH
