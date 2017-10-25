
#include <iostream>

int main(void)
{
  int a = 67;
  int * p = nullptr;

  p = &a;
  
  std::cout<<a<<std::endl;
  std::cout<<&a<<std::endl;
  std::cout<<p<<std::endl;
  std::cout<<*p<<std::endl;
  std::cout<<&p<<std::endl;

  *p=22;
  std::cout<<a<<std::endl;
  
  
  return 0;
}


