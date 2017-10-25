# include<iostream>
# include<cmath>

double f(double x);

int main(void)
{
  double eps, nmax,r,d,u;

  
  eps = 0.001;
  nmax = 20;
  d = 12.0;
  u = 15.0;
  
  for (int ii = 0 ; ii <=nmax ;ii++)
    {
      r=0.5*(u+d);
      
      std::cout<<ii<<"\t"<<d<<"\t"<<u<<"\t"<<r<<"\t"<<f(r)<<std::endl;
      
      if (std::abs(f(r))<= eps)
	{
	  break;
	}
      else
	{
	  if ((f(r))*(f(d))<0)
	    {
	      u=r;
	    }
	  else
	    {
	      d=r;
	    }
	}
    }

  
  return 0;

}
double f(double x)
{
  return ((9.81*68.1/x)*(1-std::exp(-x*10/68.1)))-40;
}
