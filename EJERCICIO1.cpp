/*EJERCICIO 1: Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.*/
#include <iostream>
using namespace std;
int main(){
	int cal_1,cal_2,cal_3, promedio;
	
	cout<<"Escriba su primera calificacion: "<<endl;
	cin>>cal_1;
	cout<<"Escriba su segunda calificacion: "<<endl;
	cin>>cal_2;
	cout<<"Escriba su tercera calificacion: "<<endl;
	cin>>cal_3;
	
	promedio= (cal_1+cal_2+cal_3)/3;
	
	if(promedio >= 70){
		cout<<"Usted esta aprobado"<<endl;
	}
	
	else{
		cout<<"Usted esta desaprobado"<<endl;
	}
	
	return 0;
}
