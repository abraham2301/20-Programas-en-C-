#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;
class Moverpunto{
	private: int x;
			 int y;
			char opcion;
			public:
				Moverpunto(int,int,char);
				void mover();
};

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
Moverpunto::Moverpunto(int x1,int y1,char opcion1){
	x=x1;
	y=y1;
	opcion=opcion1;

}

void Moverpunto::mover(){
	opcion=getch();
	while(opcion!='x'){
		system("CLS");
		gotoxy(x,y);cout<<"*";
		opcion=getch();
		switch(opcion){
			case 'w': gotoxy(x,y--); cout<<"*";break;
			case 's': gotoxy(x,y++); cout<<"*";break;
			case 'a': gotoxy(x--,y); cout<<"*";break;
			case 'd': gotoxy(x++,y); cout<<"*";break;
			Sleep(30);
		}
	}
}
int main(){
	int x2;
	int y2;
	char opcion3;
	Moverpunto mostrar(x2,y2,opcion3);
	mostrar.mover();
	
}
