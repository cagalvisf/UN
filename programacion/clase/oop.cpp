#include <iostream>
#include <cmath>

class vector2D {

  double x {0} , y{0};
public:
  vector2D (double x0,double y0);
  ~vector2D ();
  void print(void);
  double norma(void);

  vector2D operator+(const vector2D & b);
  vector2D operator-(const vector2D & b);
  double operator*(const vector2D & b);
};

vector2D::~vector2D ()
{
 
}
vector2D::vector2D (double x0,double y0)
{
  x=x0;
  y=y0;

  
}
vector2D vector2D::operator+(const vector2D & b)
{
  vector2D tmp(0,0);
  tmp.x=x+b.x;
  tmp.y=y+b.y;
  return tmp;
}
vector2D vector2D::operator-(const vector2D & b)
{
  vector2D tmp(0,0);
  tmp.x=x-b.x;
  tmp.y=y-b.y;
  return tmp;
}
double vector2D::operator*(const vector2D & b)
{
  return x*b.x+y*b.y;
}
void vector2D:: print(void)
{
  std::cout << x <<"\t"<< y <<std::endl;
}
double vector2D::norma(void)
{
  return std::sqrt(x*x+y*y);
}
int main(void)
{
  
  vector2D a(4,3),b(2,4),c(0,0),d(0,0);
  c=a+b;
  d=a-b;
  a.print();
  b.print();
  c.print();
  d.print();

  std::cout<< a*b<<std::endl;
 

  return 0;

}
