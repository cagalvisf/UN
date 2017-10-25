#include <iostream>
#include <cmath>

double integral(double (*f)(double), double sup,double dx,double inf);

int main()

{
    std::cout.precision(16);std::cout.setf(std::ios::scientific);

    double dx=0.001;
    double sup=2*M_PI;
    double inf=0;

    std::cout<< integral(std::sin,sup,dx,inf)<<std::endl;
  
  return 0;
}

double integral(double (*f)(double), double sup,double dx,double inf)
{
  int ii=0;
  double result=0;
  while(inf+dx*ii<=sup)
    
    {
      result += (f(inf+(dx*ii))*dx);
      ii++; 
    }

  return result;

}

      
  
  


