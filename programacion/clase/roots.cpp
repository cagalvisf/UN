# include<iostream>
# include<cmath>

double f(double x);
double raiz(double x,int Nmax, double eps);
  

int main ()
{
  std::cout.precision(16);
  
  double eps, x, xv;
  int Nmax;

  eps=1.0e-9;
  x=0;
  Nmax=100;
  
  raiz(x,Nmax,eps);
  
  
  return 0;
}

double f(double x)
{
  return exp(-x)-x;
}

double raiz(double x,int Nmax,double eps)
{
  double del, xv;
  
  std::cout.precision(16);

  
    
  for(int ii=0; ii <= Nmax ;  ii++)
    {
      xv=x;
      x=exp(-xv);
      
      del=std::fabs(x-xv);

      std::cout<<ii<<"\t"<<x<<"\t"<<
	       del<<"\t"<<f(x)<<std::endl;
      if (std::fabs(f(x)) <= eps)
	{
	  break;
	}
    }
}

