# include <iostream>
# include <cmath>
# include <typeinfo>

double cn_d(double(*f)(double),double x, double h);

int main(void)
{
  double x=M_PI/4;
  double h=0.01;
  std::cout<<cn_d(std::sin,x,h)<<std::endl;
  std::cout<<cn_d(std::cos,x,h)<<std::endl;

  
  /*
arreglos y punteros
    
  int numbers[8]{0};
  int a=0;

  std::cout<<&numbers[0]<<std::endl;
  std::cout<<numbers<<std::endl;
  std::cout<<&numbers[1]<<std::endl;


  a=*numbers;
  std::cout<<a<<std::endl;
  std::cout<<typeid(numbers).name()<<std::endl;
  std::cout<<typeid(a).name()<<std::endl;
  */
  /*

ptr init 
int *p1=nullptr;

  std::cout<<p1<<std::endl;
  std::cout<<*p1<<std::endl;
  */
  
 return 0;
}

double cn_d(double(*f)(double),double x, double h)
{
  return (f(x+h/2)-f(x-h/2))/h;
}
