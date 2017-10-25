#include<iostream>
#include<cmath>

int main()
{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  double under =1.0;
  double over=1;
  int N=0,M=0;

 while( under > 0)
   {
      N++;
      under=under/2;
      
      std::cout<<N<<" "<<under<<std::endl;      
    }
 while(over<std::pow(2,10000000000))
   {
     M++;
     over=over*2;
     
   }
 std::cout<<" under: "<<N-1<<"\n over: "<<M-1<<std::endl;
  
  return 0;
}
