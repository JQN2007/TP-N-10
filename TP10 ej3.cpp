#include<iostream>
using namespace std;

int funcion(int base, int expo);

int main(){
	
	int numbase, numexpo;
	
	cout<<"ingrese su base: ";cin>>base;
	cout<<"ingrese el exponente: ";cin>>numexpo;
	
	if(numbase > 0 && numexpo > 0){
	
	cout<<"perfecto, ahora le elevamos su "<<numbase<<"^"<<numexpo<<""<<endl;
	funcion(numbase, numexpo);
		
	}
	
	else{
	cout<<"Porfavor que sean mayores a 0"<<endl;
	system("pause");
	system("cls");
	return main();
	}

	
}

int funcion(int numbase, int numexpo){
	
	int resultado = numbase;
	
	cout<<"-----------------------------"<<endl;
	for(int i=1; i < numexpo; i++){
	
	cout<<resultado<<"x"<<numbase<<"=";
	resultado=resultado*numbase;
	cout<<resultado<<"("<<i<<")"<<endl;
	
	}
	cout<<"-----------------------------"<<endl;
	
	cout<<numbase<<"^"<<numnumexpo<<" es igual a "<<resultado<<endl;
	
	
	
	
	
	
}
