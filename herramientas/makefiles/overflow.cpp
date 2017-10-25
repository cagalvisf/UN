#include "overflow.h"

void overflow (void)


{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
  double over=1;
  int M=0;
  while(std::isinf(over)== 0 )
    {
      M++;
      over=over*2;    
    }
  std::cout<<"overflow\t"<<M-1<<std::endl;
  
}
