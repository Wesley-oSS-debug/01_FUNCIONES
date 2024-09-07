/*suma de elemtos de un array
Debems pedir al usuario el tamaño de array, despues colocar los elementos del array*/
#include <iostream>
#include <windows.h>
using namespace std;

int suma(int,int[]);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int array[100],tam;
	cout<<"Ingrese el tamaño de ARRAY(0-100): "; cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el elemento ["<<i+1<<"]: "; 
		cin>>array[i];
	}
	cout<<"\n\n-------SUMA DE ELEMENTOS DEL ARRAY-------\n\n";
	cout<<"La suma es: "<<suma(tam,array);
	
	return 0;
}

int suma(int tam, int array[]){
	if(tam==1){
		return array[0];
	}else{
		
		return array[tam-1] + suma(tam-1,array);
	}

}