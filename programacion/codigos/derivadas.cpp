
#include <iostream>
#include <cstdio>
#include <cmath>
/*
// DERIVADA HACIA ADELANTE

double f(double x);
double f_d(double x, double h);

int main (void)
{

  std::cout.precision(20);std::cout.setf(std::ios::scientific);
  double x,h;

  x=3.7;
  for (int ii = 1; ii<=20;ii++)
    {
      h=std::pow(10.0,-ii);

      std::cout<<h<<" "<<f_d(x,h)<<" "<<(2*std::cos(2*x))<<std::endl;
    }
  return 0;
}

double f(double x)
{
  return std::sin(2*x);
}


double f_d(double x, double h)
{
  return ((f(x+h)-f(x))/h);
}
*/



//DERIVADA CENTRAL

/*
double f(double x);
double c_d(double x, double h);

int main (void)
{

  std::cout.precision(20);std::cout.setf(std::ios::scientific);
  double x,h;

  x=3.7;
  for (int ii = 1; ii<=20;ii++)
    {
      h=std::pow(10.0,-ii);

      std::cout<<h<<" "<<c_d(x,h)<<" "<<(2*std::cos(2*x))<<std::endl;
    }
  return 0;
}

double f(double x)
{
  return std::sin(2*x);
}

double c_d(double x, double h)
{
  return ((f(x+h/2)-f(x-h/2))/h);
}
*/

//DERIVADA RICHARDSON


double f(double x);
double f_d(double x, double h);
double c_d(double x, double h);
double r_d(double x, double h);

int main (void)
{

  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  double x,h,de,df,dc,dr;



  x=3.7;
  de=(2*std::cos(2*x));
  
  for (int ii = 1; ii<= 10;ii++)
    {

      h=std::pow(10.0,-ii);
      df=f_d(x,h);
      dc=c_d(x,h);
      dr=r_d(x,h);
      std::cout<<h<<" "<<std::fabs(df-de)
	       <<" "<<std::fabs(dc-de)
	       <<" "<<std::fabs(dr-de)<<std::endl;
    }
  return 0;
}

double f(double x)
{
  return std::sin(2*x);
}

double c_d(double x, double h)
{
  return ((f(x+h/2)-f(x-h/2))/h);
}
double r_d(double x, double h)
{
  double f1, f2;
  f1=c_d(x,h);
  f2=c_d(x,h/2);
  
  return(4*f2-f1)/3.0;
}


double f_d(double x, double h)
{
  return ((f(x+h)-f(x))/h);
}
