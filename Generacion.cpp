#include <iostream>
using namespace std;
class Generacion{
	private: int cual;
		public:
			Generacion(int);
			void Resultado();
};
Generacion::Generacion(int cualf){
	cual=cualf;
}
void Generacion::Resultado(){
	cout<<"Cual generacion eres"<<endl;
	cout<<"Igresa tu fecha de nacimineto: ";
	cin>>cual;
	if(cual>=1946 && cual<=1965){
		cout<<"Felicidades ere un Baby Boomers"<<endl;
		cout<<"Tienes entre 55 y 75 anios"<<endl;
		cout<<"Esta generacion destaca por haberse desarrollado en un ambiente economico favorable"<<endl;
		cout<<"el 70 por ciento de los baby boomer pertenecen a la clase media";
	}
	else{
		if(cual>=1966 && cual<=1982){
			cout<<"Felicidades eres de una Generacion X"<<endl;
			cout<<"Tiene entre 56 y 40 anios"<<endl;
			cout<<"Ellos y ellas se vieron freando por recisiones economicas fuertes y desempleo, lo cual"<<endl;
			cout<<"retraso su emancipacion e idependencia economica, en algunos casos";
		}
		else{
			if(cual>=1983 && cual<=1996){
				cout<<"Felicidades eres un Millennials"<<endl;
				cout<<"Les cuesta mas trabajo emancoàrse que a las personas de otras generaciones esta generacion"<<endl;
				cout<<"Fueron testigo de la llegada del internet a los hogares y incursionando a la tecnologia";
			}
			else{
				if(cual>=1997 && cual<=2012){
					cout<<"Feliciades eres Generacion Z"<<endl;
					cout<<"Tienes entre 7 y 22 anios"<<endl;
					cout<<"Esta generacion comienza entrar a la edad adulta y se caracteriza por aceptar la diversidad "<<endl;
					cout<<"Se consideran ciudadanos de la era digital";
				}
			}
		}
	}

}

//int main(){
//	int ingresa;
//	Generacion Ayos(ingresa);
//	Ayos.Resultado();
//}
