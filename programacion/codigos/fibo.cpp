# include <iostream>

long fibo (long a);

int main()
{
  long a;
  a=100;						    
    
  for (int x=0;x<=a;x++)
    {
      int c;
      c=fibo(x);
      std::cout<<c<<std::endl;
    }
  
    return 0;
  
}

long fibo (long a)

  
{
  long b;
  if (a==0||a==1)
    {
      return a;
    }
  else
    {
     
      return (fibo(a-2) +fibo(a-1));
    
    }
  
  
}

