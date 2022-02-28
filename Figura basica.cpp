#include "miniwin.h"
#include <iostream>
using namespace std;
using namespace miniwin;
class Figurageo{
	private: int num1;
	public:
		Figurageo(int);
		void mostrar();
};

Figurageo::Figurageo(int numf){
	num1=numf;
}
void Figurageo::mostrar(){

  while(true){
  	for(int k=0; k<320;k++){
  		texto(k,k, "Bienvenido a mi programa");
  		refresca();
  		espera(10);
  		borra();
  		vredimensiona(350, 350);
		linea(0, 0, 200, 200);
		color(AZUL);
		rectangulo(5, 5, 50, 50);
		color(ROJO);
		circulo(150, 50, 20);
		color(ROJO);
		circulo_lleno(150, 150, 20);
		color(AZUL);
		rectangulo_lleno(50, 50, 100, 100);
		refresca();  
	  }
	  for(int q=320; q>0; q--){
	  	texto(q,q, "Adios y gracias por ver");
	  	refresca();
	  	espera(10);
	  	borra();
	  	vredimensiona(350, 350);
		linea(0, 0, 200, 200);
		color(AZUL);
		rectangulo(5, 5, 50, 50);
		color(ROJO);
		circulo(150, 50, 20);
		color(ROJO);
		circulo_lleno(150, 150, 20);
		color(AZUL);
		rectangulo_lleno(50, 50, 100, 100);
		refresca();  
	  }

  }
}

int main(){
	int decision;
 	Figurageo mostrar(decision);
 	mostrar.mostrar();
 
 return 0;  
}
