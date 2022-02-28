#include <iostream>
using namespace std;

class Tabla{
	private: int num;
	public:
		Tabla(int);
		void operacion();
};
Tabla::Tabla(int numf){
	num=numf;
}
void Tabla::operacion(){
	int operar;
	int vuelta;
	cout<<"Que tabla quieres hacer: ";
	cin>>operar;
	for(int k=1;k<=12;k++){
		vuelta= operar*k;
		cout<<"El resultado de tu operacion es: "; cout<<operar; cout<<"X"; cout<<k; cout<<"="; cout<<vuelta<<endl;
	}
}
//int main(){
//	int ingresa;
//	Tabla resultado(ingresa);
//	resultado.operacion();
//
//	return 0;
//}
