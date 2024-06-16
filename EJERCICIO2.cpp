/*EJERCICIO 2: En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 ¿Cuál será la cantidad que pagara una persona por su compra?*/
#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	double x, d, y;

	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"De el precio de la compra: "<<endl;
	cin>>x;
	
	if  (x>1000){
		d= x*0.2;
		y= x - d;
		cout<<"Usted debe pagar: "<<y<<endl;
	} else{
		y=x;
		cout<<"Usted debe pagar: "<<y<<endl;

		}
		
		return 0;
	
}