/*para compilar es necesario usar el comando:
  g++ bessel_roots.cpp -lgsl -lgslcblas y ademas contar con
  la libreria cientifica de GNU (GSL) disponible en https://www.gnu.org/software/gsl/

  esto unicamente para llamar las ya definidas funciones bessel y neumann que se encuentran alli
  el algoritmo diseñado para encontrar las raices es propio de nosotros
 */

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <gsl/gsl_sf_bessel.h>

double Neumann_root(double v,int n);
double Neumann_root_fracc(double v,int n);
double Bessel_root(double v,int n);
double Bessel_root_fracc(double v,int n);

int main ()
{
  //Las raices se hallan a traves del metodo de regula-falsi
  
  int x=0,n;
  double v=0.0;
  std::cout.precision(8);
  std::cout.setf(std::ios::scientific);

  std::cout<< "Este programa hallara el N-esimo cero de la funcion Bessel\nde primera o segunda especie de orden v"<<std::endl; 
  std::cout<<"Digite 1 para funcion Bessel de orden entero\nDigite 2 para funcion Neumann de orden entero"<<std::endl;
  std::cout<<"Digite 3 para funcion Bessel de orden fraccionario\nDigite 4 para funcion Neumann de orden fraccionario"<<std::endl;
  std::cin>>x;
  
  switch (x){
  case 1:
    {
      std::cout<<"Ingrese el orden de la funcion Bessel"<<std::endl;
      std::cin>>v;
      std::cout<<"Ingerse el cero que desea encontrar"<<std::endl;
      std::cin>>n;
      double result =Bessel_root (v,n);
      std::cout<<"El cero esta en x="<< result<<std::endl;

      break;
      
    }
  case 2:
    {
      
      std::cout<<"Ingrese el orden de la funcion Neumann"<<std::endl;
      std::cin>>v;
      std::cout<<"Ingerse el cero que desea encontrar"<<std::endl;
      std::cin>>n;

      double result = Neumann_root(v,n);
      
      std::cout<<"el cero esta en x= "<<result<<std::endl;

      
      break;
    }
     case 3:
    {
      std::cout<<"Ingrese el orden de la funcion Bessel"<<std::endl;
      std::cin>>v;
      std::cout<<"Ingerse el cero que desea encontrar"<<std::endl;
      std::cin>>n;
      double result =Bessel_root_fracc (v,n);
      std::cout<<"El cero esta en x="<< result<<std::endl;

      break;
      
    }
  case 4:
    {
      
      std::cout<<"Ingrese el orden de la funcion Neumann"<<std::endl;
      std::cin>>v;
      std::cout<<"Ingerse el cero que desea encontrar"<<std::endl;
      std::cin>>n;

      double result = Neumann_root_fracc(v,n);
      
      std::cout<<"el cero esta en x= "<<result<<std::endl;

      
      break;
    }
    
  default:
    std::cout<<"numero equivocado"<<std::endl;
  }
  
  return 0;
  
}

double Neumann_root(double v,int n)
{
  int counter=0;
  double x1=0.5;
  double x2=1.5;
  int MAX=50;

  
  while (counter<=n-1)
    {
    
      if( gsl_sf_bessel_Yn (v, x1)*gsl_sf_bessel_Yn (v,x2)>0)
	{
	  x1=x2;
	  x2=x2+1;
	}
      else
	{
	  x1=x2;
	  x2=x2+1;
	  counter=counter+1;
	}
    }  
  double root=0;
  for (int a=0; a<=MAX; a++)
    {
      root=x2-(gsl_sf_bessel_Yn (v,x2)*(x1-x2)/(gsl_sf_bessel_Yn (v,x1)-gsl_sf_bessel_Yn (v,x2)));
      
      if (gsl_sf_bessel_Yn (v,root)*x1>0)
	{
	  x1=root;
	}
      else
	{
	  x2=root;
	}
    }
  return root;
}

double Bessel_root(double v,int n)
{
  int counter=0;
  double x1=0.5;
  double x2=1.5;
  int MAX=50;
  while (counter<=n-1)
    {
      
      if( gsl_sf_bessel_Jn (v, x1)*gsl_sf_bessel_Jn (v,x2)>0)
	{
	  x1=x2;
	  x2=x2+1;
	}
      else
	{
	  x1=x2;
	  x2=x2+1;
	  counter=counter+1;
	}
    }  
  double root=0;
  for (int a=0; a<=MAX; a++)
    {
      root=x2-(gsl_sf_bessel_Jn(v,x2)*(x1-x2)/((gsl_sf_bessel_Jn(v,x1)-gsl_sf_bessel_Jn (v,x2))));
      
      if (gsl_sf_bessel_Jn (v,root)*x1>0)
	{
	  x1=root;
	}
      else
	{
	  x2=root;
	}
    }
  return root;
}



double Bessel_root_fracc(double v,int n)
{
  int counter=0;
  double x1=0.5;
  double x2=1.5;
  int MAX=50;
  while (counter<=n-1)
    {
      
      if( gsl_sf_bessel_Jnu (v, x1)*gsl_sf_bessel_Jnu (v,x2)>0)
	{
	  x1=x2;
	  x2=x2+1;
	}
      else
	{
	  x1=x2;
	  x2=x2+1;
	  counter=counter+1;
	}
    }  
  double root=0;
  for (int a=0; a<=MAX; a++)
    {
      root=x2-(gsl_sf_bessel_Jnu(v,x2)*(x1-x2)/((gsl_sf_bessel_Jnu(v,x1)-gsl_sf_bessel_Jnu (v,x2))));
      
      if (gsl_sf_bessel_Jnu (v,root)*x1>0)
	{
	  x1=root;
	}
      else
	{
	  x2=root;
	}
    }
  return root;
}




double Neumann_root_fracc(double v,int n)
{
  int counter=0;
  double x1=0.5;
  double x2=1.5;
  int MAX=50;
  while (counter<=n-1)
    {
      
      if( gsl_sf_bessel_Ynu (v, x1)*gsl_sf_bessel_Ynu (v,x2)>0)
	{
	  x1=x2;
	  x2=x2+1;
	}
      else
	{
	  x1=x2;
	  x2=x2+1;
	  counter=counter+1;
	}
    }  
  double root=0;
  for (int a=0; a<=MAX; a++)
    {
      root=x2-(gsl_sf_bessel_Ynu (v,x2)*(x1-x2)/(gsl_sf_bessel_Ynu (v,x1)-gsl_sf_bessel_Ynu (v,x2)));
      
      if (gsl_sf_bessel_Ynu (v,root)*x1>0)
	{
	  x1=root;
	}
      else
	{
	  x2=root;
	}
    }
  return root;
}
