//implementacion del metodo de euler para resolver el sistema de ecuaciones
#include<iostream>
#include<cmath>
#include<vector>

//declaracion de constantes
const double e=0.6;//excentricidad

//declaracion de funciones
void Stormer_Verlet(std::vector <long double> &x, double &h);
double f(const std::vector <long double> &x, const int &index);

int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double h;
  h=0.0005;
  std::vector<long double> x{1-e,0.0,0.0,std::sqrt((1+e)/(1-e))};
  /*
    x[0] posicion en x
    x[1] velocidad en x
    x[2] posicion en y
    x[3] velocidad en y
   */
  for(int ii=0; ii<=30000; ++ii)
    {
      std::cout<<h*ii<<"\t"<<x[0]<<"\t"<<x[1]<<"\t"<<x[2]<<"\t"<<x[3]<<"\t"<<(0.5*(x[1]*x[1]+x[3]*x[3])-1/std::sqrt(x[0]*x[0]+x[2]*x[2]))<<"\t"<<(x[0]*x[3]-x[2]*x[1])<<std::endl;
      Stormer_Verlet(x,h);
    }
  return 0;
}

double f(const std::vector <long double> &x, const int &index)
{
  if(index==0)
    {
      double r=std::sqrt(x[0]*x[0]+x[2]*x[2]);
      return -x[0]/std::pow(r,3);
    }
  else if(index==1)
    {
      double r=std::sqrt(x[0]*x[0]+x[2]*x[2]);
      return -x[2]/std::pow(r,3);
    }
  else
    {
      return 0;
    }
}

void Stormer_Verlet(std::vector <long double> &x, double &h)
{
  int n=x.size();
  std::vector <long double> tmp=x;
  for(int ii=0; ii<n/2;ii++)
    {
      x[2*ii]+=h*(x[ii+1]+h*f(tmp,ii)/2);
    }
  for(int ii=0;ii<n/2; ii++)
    {
      x[2*ii+1]+=h*(f(tmp,ii)+f(x,ii))/2;
    }
}
