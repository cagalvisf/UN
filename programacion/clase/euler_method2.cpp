#include<iostream>
#include<cmath>
#include<vector>
#include<cstdleave>

const double OMEGA=0.23232;

double f(std::vector<double> x, double t,const int index);
void euler(std::vector<double> &x,double t, double h);


int main()
{
  const  double x0=1.2345;
  const double h=0.1;
  const int N=1000;

  std::vector<double>x{1.651,0.0};
  
  double t;

  for(int step=0;step<N;step++){
    t=0.0+step*h;
    std::cout<< t <<"  "<< x[0] <<"  "<<x[1]<<std::endl;
    
    euler(x,t,h);
  }
    
  return 0;
}

double f(std::vector<double> x, double t,const int index)
{  
  if (0==index)
    return x[1];
  else if (1==index)
    return OMEGA*OMEGA*x[0];
  else {
    std::cerr<<"Wrong index = "<<index<<std::endl;
    exit(1);
}
void euler(std::vector<double> &x,double t, double h)
{
  std::vector<double>xtmp=x;
  for(int ii=0;ii<x.size();ii++){
    
    x[ii] = x[ii]+h*f(xtmp,t,ii);
  }
}
