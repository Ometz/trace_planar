/*
 * Automatically Generated from Mathematica.
 * Fri 25 Dec 2020 16:21:52 GMT-05:00
 */

#ifndef J_H_RIGHT_FOOT_STANCE_FUNC_HH
#define J_H_RIGHT_FOOT_STANCE_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void j_H_right_foot_stance_func_raw(double *p_output1, const double *var1);

  inline void j_H_right_foot_stance_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 9);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    j_H_right_foot_stance_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_H_RIGHT_FOOT_STANCE_FUNC_HH
