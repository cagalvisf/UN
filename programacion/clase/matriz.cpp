#include <iostream>
int main()
{
  const int n=4;
  int  m1 [n][n]={{0}};
  int  m2 [n][n]={{0}};

  

  for(int ii=0;ii<n;ii++)
  {
    for(int j=0;j<n;j++)
      {	
	m1[ii][j]=ii*n+j;
      }
  }


  for(int ii=0;ii<n;ii++)
  {
    for(int j=0;j<n;j++)
      {	
	m2[j][ii]=m1[ii][j];
      }
  }
  
std::cout<<"\nMatriz original"<<std::endl;
  for(int ii=0;ii<n;ii++)
  {
    for(int j=0;j<n;j++)
      {	
	std::cout<<m1[ii][j]<<"\t";
      } 
	    std::cout<<std::endl;
	 
  }
  std::cout<<"\nMatriz transpuesta"<<std::endl;
  for(int ii=0;ii<n;ii++)
  {
    for(int j=0;j<n;j++)
      {	
	std::cout<<m2[ii][j]<<"\t";
      } 
	    std::cout<<"\n"<<std::endl;
	 
  }
  
  
  
  
  return 0;
}
