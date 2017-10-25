# include <iostream>

long factorial (long a);

int main()
{
  long number;
  std::cout<<"ingrese un numero "<<std::endl;
				   
  std::cin>>number;

  std::cout<<number<<"! = "<<factorial(number)<<'\n';
  return 0;
}

long factorial (long a)


{
  if (a > 1)
    return (a*factorial(a-1));
  else
    return 1;
}
