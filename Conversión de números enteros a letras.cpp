#include <iostream>
using namespace std;
class Numletra{
	private: int num;
	public:
		Numletra(int);
		void convertir();
	
};
Numletra::Numletra(int numf){
	num = numf;
}
void Numletra::convertir(){
	int nump;

	cout<<"Ingrese un numero:";
	cin>>nump;

	if((nump<1 || nump>999)) cout<<"Solo numeros de 1 al 999";
	else{
		if(nump>=900) {cout<<"Novecientos " ;nump=nump-900;}
		else if(nump>=800) {cout<<"Ochocientos ";nump=nump-800;}
		else if(nump>=700) {cout<<"Setecientos ";nump=nump-700;}
		else if(nump>=600) {cout<<"Seiscientos ";nump=nump-600;}
		else if(nump>=500) {cout<<"Quinientos ";nump=nump-500;}
		else if(nump>=400) {cout<<"Cuatrocientos ";nump=nump-400;}
		else if(nump>=300) {cout<<"Quinientos ";nump=nump-300;}
		else if(nump>=200) {cout<<"Doscientos ";nump=nump-200;}
		else if(nump>100) {cout<<"Ciento ";nump=nump-100;}
		else if(nump>=100) {cout<<"Cien ";nump=nump-100;}
		if(nump>90) {cout<<"Noventa y ";nump=nump-90;}
			if(nump==90) {cout<<"Noventa";nump=nump-90;}
			if(nump>80) {cout<<"Ochenta y ";nump=nump-80;}
			if(nump==80) {cout<<"OChenta";nump=nump-80;}
			if(nump>70) {cout<<"Setenta y ";nump=nump-70;}
			if(nump==70) {cout<<"Setenta";nump=nump-70;}
			if(nump>60) {cout<<"Sesenta y ";nump=nump-60;}
			if(nump==60) {cout<<"Sesenta";nump=nump-60;}
			if(nump>50) {cout<<"Cincuenta y ";nump=nump-50;}
			if(nump==50) {cout<<"Cincuenta";nump=nump-50;}
			if(nump>40) {cout<<"Cuarenta y ";nump=nump-40;}
			if(nump==40) {cout<<"Cuarenta";nump=nump-40;}
			if(nump>30) {cout<<"Treinta y ";nump=nump-30;}
			if(nump==30) {cout<<"Treinta";nump=nump-30;}
			if(nump>20) {cout<<"Venti y ";nump=nump-20;}
			if(nump==20) {cout<<"Veinte";nump=nump-20;}
		if(nump>=16) {cout<<"Dieci ";nump=nump-10;}
		else if(nump==15) {cout<<"Quince";nump=nump-15;}
		else if(nump==14) {cout<<"Catorce";nump=nump-14;}
		else if(nump==13) {cout<<"Trece";nump=nump-13;}
		else if(nump==12) {cout<<"Doce";nump=nump-12;}
		else if(nump==11) {cout<<"Once";nump=nump-11;}
		else if(nump==10) {cout<<"Diez";nump=nump-10;}
			if(nump==9) {cout<<"Nueve";nump=nump-9;}
			if(nump==8) {cout<<"Ocho";nump=nump-8;}
			if(nump==7) {cout<<"Siete";nump=nump-7;}
			if(nump==6) {cout<<"Seis";nump=nump-6;}
			if(nump==5) {cout<<"Cinco";nump=nump-5;}
			if(nump==4) {cout<<"Cuatro";nump=nump-4;}
			if(nump==3) {cout<<"Tres";nump=nump-3;}
			if(nump==2) {cout<<"Dos";nump=nump-2;}
			if(nump==1) {cout<<"Uno";nump=nump-1;}
	}

}
	

//int main(){
//	int ingresar;
//	Numletra final(ingresar);
//	final.convertir();
//	
//cin.ignore();return 0;
////	
//	
//}
