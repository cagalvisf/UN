# include <iostream>
# include <cmath>
double df(double x, double h);
double cf(double x, double h);
double f(double x);

int main()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  
  double x, h,de,ef,ec;

  x=3.22;
  
  de= (-1)*std::sin(x);
  for (int ii=1;ii<=5;ii++)
    {
      
      
      h=std::pow(M_PI/12,ii);
      
      ef=std::fabs(df(x,h)-de)/de;
      ec=std::fabs(cf(x,h)-de)/de;
      
      std:: cout<<ii<<" "<<h<<" "<<df(x,h)<<" "<<cf(x,h)<<" "
		<<ef<<" "<<ec<<std::endl;
    }
  
  
  return 0;
}

double df(double x, double h)
{
  return (f(x+h)-f(x))/h;
}
double f(double x)
{
  return std::cos(x);
}
double cf(double x, double h)
{
  return (f(x+h/2)-f(x-h/2))/h;
}
