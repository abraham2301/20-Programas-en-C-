#include <iostream>
#include <stdlib.h>
using namespace std;
class Calculadora{
	private: int numero1,numero2;
	public:
		Calculadora(int,int);
		void suma();
		void resta();
		void multiplicar();
		void dividir();
};
Calculadora::Calculadora(int numero_1, int numero_2){
	numero1=numero_1;
	numero2=numero_2;
}

void Calculadora::suma(){
	int sumatotal;
	sumatotal=numero1+numero2;
	cout<<"La suma total es:"<<sumatotal<<endl;
}

void Calculadora::resta(){
	int restatotal;
	restatotal=numero1-numero2;
	cout<<"La resta total es:"<<restatotal<<endl;
}

void Calculadora::multiplicar(){
	int multitotal;
	multitotal=numero1*numero2;
	cout<<"La multiplicacion total es:"<<multitotal<<endl;
}

void Calculadora::dividir(){
	int divisiontotal;
	divisiontotal=numero1/numero2;
	cout<<"La division total es:"<<divisiontotal<<endl;
}

//int main(){
//	int primero=0;
//	int segundo=0;
//	int decision=0;
//	cout<<"Que quieres hacer"<<endl;
////	cout<<"Suma = 1"<<endl;
//	cout<<"Resta = 2"<<endl;
//	cout<<"Multiplicacion = 3"<<endl;
//	cout<<"Division = 4"<<endl;
//	cout<<"Respuesta:";
//	cin>>decision;
//	
//	if(decision==1){
//		cout<<"Ingresa tu primer numero: ";
//		cin>>primero;
//		cout<<"Ingresa tu segundo numero: ";
//		cin>>segundo;
//		Calculadora sum(primero,segundo);
//		sum.suma();
//	}
//	else{
//		if(decision==2){
//			cout<<"Ingresa tu primer numero: ";
//			cin>>primero;
//			cout<<"Ingresa tu segundo numero: ";
//			cin>>segundo;
//			Calculadora rest(primero,segundo);
//			rest.resta();
//		}
//		else{
//			if(decision==3){
//			cout<<"Ingresa tu primer numero: ";
//			cin>>primero;
//			cout<<"Ingresa tu segundo numero: ";
//			cin>>segundo;
//			Calculadora multi(primero,segundo);
//			multi.multiplicar();
//			}
//			else{
//				if(decision==4){
//				cout<<"Ingresa tu primer numero: ";
//				cin>>primero;
//				cout<<"Ingresa tu segundo numero: ";
//				cin>>segundo;
//				Calculadora divis(primero,segundo);
//				divis.dividir();
//				}
//			}
//		}
//	}

	
//	system("pause");
//	return 0;
//}
