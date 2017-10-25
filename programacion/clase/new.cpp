#include<iostream>
#include<vector>

int main()
{
  int N=0;
  std::cout<<"ingrese el tamaño del arreglo"<<std::endl;
  std::cin>>N;
  
 // double  *array=new double [N];

  std::vector<double>array(N);

  for (int ii=0;ii<N;ii++)
    {
      array[ii]=ii;
    }

  for (int ii=0;ii<N;ii++)
    {
      std::cout<<array[ii]<<std::endl;
    }
  /*
  delete [] array;   
  array=nullptr;
  delete [] array;
  */
  
  return 0;
}

  
