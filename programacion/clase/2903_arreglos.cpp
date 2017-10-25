# include <iostream>
# include <array>
# include <cmath>

int main(void)
{
  const int n=10;
  std::array<double, n> x {1.22, 2.1, 3.12, 1.42, 12 , 2, 13.2
      ,1.3232,4.12,12.3} ;
  
  double l,t, prom,de;
  l=0;
  t=0;
  de=0;
  prom=0;
  for (int ii=0;ii<n;ii++)
    {
      l += x[ii];
    }
  
  prom=l/(n);
  
  for(int jj=0 ; jj < n ; jj++)
    {
      t += (x[jj] - prom)*(x[jj] - prom);
      
    }
  de=std::sqrt(t/(n-1));
  std::cout<< l <<std::endl;
  std::cout<< de <<std::endl;
  std::cout<< prom  <<std::endl;

  
  return 0;
}
