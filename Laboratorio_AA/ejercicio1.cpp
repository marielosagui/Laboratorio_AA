#include<iostream>

using namespace std;


void Suma(int a[3][3], int b[3][3], int c[3][3], int i, int j, int n)
{
     if(i<n)
     {
	  if(j<n)
	  {
		c[i][j]= a[i][j] + b[i][j];
		j++;
		Suma(a, b, c, i, j, n);
	  }
	  j=0;
	  i++;
	  Suma(a, b, c, i, j, n);
     }
}

void Recorrido(int c[3][3],int n){
	int i,j;
	cout<<"Matriz C resultante: \n";
	for(i=0; i<n; i++)
	{
		cout<<"|"<<" ";
	    for(j=0;j<n;j++)
	    {
		   cout<<c[i][j]<<" ";
	    }
	       cout<<"|"<<"\n";
	}
}

int main(){
	int a[3][3] ,b[3][3] , c[3][3], i, j, n=3;
	cout<<"Ingrese los valores de la Matriz A."<<"\n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"] de la matriz A: ";
			cin>>a[i][j];
		}
	}
	cout<<"\n"<<"Ingrese los valores de la Matriz B."<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"] de la matriz B: ";
			cin>>b[i][j];
		}
	}
	Suma(a, b, c, 0, 0, n);
	cout<<"\n";
	Recorrido(c, n);
}