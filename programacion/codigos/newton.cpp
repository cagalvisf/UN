# include <iostream>
#include <cmath>

double f(double x);
double df(double x);
double raiz(int Nmax,double x0);

int main()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  int Nmax=80;
  double x=1.0e-1;
  
  raiz(Nmax,x);
  
  return 0;
}

double f(double x)
{
  return ((x*x)-1-(2*x*(1-(x*x)+x)*std::log(x)));
}

double df(double x)
{
  return ((2*x*x)-(std::log(x)*(2-(6*x*x)+4*x))-2+(2*x*x));
}

double raiz(int Nmax,double x0)
{
  std::cout.precision(16);
  double xv=0.1;
  
  for (int ii=0; ii <=Nmax ;  ii++)
    {
      x0=xv-(f(xv)/df(xv));
      std::cout<<ii<<"\t"<<xv<<"\t"<<x0<<"\t"<<f(x0)<<std::endl;
      xv=x0;
    }
}

      
