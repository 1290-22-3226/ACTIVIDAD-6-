#include<iostream>

using namespace std;

main(){
int edad,*p_edad;

cout<<"Ingrese Edad:";	
cin>>edad;
p_edad = &edad;
	if (*p_edad>=18){
	cout<<"Mayor de edad"<<endl;
	}
	else{
	cout<<"Menor de edad"<<endl;
	}
	
	system("PAUSE");

}
