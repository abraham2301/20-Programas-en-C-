#include <iostream>
using namespace std;
class Convertidor{
	private: float numero;
	public:
		Convertidor(float);
		void kilometro_a_milla();
		void metro_a_pulgada();
		void libra_a_kilo();
		void milla_a_kilometro();
		void pulgada_a_metro();
		void kilo_a_libra();
};
Convertidor::Convertidor(float numerof){
	numero = numerof;
}

void Convertidor::kilometro_a_milla(){
	float kilometro_milla;
	kilometro_milla= numero*0.621371;
	cout<<"El resultado de tu conversion a milla seria: "<<kilometro_milla<<endl;
}
void Convertidor::metro_a_pulgada(){
	float metro_pulgada;
	metro_pulgada= numero*39.3701;
	cout<<"El resultado de tu conversion a pulgada seria: "<<metro_pulgada<<endl;
}
void Convertidor::libra_a_kilo(){
	float libra_kilo;
	libra_kilo= numero*0.453592;
	cout<<"El resultado de tu conversion a kilogramos seria: "<<libra_kilo<<endl;
}
void Convertidor::milla_a_kilometro(){
	float milla_kilometro;
	milla_kilometro= numero*1.60934;
	cout<<"El resultado de tu conversion a kilometros seria: "<<milla_kilometro<<endl;
}

void Convertidor::pulgada_a_metro(){
	float pulgada_metro;
	pulgada_metro= numero*0.0254;
	cout<<"El resultado de tu conversion a metros seria: "<<pulgada_metro<<endl;
}
void Convertidor::kilo_a_libra(){
	float kilo_libra;
	kilo_libra= numero*2.20462;
	cout<<"El resultado de tu conversion a libras seria: "<<kilo_libra<<endl;
}


//int main(){
//	float numeror;
//	int cuantos;
//	int eleccion;
//	cout<<"Convierte tus unidades de longitud a"<<endl;
//	cout<<"1: kilometro a milla"<<endl;
//	cout<<"2: metro a pulgada"<<endl;
//	cout<<"3: libra a kilo"<<endl;
//	cout<<"4: Milla a Kilometro"<<endl;
//	cout<<"5: Pulgada a Metro"<<endl;
//	cout<<"6: Kilo a libra"<<endl;
//	cout<<"Cual es tu eleccion:";
//	cin>> eleccion;
//	cout<<"Cuantas conversiones quieres hacer: ";
//	cin>>cuantos;
//	
//	for(int k;k<cuantos;k++){
//		eleccion==eleccion;
//		if(eleccion==1){
//			cout<<"Ingresa tu numero: ";
//			cin>>numeror;
//			Convertidor kilometro_milla(numeror);
//			kilometro_milla.kilometro_a_milla();
//		}
//
//		else{
//			if(eleccion==2){
//				cout<<"Ingresa tu numero: ";
//				cin>>numeror;
//				Convertidor metro_pulgada(numeror);
//				metro_pulgada.metro_a_pulgada();
//			}
////				if(eleccion==3){
//					cout<<"Ingresa tu numero: ";
//					cin>>numeror;
//					Convertidor libra_kilo(numeror);
//					libra_kilo.libra_a_kilo();
//				}
//				else{
//					if(eleccion==4){
//						cout<<"Ingrese tu numero: ";
//						cin>>numeror;
//						Convertidor milla_kilometro(numeror);
//						milla_kilometro.milla_a_kilometro();
//					}
//					else{
//						if(eleccion==5){
//							cout<<"Ingrea tu numero: ";
//							cin>>numeror;
//							Convertidor pulgada_metro(numeror);
//							pulgada_metro.pulgada_a_metro();
//						}
//						else{
//							if(eleccion==6){
//								cout<<"Ingresa tu numero: ";
//								cin>>numeror;
//								Convertidor kilo_libra(numeror);
//								kilo_libra.kilo_a_libra();
//							}
//						}
//					}
//				}
//			}
//		}
//							cout<<"Quieres cambiar: ";
//							cin>>eleccion;
//	}
//	
//	return 0;
//	
//	
//}
