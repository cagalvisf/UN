#include "overflow.h"
#include "underflow.h"


int main(void)
{
  std::cout.precision(15);std::cout.setf(std::ios::scientific);
 
  overflow();
  underflow();
  
  return 0;
  
}
