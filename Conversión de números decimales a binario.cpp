#include <iostream>
using namespace std;
class Numeroabinario{
	private: int decimal;
	public:
		Numeroabinario(int);
		void operacion();
};
Numeroabinario::Numeroabinario(int decimals){
	 decimal=decimals;
	
}
void Numeroabinario::operacion(){
	 short binario[8];
	cout<<"Ingresa el numero que quieres pasar a binario: ";
	cin>>decimal;
	for(int q=0;q<8;q++){
		binario[q] = decimal % 2;
		decimal /=2;
	}
	cout<<"La conversion es: ";
	for(int w=7;w>=0;w--){
		cout<<binario[w];
	}
}

//int main(){
//	int ingresaar;
//	Numeroabinario Prueba(ingresaar);
//	Prueba.operacion();
//}
