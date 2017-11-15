#include<iostream>
#include<cmath>
#include<cstdlib>

const int NTRASIENT = 100;

//call: ./a.out  N R
int main(int argc, char **argv){

 
  const double RMIN = std::atof(argv[1]);
  const double RMAX = std::atof(argv[2]);
  const int  NR = std::atoi(argv[4]);
  const int NITER = NTRASIENT + std::atoi(argv[3]);
  const double DELTA = (RMAX-RMIN)/NR;
  
 
  
  for(int iR = 0; iR < NR+1 ; iR++){
    double x = 0.12;
    double R= RMIN+DELTA*iR;
    
    for(int ii = 1 ; ii < NTRASIENT ; ii++){
      x = R*x*(1-x);
   
    }
    for(int ii = NTRASIENT ; ii <= NITER ; ii++){
      x = R*x*(1-x);
      std::cout << R << "\t" << x << "\n";
    }
  }
  return 0;
}
