#include <iostream>
#include <cstdlib>
#include <cmath>

void code_to_be_measured(const double * M, double * MT,int N);

int main(int argc, char **argv)
{
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  int N=0;

  std::cout << "# N\tProc. time\tMFLOPS\n"; 
    N=3;

    double *A = new double [N*N],
      *B = new double [N*N];
   
    // initialize matrices
    for (int k =0; k < N; ++k) {
      for (int jj =0; jj < N; ++jj) {
	A[k*N + jj] = k + jj + 1;
	B[k*N + jj] = 2.0*jj+1;
      }
    }
    
  
    code_to_be_measured(A, B, N);
   
  
    delete [] A;
    delete [] B;
  
  return 0;
}
void code_to_be_measured(const double * A, double * B,int N)
{
  double *C = new double [N*N];
    
  for (int ii = 0; ii < N; ++ii) {
    for (int jj = 0; jj < N; ++jj) {
      for(int k = 0; k < N ; ++k){
	C[ii*N +jj] = A[ii*N+k]*B[k*N+jj] ; }}}
  std::cout<<C[1]<<" "<<C[2]<<std::endl;
  
  delete [] C;
}

