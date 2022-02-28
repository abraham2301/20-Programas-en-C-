#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
using namespace std;
class Temporizador{
	private: int max_segundos, segundo, max_minutos,minuto;
	public:
		Temporizador(int,int,int,int);
		void reloj();
};
Temporizador::Temporizador(int max_segundos1,int segundo1,int max_minutos1,int minuto1){
	max_segundos=max_segundos1;
	segundo= segundo1;
	max_minutos= max_minutos1;
	minuto=minuto1;
}
void Temporizador::reloj(){
	cout<<"Ingresa los minutos: ";
	cin>>max_minutos;
	cout<<"Ingresa los segundos: ";
	cin>>max_segundos;
		while(segundo==segundo && max_minutos>=0 ){
			for(segundo=max_segundos; segundo>=0; segundo--){
				printf("%i:%i",max_minutos,segundo);
				Sleep(1000);
				system("cls");
				max_segundos=+59;
			}
			minuto=max_minutos--;
			printf("%i:%i",max_minutos,segundo);
			
		}
		printf("Se acabo el tiempo");
}

//int main(){
//	int maxsegundo;
//	int segundo2;
//	int maxminuto;
//	int minuto2;
//	Temporizador Tiempo(maxsegundo,segundo2,maxminuto,minuto2);
//	Tiempo.reloj();
//}
