#include<iostream>
#include<cmath>

const double ALPHA=0.23232;

double f(double t, double x);
void euler(double &x,double h, double t);


int main()
{
  const  double x0=1.2345;
  const double h=0.1;
  const int N=100;
 

  double x=x0,t;

  for(int step=0;step<N;step++){
    t=0.0+step*h;
    std::cout<< t <<"  "<< x <<std::endl;

    euler(x,h,t);
  }
  
  

  
  
  return 0;
}

double f(double a, double x)
{  
  return -ALPHA*x;
}
void euler(double &x,double h, double t)
{
  x = x+h*f(t,x);
}
