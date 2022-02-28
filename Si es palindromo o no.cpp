#include <iostream>
#include <string.h>
using namespace std;

class Palindromo{
	private: string palabra, resultadopalabra;
	public:
		Palindromo(string,string);
		void verificar();
};
Palindromo::Palindromo(string palabraf,string resultadopalabraf){
	palabra = palabraf;
	resultadopalabra = resultadopalabraf;
}
void Palindromo::verificar(){
	int k=0;
	for(k=palabra.size()-1; k>=0; k--){
		resultadopalabra+= palabra[k];
	}
	if(palabra==resultadopalabra){
		cout<<"Felicidades tu palabra o numero "<<palabra<<" es palindroma"<<endl;
	}
	else{
		cout<<"Lastima tu palabra o numero "<<palabra<<" No es palindroma"<<endl;
	}
}


//int main(){
//	string ingresa;
//	string salida;
//	cout<<"Ingresa la palabra o numero que deseas saber si es palindroma: ";
//	cin>>ingresa;
//	Palindromo verificar(ingresa,salida);
//	verificar.verificar();
//	
//	return 0;
//}
