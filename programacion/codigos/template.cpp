#include <iostream>

template <class A>
A prod (A a, A b)
{
  A v;

  v= a*b;

  return v;

}

int main(void)

{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
    
  int x,y,z;
  double s,t,u;

  s=5.3243;
  t=3.234;
  x=22;
  y=7;

  z=prod(x,y);
  u=prod(s,t);

  std::cout<<z<<std::endl;
  std::cout<<u<<std::endl;


  return 0;
}
