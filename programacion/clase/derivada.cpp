 # include <iostream>
#include <cstdio>
#include<fstream>
#include <cmath>

double f(double x);
double dfapr(double x, double h);

  int main(void)
{

  std::cout.precision(16);std::cout.setf(std::ios::scientific);
  std::ofstream fout("datos.txt");
  fout.open("datos.txt");

  
  double h,x,dx,dexact,d ;
  h=0.0001;
  dx=0.1;

  
  for (x=0;x <= 10 ;x=x+dx)
    {
     
      d=dfapr(x,h);
      dexact=2*std::cos(2*x);
      
      std::cout<<x<<" "<<d<<std::endl;
      

      fout<<x<<" "<<d<<std::endl;

    }

  fout.close();

   
  return 0;
}
double f(double x)
{
  return std::sin(2*x);
}
double dfapr(double x, double h)
{
  return (f(x+h)-f(x))/h;
}

