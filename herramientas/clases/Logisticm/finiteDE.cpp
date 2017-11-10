#include<iostream>
#include<cmath>
#include<cstdlib>

//call: ./a.out  N R
int main(int argc, char **argv){

  const int N = std::atoi(argv[1]);
  const double R = std::atof(argv[2]);
  
  double x0 = 0.12;
  double xto = x0;
  
  for(int ii=0 ; ii < N+1; ii++){
    
    double xtn=R*xto*(1-xto);
    
    std::cout<<xto<<"\t"<<xtn<<std::endl;

    xto = xtn;
  }
  return 0;
}
