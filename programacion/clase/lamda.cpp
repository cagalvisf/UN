#include <iostream>
int main (void)
{
  auto flambda = [](auto a, auto b) { return a < b; };
  bool flag = flambda(4.5,3.346);
  
  std::cout<< flag<<std::endl;

  return 0;
  
}
