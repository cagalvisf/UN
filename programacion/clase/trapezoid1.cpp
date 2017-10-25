#include<iostream>
#include<cmath>
#include<vector>

using fptr=double(double);

double trapezoid_ir(const std::vector<double> &x,const std::vector<double> &fx);
double trapezoid_re(const double &a,const double &b,const int &N, fptr func);
double trapezoid_richardson(const double &a,const double &b,const int &N, fptr func);

int main()
{

  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
 
  const int N=10;
  double a,b,h;
  a=0;
  b=M_PI;
  h=(b-a)/N;
  std::vector<double> x(N), fx(N);
  for (int ii=0;ii<N;ii++)
    {
      x[ii]=a+ii*h;
      fx[ii]=std::sin(x[ii]);
      
    }
  std::cout<<"trapezoide regular "<<trapezoid_re(a,b,N,std::sin)<<std::endl;
  std::cout<<"trapezoide irregular "<<trapezoid_ir(x,fx)<<std::endl;
  std::cout<<"trapezoide richardson "<<trapezoid_richardson(a,b,N,std::sin)<<std::endl;
  return 0;
}
double trapezoid_ir(const std::vector<double> &x,const std::vector<double> &fx)
{
  double sum=0.0;
  const int  n=x.size();
  for (int ii=0;ii<n-1;ii++)
    {
      sum += (x[ii+1]-x[ii])*(fx[ii+1]+fx[ii]);
    }
  sum=sum*0.5;
  return sum;

}

double trapezoid_re(const double &a,const double &b,const int &N, fptr func)
{
 double h=(b-a)/N;
 double sum= 0.0,x;
 for (int ii=1;ii<N;ii++)
    {
      x=a+ii*h;
      sum+=func(x);

    }
 double integral=h*(0.5*(func(a)+func(b))+sum);
 return integral;
}

double trapezoid_richardson(const double &a,const double &b,const int &N, fptr func)
{
  double n=2*N;

  return (4*trapezoid_re(a,b,n,func)-trapezoid_re(a,b,N,func))/3;
 
}
