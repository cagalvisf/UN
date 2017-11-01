#include<cmath>
#include<iostream>
#include<vector>

const double L = 1.479;
const double delta = 0.1;
const int N = 1 + int(L/delta);
const double xmax=0;
const double ymax=0;

typedef std::vector<double> Matrix;

void initial_conditions(Matrix & n);
int main(){
 
  Matrix array(N*N);

 

  return 0;
}

void initial_conditions(Matrix & n){
  
  const int size = std::sqrt(n.size());
  for (int ii=0;ii<N;ii++){
    for (int jj = 0; jj < N; jj++){
      n[ii*N + jj]=0.0;
    }
  }
}
