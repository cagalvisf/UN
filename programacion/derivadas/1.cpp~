# include <iostream>
# include <cmath>
double df(double x, double h);
double f(double x);

int main()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  
  double x, h,de;

  x=3.22;
  
  de= (std::exp(x)*std::cos(x)+std::sin(x)*std::exp(x));
  for (int ii=1;ii<=10;ii++)
    {
      
      
      h=std::pow(10.0,-ii);
      
      double error=std::fabs((df(x,h)-de)/de);
      
      std:: cout<<ii<<" "<<h<<" "<<df(x,h)<<" "<<de<<" "<<error<<std::endl;
    }
  
  
  return 0;
}

double df(double x, double h)
{
  return (f(x+3*h)-f(x-h))/(4*h);
}
double f(double x)
{
  return std::sin(x)*std::exp(x);
}
