#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Descuentocompra{
	private: float compra; float descuento;
		public:
			Descuentocompra(float,float);
			void Producto();
};
Descuentocompra::Descuentocompra(float compra1, float descuento1){
	compra=compra1;
	descuento=descuento1;
}
void Descuentocompra::Producto(){
	cout<<"Ingresa el producto de la compra: ";
	cin>>compra;
	cout<<"Pre-total Q";
	cout<<compra;
		if(compra<499){
		printf("\n");
		printf("No tienes descuento asi tu total a pagar es: Q");
		printf("%f", compra);
	}
	else{
		if(compra==500 || compra<=999){
			descuento= compra - (compra*0.10);
			printf("\n");
			printf("Tienes un descuento del 10%% asi que tu total a pagar es: Q");
			printf("%f", descuento);
		}
		else{
				if(compra==1000 || compra<2000){
					descuento= compra - (compra*0.20);
					printf("\n");
					printf("Tienes un descuento del 20%% asi que tu total a pagar es: Q");
					printf("%f", descuento);
				}
				else{
						if(compra>2001){
							descuento= compra - (compra*0.30);
							printf("\n");
							printf("Tienes un descuento del 30%% asi que tu total a pagar es: Q");
							printf("%f", descuento);
						}
				}
		}
	}
}

//int main(){
//	float total;
//	float descuento;
//	Descuentocompra Pagar(total,descuento);
//	Pagar.Producto();
//}

