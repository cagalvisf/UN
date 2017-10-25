#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

int code_to_be_measured(const double * M, double * MT,int N);
int main(int argc, char **argv)
{
  int N = 0;
 
  for (int ii=1;ii<=14;ii++)
    {
      N=std::pow(2,ii);
      
      double *A = new double [N*N], *AT = new double [N*N];
      // initialize matrices
      for (int ii =1; ii < N; ++ii) {
	for (int jj =0; jj < N; ++jj) {
	  A[ii*N + jj] = ii + jj + 1;
	  AT[ii*N + jj] = 0.0;
	}
      }
       
      code_to_be_measured(A, AT, N);
     
      std::cout<<N<<" "<<std::endl;
	    
      delete [] A;
      delete [] AT;
    }
  return 0;
}
int code_to_be_measured(const double * M, double * MT,int N)
{
  // simple matrix transpose
  for (int ii = 0; ii < N; ++ii) {
    for (int jj = 0; jj < N; ++jj) {
      MT[ii*N +jj] = M[jj*N + ii];
    }
  }
  return 0;
}

