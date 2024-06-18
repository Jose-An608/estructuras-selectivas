/*EJERCICIO 11: Leer 3 números q, r y s. Determine si q es multiplo de r y s.*/
#include <iostream>
using namespace std;
int main(){
	int q,r,s;
	
	cout<<"Escribe el primer numero: "<<endl;
	cin>>q;
	cout<<"Escribe el segundo numero: "<<endl;
	cin>>r;
	cout<<"Escribe el tercer numero: "<<endl;
	cin>>s;
	
	if(q%r==0){
		if(q%s==0){
			cout<<"El primer numero es multiplo del segundo y tercero"<<endl;
		}else{
			cout<<"El primer numero es multiplo del segundo pero no del  tercero"<<endl;
		}
	}else{
		cout<<"El primer numero no es multiplo del segundo"<<endl;
	}
	return 0;
}