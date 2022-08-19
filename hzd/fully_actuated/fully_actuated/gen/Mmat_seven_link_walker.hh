/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:11 GMT-04:00
 */

#ifndef MMAT_SEVEN_LINK_WALKER_HH
#define MMAT_SEVEN_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_seven_link_walker_raw(double *p_output1, const double *var1);

  inline void Mmat_seven_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 9);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_seven_link_walker_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_SEVEN_LINK_WALKER_HH
