# include <iostream>
# include <cmath>

int main()
{
  double x, y;

  x=-5;
  for(x=-5;x<=10;x=x+0.1)
    {
      y=x*sin(x);
      std::cout<<x<<"\t"<<y<<std::endl;
    }
  return 0;
}
