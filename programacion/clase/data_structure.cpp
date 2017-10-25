#include<iostream>
#include<cmath>
struct complex
{
  double x=0;
  double y=0;
};

complex suma(const complex &a, const complex &b);
complex rest(const complex &a,const complex &b);
complex mult(const complex &a,const complex &b);
complex divi(const complex &a,const complex &b);
void print(const complex &c);

int main()
{
  complex a,b,c;
  a.x=3; a.y=1;
  b.x=2;b.y=5;
  c=suma(a,b);
  print(c);

  c=rest(a,b);
  print(c);

  c=mult(a,b);
  print(c);

  c=divi(a,b);
  print(c);
  
  
  return 0;
}
void print(const complex &c)
{
  std::cout<<c.x<<"+i"<<c.y<<std::endl;
}

complex suma(const complex &a, const complex &b)
{
  complex c;
  c.x=a.x+b.x;
  c.y=a.y+b.y;

  return c;
}
complex rest(const complex &a,const complex &b)
{
  complex c;
  c.x=a.x-b.x;
  c.y=a.y-b.y;

  return c;
}
complex mult(const complex &a,const complex &b)
{
  complex c;
  c.x=a.x*b.x-a.y*b.y;
  c.y=a.y*b.x+a.x*b.y;

  return c;
}
complex divi(const complex &a,const complex &b)
{
  complex c;
  c.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
  c.y=b.y*(b.x-a.x)/(b.x*b.x+b.y*b.y);

  return c;
}
