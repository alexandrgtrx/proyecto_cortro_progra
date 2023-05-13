/******************************************************************************
PROYECTO CORTO PROGRAMACION 1 V1.0
Programadores: 
    Elder Geovany Yac Mul - 202007018
    Andres Fernando Gonzalez Alcantara - 202308061
    Denis Alexander Lucas Ramirez - 202207036
*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

string jugador_1;  //Variable 1 global
string jugador_2;  //Variable 2 global
char logo=220;     //Variable 3 global 

void fila_1(int a)  //Despliegue de la primera fila
{
	if(a>0)
	{
		cout<<"    ";
		for(int fila_1=1; fila_1<=a; fila_1++){
			cout<<logo<<" ";
		}
	}

}

void fila_2(int a)   //Despliegue de la segunda fila
{
	if(a>0)
	{
		cout<<"  ";
		for(int fila_2=1; fila_2<=a; fila_2++){
		cout<<logo<<" ";
		}
	}
}

void fila_3(int a)   //Despliegue de la tercera fila
{
	if(a>0)
	{
		for(int fila_3=1; fila_3<=a; fila_3++){
			cout<<logo<<" ";
		}
	}
}

int main()         //Funcion principal
{
    int fila_a=3;
	int fila_b=5;
	int fila_c=7;
    cout<<"Ingrese el nombre del jugador 1"<<endl;
	cin>>jugador_1;
	cout<<"Ingrese el nombre del jugador 2"<<endl;
	cin>>jugador_2;

    cout<<"*******"<<jugador_1<<" vs "<<jugador_2<<"*****"<<endl;

	fila_1(fila_a);   //Llamado a la primera fila
	cout<<endl;
	fila_2(fila_b);   //Llamado a la segunda fila
	cout<<endl;
	fila_3(fila_c);   //Llamado a la tercera fila
	cout<<endl;


    return 0;
}
