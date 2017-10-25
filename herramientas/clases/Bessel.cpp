#include <iostream>
#include <cstdio>
#include <cmath>
#include <gsl/gsl_sf_bessel.h>



int main ()
{

  double x=0;
  double v=0.0;
  std::cout.precision(8);
  std::cout.setf(std::ios::scientific);

  for (int ii=0;ii<=500;ii++)
    {
      x=0.01*ii;
      double y=gsl_sf_bessel_Jn (v,x);
      std::cout<<x<<"\t"<<y<<std::endl;
    }

  
  return 0;
  
}
