/*EJERCICIO 12: Muestre un algoritmo que nos permita evaluar la función G(X)*/


#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	int a, b;
	SetConsoleOutputCP(CP_UTF8);

	
	cout<<"BIENVENIDO AL PROGRAMA QUE EVALÚA UNA FUNCIÓN: "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	cout<<"Escriba una variable: "<<endl;
	cin>>a;
	
	if(a<=0){
		b= a^2;
		cout<<"El valor de y es: "<<b<<endl;
	}else if(a<=8){
		
		b=a-5;
		cout<<"El valor de y es: "<<b<<endl;

	}else{
		b=2*a;
		cout<<"El valor de y es: "<<b<<endl;

	}
	return 0;
}




 
