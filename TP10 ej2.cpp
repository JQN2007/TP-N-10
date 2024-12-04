#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int funcion(int min, int max);

int main(){
	
	int min = 0;
	int max = 0;
	
	cout<<"NUMERO ALEATORIO"<<endl;
	cout<<endl;
	cout<<"idique entre que numeros se puede generar el numero alatorio"<<endl;
	cout<<"entre: ";cin>>min;
	cout<<"y hasta ";cin>>max;
	
	if(min > max){
		cout<<"Ingresee bien los numeros porfavor"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		return main();
	}
	
	if(min == max){
		cout<<"Ingrese bien los numeros porfavor"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		return main();
	}
	
	
	funcion(min, max);

	
	
	
}

int funcion(int min, int max){
	
	bool comprobador = false;
	srand(time(NULL));
	int random = rand() % max;
	
	while(comprobador != true){
	
	if(random < min){
	random = rand() % max;	
	}
	else{
	comprobador = true;
	}
}

	cout<<"aqui tiene su numero: "<<random<<endl;
	
	
	
}
