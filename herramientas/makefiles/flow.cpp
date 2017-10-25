#include<iostream>
#include<cmath>


typedef double REAL;


int main()
{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  REAL under =1.0;
  REAL over=1;
  int N=0,M=0,S=0;

 while( under > 0)
   {
      N++;
      under=under/2;
            
    }
 while(std::isinf(over)== 0 )
   {
     M++;
     over=over*2;
     
   }
  
  double one=0.0;
  double eps=1.0;
  
  while (one != 1)
    {
      S++;
      eps=eps/2.0;
      one=1+eps;
     }
  std::cout<<" eps:\t"<<eps<<std::endl;
 std::cout<<" under: "<<N-1<<"\n over: "<<M-1<<std::endl;
  
  return 0;
}
