#include<iostream>
#include<cmath>
double fx(double x);
double serie(int n, double x);
int main()
{
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
  double xmin= -M_PI;
  double xmax= M_PI;
		      
  double x=0;
  int k =40;
  int n=50; //numero de terminos en la sumatoria
  for(int ii=0;ii<=k;ii++)
    {
      x=xmin+(ii*(xmax-xmin)/k);
      std::cout<<x<<" "<<fx(x)<<" "<<serie(n,x)<<std::endl;
    }
  
  
  return 0;
}

double fx(double x)
{
  return std::fabs(x);
}
double serie(int N, double x)
{
  double val=0;
  for (int ii=0;ii<=N;ii++)
    {
      val+=std::cos((2*ii+1)*x)/((2*ii+1)*(2*ii+1));
    }

  return  M_PI/2-4*val/M_PI;
}
