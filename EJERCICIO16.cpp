/*EJECICIO 16: Un banco ha decidido aumentar el límite de crédito de las tarjetas de crédito de sus
cliente, para esto considera que si su cliente tiene tarjeta tipo 1, el aumento será del 25%;
si tiene tipo 2, será del 35%; si tiene tipo 3, de 40%, y para cualquier otro tipo, de 50%.
Genere un algoritmo donde se ingrese el tipo de tarjeta y el crédito actual, luego mostrar
el nuevo crédito aumentado.*/
#include <iostream>
using namespace std;
int main(){
	int tipo, c_ac, c_aum, aumento;
	cout<<"CUAL ES SU TIPO DE TARJETA: "<<endl;
	cin>>tipo;
	cout<<"CUAL ES SU CREDITO ACTUAL: "<<endl;
	cin>>c_ac;
	
	if(tipo==1){
		aumento=c_ac*0.25;
		c_aum= c_ac + aumento;
		cout<<"SU CREDITO AUMENTADO ES: "<<c_aum<<endl;
	}
	else if(tipo==2){
		aumento=c_ac*0.35;
		c_aum= c_ac + aumento;
		cout<<"SU CREDITO AUMENTADO ES: "<<c_aum<<endl;
	}
	else if(tipo==3){
		aumento=c_ac*0.4;
		c_aum= c_ac + aumento;
		cout<<"SU CREDITO AUMENTADO ES: "<<c_aum<<endl;
	}else{
		aumento=c_ac*0.5;
		c_aum= c_ac + aumento;
		cout<<"SU CREDITO AUMENTADO ES: "<<c_aum<<endl;
	}
	
	return 0;
	
}