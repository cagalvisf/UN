#include "underflow.h"

void underflow(void)
{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  double under = 1.0;
  int N=0;
  while( under > 0)
    {
      N++;
      under=under/2;
         
    }
 std::cout<<"underflow:\t "<<N-1<<std::endl;      
}
