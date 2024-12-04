#include<iostream>
#include <windows.h>
using namespace std;

int funcion(int numero);

int main(){
	
	int numero;
	
	cout<<"numeros primos"<<endl;
	cout<<"ingrese un numero porfavor: ";cin>>numero;
	funcion(numero);
	
}

int funcion(int numero){
	
	int contador = 0;
	int i;
	
	for(int i=0; i < 100; i++){
		
		cout<<"analizando"<<endl;
		cout<<i<<"%"<<endl;
		Sleep(1);
		system("cls");
	}
	
	for(i=1; i < numero+1; i++){
	
	if(numero % i == 0){
		
		contador++;
		
	}
	
	
}

	if(contador > 2){
		
		cout<<"el numero "<<numero<<" no es primo"<<endl;
		
		
	}
	
	else{
		
		cout<<"el numero "<<numero<<" es primo"<<endl;
		
	}
	
	
	
	
	
	
}
