#include<iostream>
using namespace std;

int funcion(int cantidad, char futuro, string Mactual);

int main(){
	
	char actual, futuro;
	string Mactual;
	int cantidad;
	
	
	cout<<"ingrese que moneda tiene"<<endl;
	cout<<"A)peso  B)dolar  C)euro  D)real"<<endl;
	cin>>actual;
	
	switch(actual){
		
	case 'a':
	Mactual = "peso/s";	
	break;	
		
	case 'b':
	Mactual = "dolar/es";	
	break;		
		
	case 'c':
	Mactual = "euro/s";
	break;		
		
	case 'd':
	Mactual = "real/s";	
	break;		
		
	}
	
	cout<<"ingrese cuanto dinero tiene en "<<Mactual<<": "<<endl;
	cin>>cantidad;
	cout<<"ingrese que moneda la quiere pasar"<<endl;
	cout<<"A)peso  B)dolar  C)euro  D)real"<<endl;
	cin>>futuro;
	
	funcion(cantidad, futuro, Mactual);


	
}

int funcion(int cantidad, char futuro, string Mactual){
	
	if(Mactual == "peso/s"){
		
		switch(futuro){
		
		case 'a':
		cout<<"ya esta en pesos "<<endl;
		break;
		
		case 'b':
		cout<<cantidad<<" "<<Mactual<<" a dolares serian: "<<(cantidad*0.0010)<<" dolar/es"<<endl;
		break;
		
		case 'c':
		cout<<cantidad<<" "<<Mactual<<" a euros serian: "<<(cantidad*0.00093)<<" euro/s"<<endl;
		break;
		
		case 'd':
		cout<<cantidad<<" "<<Mactual<<" a reales serian: "<<(cantidad*0.0058)<<" real/es"<<endl;
		break;
		
		
		}
	}
		
		else if(Mactual == "dolar/es"){
		
		switch(futuro){
		
		case 'a':
		cout<<cantidad<<" "<<Mactual<<" a pesos serian: "<<(cantidad*990.23)<<" peso/s"<<endl;
		break;
		
		case 'b':
		cout<<"ya estan en dolares"<<endl;
		break;
		
		case 'c':
		cout<<cantidad<<" "<<Mactual<<" a euros serian: "<<(cantidad*0.92)<<" euro/s"<<endl;
		break;
		
		case 'd':
		cout<<cantidad<<" "<<Mactual<<" a reales serian: "<<(cantidad*5.78)<<" real/es"<<endl;
		break;
		
		
		}
	}
		
		else if(Mactual == "euro/s"){
		
		switch(futuro){
		
		case 'a':
		cout<<cantidad<<" "<<Mactual<<" a pesos serian: "<<(cantidad*1076.45)<<" peso/s"<<endl;
		break;
		
		case 'b':
		cout<<cantidad<<" "<<Mactual<<" a dolares serian: "<<(cantidad*1.09)<<" dolar/es"<<endl;
		break;
		
		case 'c':
		cout<<"Ya estan en euros"<<endl;
		break;
		
		case 'd':
		cout<<cantidad<<" "<<Mactual<<" a reales serian: "<<(cantidad*6.28)<<" real/es"<<endl;
		break;
		
		
		}
	}
		
		else if(Mactual == "real/es"){
		
		switch(futuro){
		
		case 'a':
		cout<<cantidad<<" "<<Mactual<<" a pesos serian: "<<(cantidad*171.35)<<" peso/s"<<endl;
		break;
		
		case 'b':
		cout<<cantidad<<" "<<Mactual<<" a dolares serian: "<<(cantidad*0.17)<<" dolar/es"<<endl;
		break;
		
		case 'c':
		cout<<cantidad<<" "<<Mactual<<" a euros serian: "<<(cantidad*0.16)<<" euro/s"<<endl;
		break;
		
		case 'd':
		cout<<"Ya estan en reales"<<endl;
		break;
		
		
		}
	}
		
	}
	

	
	
	
	
	
	
	
	

