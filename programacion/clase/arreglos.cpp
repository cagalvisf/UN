#include <iostream>

void statistics(const  double data [], int size);

  int main(void)
{
  const int n=2;
  double arr[n]{1.0,1.0};
  statistics(arr[n],n);
  return 0;
}

void statistics(const double data [], int size)
{
  double suma = 0;
  for (int ii=0; ii<size;ii++)
    {
      suma =+ data[ii];
    }
  std::cout<< "El promedio es : "<<suma/size<<std::endl;
}
