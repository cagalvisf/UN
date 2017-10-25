#include<iostream>
#include<cmath>


double exponencial(double x,int N);
int main()
{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  double x=2;
  int N=100;
  for(int ii=0; ii<=N;ii++)
    {
      std::cout<<ii<<"\t "<<exponencial(x,ii)<<"\t"<<std::fabs(exponencial(x,ii)-std::exp(-x))/std::exp(-x)<<std::endl;
  
    }

  return 0;
}
double exponencial (double x,int N)
{
  double suma=1;
  double term=1;
  
  for(int ii=0;ii<=N;ii++)
    {
      term *= (-x)/(ii+1);
      suma+=term;
    }

  return suma;
}
