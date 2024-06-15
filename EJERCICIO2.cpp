/*EJERCICIO 2: En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 ¿Cuál será la cantidad que pagara una persona por su compra?*/
#include <iostream>
using namespace std;
int main(){
	double precio_i, descuento, precio_f;
	cout<<"De el precio de la compra: "<<endl;
	cin>>precio_i;
	
	if  (precio_i>1000){
		descuento= precio_i*0.2;
		precio_f= precio_i - descuento;
		cout<<"Usted debe pagar: "<<precio_f<<endl;
	} else{
		precio_f=precio_i;
		cout<<"Usted debe pagar: "<<precio_f<<endl;

		}
		
		return 0;
	
}