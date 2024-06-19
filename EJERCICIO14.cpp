/*EJERCICIO 14: Si las vocales se representan con números del 1 al 5, lea un número e indique que vocal
es.*/
#include <iostream>
#include <windows.h>

using namespace std;

char vo(int x){
	switch (x){
		case 1:
			return 'a';
			break;
			case 2:
				return 'e';
				break;
				case 3:
					return 'i';
					break;
					case 4:
						return 'o';
						break;
						case 5:
							return 'u';
							break;
							default:
								return '0';
	}
}
int main(){
	int n;
	char vocal;
	SetConsoleOutputCP(CP_UTF8);

	cout<<"De un número del 1 al 5: "<<endl;
	cin>>n;
	
	vocal = vo(n);
	if (vocal== '0'){
		cout<<"El número introducido es inválido";
	}else{
		cout<<"La vocal es: "<<vocal;
	}
	return 0;
}
