#include<iostream>
#include<cmath>

using fptr=double(double);

double simpson(const double a,const double b,const int N, fptr func);
double f(double x);

int main()
{

  double a=0.000000000001,b=1;
  int N=92000;
  std::cout<< simpson(a,b,N,f)<<std::endl;
  
    return 0;
}

double simpson(const double a,const double b,const int N,fptr func)
{

  double h=(b-a)/N;
  double sum1, sum2, integral;
  
  for(int ii=1;ii<=(N/2)-1;ii++)
    {
      sum1+=func(a+2*ii*h);
    }

  for(int ii=1;ii<=(N/2);ii++)
    {
      sum2+=func(a+(2*ii-1)*h);
    }
  integral=(h/3)*(func(a)+2*sum1+4*sum2+func(b));
  
  return integral;
    
}

double f(double x)
{
  return std::log(x)/std::sqrt(x);
}
