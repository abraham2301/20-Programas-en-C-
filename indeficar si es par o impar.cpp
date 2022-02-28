#include <iostream>
using namespace std;
class Identificar{
	private : int numero;
	public :
		Identificar(int);
		void conocedor();
};
Identificar::Identificar(int numerof){
	numero=numerof;
}

void Identificar::conocedor(){
	int h;
	h=numero%2;
	if(h==0){
		cout<<"Tienes un numero par";
	}
	else{
		cout<<"Tienes un numero impar";
	}
}
//int main(){
//	int numerof;
//	cout<<"Conocer si tu numero es par o impar"<<endl;
//	cout<<"Ingresa tu numero: ";
//	cin>>numerof;
//	Identificar num(numerof);
//	num.conocedor();
//	
//	return 0;
//}
