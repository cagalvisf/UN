#include<cmath>
#include<iostream>
#include<vector>

const double L = 1.479;
const double delta = 0.01;
const int N = 1 + int(L/delta);
const int steps = 400;

typedef std::vector<double> Matrix;

void print (const Matrix & m);
void boundary_conditions(Matrix & m);
//void charge_density(Matrix & m);
void initial_conditions(Matrix & m);
void plot_gnuplot(const Matrix & m);
void init_gnuplot(void);
void evolve(Matrix & m);

int main(){

  init_gnuplot();
 
  Matrix array(N*N);
  
  initial_conditions(array);
  boundary_conditions (array);
  // charge_density(array);
  for(int ii = 0; ii<=steps; ii++){
    evolve(array);
     plot_gnuplot(array);
  }

  print(array);
 

  return 0;
}

void initial_conditions(Matrix & m){
  
  for (int ii=0;ii<N;ii++){
    for (int jj = 0; jj < N; jj++){
      m[ii*N + jj]= 1.0;
    }
  }
}
void boundary_conditions(Matrix & m){
  int ii = 0, jj = 0;

  
  ii = N-1;
  for (jj = 0; jj < N; ++jj)
    m[ii*N + jj]=0;

    jj = 0;
  for (ii = 1; ii < N-1; ++ii)
    m[ii*N + jj]=0;

    jj = N-1;
  for (ii = 1; ii < N-1 ; ++ii)
    m[ii*N + jj]=0;
  
  ii = 0;
  for (jj = 0; jj < N; ++jj)
    m[ii*N + jj]=100;
}
void evolve(Matrix & m){
 
  for (int ii=0;ii<N;ii++){
    for (int jj = 0; jj < N; jj++){
      if(ii == 0) continue;
      if(ii == N-1) continue;
      if(jj == 0) continue;
      if(jj == N-1) continue;
     // if (ii == N-7 && (2 <= jj < N-2)) continue;


      m[ii*N + jj]= (m[(ii + 1)*N + jj] +
		     m[(ii - 1)*N + jj] +
		     m[ii*N + (jj + 1)] +
		     m[ii*N + (jj - 1)])/4.0;
    }
  }
}
void print (const Matrix & m){
  
  for (int ii=0;ii<N;ii++){
    for (int jj = 0; jj < N; jj++){
      std::cout << ii*delta << " "<< jj*delta <<" "<<m[ii*N + jj]<< "\n";
    }
    std::cout<< "\n";
  }
}
/*void charge_density(Matrix & m){
  int ii= 0, jj=0;
  ii = N-7;
  for (jj = 2; jj < N-2; ++jj)
    m[ii*N + jj]=42;

    }*/

void init_gnuplot(void)
{
  std::cout << "set contour " << std::endl;
  std::cout << "set terminal gif animate " << std::endl;
  std::cout << "set out 'anim.gif' " << std::endl;
}

void plot_gnuplot(const Matrix & m)
{
  std::cout << "splot '-' w pm3d " << std::endl;
  print(m);
  std::cout << "e" << std::endl;  
}
