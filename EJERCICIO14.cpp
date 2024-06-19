/*EJERCICIO 14: Si las vocales se representan con números del 1 al 5, lea un número e indique que vocal
es.*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"De un numero del 1 al 5: "<<endl;
	cin>>n;
	
	if(n==1){
		cout<<"La vocal es la a"<<endl;
	}else if(n==2){
		cout<<"La vocal es la e"<<endl;
	}
		else if(n==3){
		cout<<"La vocal es la i"<<endl;
		}
		else if(n==4){
			cout<<"La vocal es la o"<<endl;
			}
			else if(n==5){
				cout<<"La vocal es la u"<<endl;
				}
	return 0;
}