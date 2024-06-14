/*EJERCICIO 12: Muestre un algoritmo que nos permita evaluar la función G(X)*/
#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout<<"Escriba una variable: "<<endl;
	cin>>x;
	
	if(x<=0){
		y= x^2;
		cout<<"El valor de y es: "<<y<<endl;
	}else if(x<=8){
		
		y=x-5;
		cout<<"El valor de y es: "<<y<<endl;

	}else{
		y=2*x;
		cout<<"El valor de y es: "<<y<<endl;

	}
	
	
	
	return 0;
}




 