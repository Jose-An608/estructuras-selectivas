/*EJERCICIO 11: Leer 3 números q, r y s. Determine si q es multiplo de r y s.*/
#include <iostream>
#include <windows.h>

using namespace std;
int main(){
	
	int q,r,s;
	SetConsoleOutputCP(CP_UTF8);

	cout<<"Escribe el primer número: "<<endl;
	cin>>q;
	cout<<"Escribe el segundo número: "<<endl;
	cin>>r;
	cout<<"Escribe el tercer número: "<<endl;
	cin>>s;
	
	if(q%r==0){
		if(q%s==0){
			cout<<"El primer número es múltiplo del segundo y tercero"<<endl;
		}else{
			cout<<"El primer número es múltiplo del segundo pero no del  tercero"<<endl;
		}
	}else{
		cout<<"El primer número no es múltiplo del segundo"<<endl;
	}
	return 0;
}