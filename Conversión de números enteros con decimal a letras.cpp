#include <iostream>
using namespace std;


class Numeroconletra{
	private: int num;
	public:
		Numeroconletra(int);
		void convertir();
		void decimal();
	
};
Numeroconletra::Numeroconletra(int numf){
	num = numf;
}
void Numeroconletra::convertir(){
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
void Numeroconletra::decimal(){
	
	int D;
	
	cout<<"\nIngresa decimal :";
	cin>>D;
					if(D<0 || D>100) cout<<"Solo decimales de dos digitos";
		else{
		if(D>90) {cout<<"Punto Noventa y ";D=D-90;}
			if(D==90) {cout<<"Punto Noventa";D=D-90;}
			if(D>80) {cout<<"Punto Ochenta y ";D=D-80;}
			if(D==80) {cout<<"Punto OChenta";D=D-80;}
			if(D>70) {cout<<"Punto Setenta y ";D=D-70;}
			if(D==70) {cout<<"Punto Setenta";D=D-70;}
			if(D>60) {cout<<"Punto Sesenta y ";D=D-60;}
			if(D==60) {cout<<"Punto Sesenta";D=D-60;}
			if(D>50) {cout<<"Punto Cincuenta y ";D=D-50;}
			if(D==50) {cout<<"Punto Cincuenta";D=D-50;}
			if(D>40) {cout<<"Punto Cuarenta y ";D=D-40;}
			if(D==40) {cout<<"Punto Cuarenta";D=D-40;}
			if(D>30) {cout<<"Punto Treinta y ";D=D-30;}
			if(D==30) {cout<<"Punto Treinta";D=D-30;}
			if(D>20) {cout<<"Punto Venti y ";D=D-20;}
			if(D==20) {cout<<"Punto Veinte";D=D-20;}
		if(D>=16) {cout<<"Punto Dieci ";D=D-10;}
		else if(D==15) {cout<<"Punto Quince";D=D-15;}
		else if(D==14) {cout<<"Punto Catorce";D=D-14;}
		else if(D==13) {cout<<"Punto Trece";D=D-13;}
		else if(D==12) {cout<<"Punto Doce";D=D-12;}
		else if(D==11) {cout<<"Punto Once";D=D-11;}
		else if(D==10) {cout<<"Punto Diez";D=D-10;}
			if(D==9) {cout<<"Punto Nueve";D=D-9;}
			if(D==8) {cout<<"Punto Ocho";D=D-8;}
			if(D==7) {cout<<"Punto Siete";D=D-7;}
			if(D==6) {cout<<"Punto Seis";D=D-6;}
			if(D==5) {cout<<"Punto Cinco";D=D-5;}
			if(D==4) {cout<<"Punto Cuatro";D=D-4;}
			if(D==3) {cout<<"Punto Tres";D=D-3;}
			if(D==2) {cout<<"Punto Dos";D=D-2;}
			if(D==1) {cout<<"Punto Uno";D=D-1;}
			
		}
	
	
}
//int main(){
//	int ingresar;
//	int regresar;
//	Numletra final(ingresar);
//	final.convertir();
//	Numletra final2(regresar);
//	final2.decimal();
//	cin.ignore();return 0;	
//}
