#include<iostream>
double sin(double & x);

int main(void)
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  
  double x = 0.1;
    std::cout<<sin(x)<<std::endl;
    std::cout<<"&x en main: "<<&x<<std::endl;
    
    return 0;
}

double sin(double & x)
{
  std::cout<<"&x en sin: "<<&x<<std::endl;
  double val=x-x*x*x/6;
  
  return val;
}
