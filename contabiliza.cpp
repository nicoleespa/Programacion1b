
//Creado por Nicole Guagua 
                          //Programa de contabilizacion

#include<iostream>
using namespace std;

int main()
{
	int N=0,G;
	float E,M=0;
	cout<<"ingrese el limite G="; cin>>G;
	do
	{
		
	cout<<"ingrese el numero E="; cin>>E;
	N=N+1;
	M=M+E;



	}
	while(N<G);
	cout<<"Se ingresaron "<<G<<" numeros "<< "que sumaron "<<M<<endl;
	return 0;



}
//curso 1ro "B" TICS
//2022...//
