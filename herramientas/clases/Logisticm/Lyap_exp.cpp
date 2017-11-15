#include <iostream>
#include <cmath>
#include <cstdlib>

double f(double x, double R);
double df(double x, double R);

//arguments  NTRASIENT, NITER, Rmin, Rmax, NR
int main(int argc, char **argv){
  const int NTRASIENT = std::atoi(argv[1]);
  const int NITER = std::atoi(argv[2]);
  const double RMIN = std::atoi(argv[3]);
  const double RMAX = std::atoi(argv[4]);
  const int NR = std::atoi(argv[5]);
  const double DELTA = (RMAX-RMIN)/NR;

 for (int iR = 0 ; iR < NR ; iR++){
    double x = 1.0;
    double sum = x;
    double R = RMIN + DELTA*iR;
     for (int iter = 0 ; iter < NTRASIENT+NITER ; iter++){
       x= f(x,R);
       sum =sum+  std::log(std::fabs(df(x,R)));
  }
     std::cout << R << "\t"<< sum/(NTRASIENT+NITER) << "\n";
 }

  return 0;
}


double f(double x, double R){
  return R*x*(1-x);}
double df(double x, double R){
  return R-2*R*x;}
