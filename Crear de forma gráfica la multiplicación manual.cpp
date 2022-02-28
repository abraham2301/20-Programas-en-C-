#include <iostream>
#include <windows.h>
using namespace std;
class Grafica{
	private: int num1,num2,num3,num4;
	public:
		Grafica(int,int, int,int);
		void operar();
};
Grafica::Grafica(int numfin1, int numfin2, int numfin3, int numfin4){
	num1= numfin1;
	num2= numfin2;
	num3= numfin3;
	num4= numfin4;
}

void gotoxy(int x, int y){
		HANDLE hcon;
		hcon= GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hcon,dwPos);
}

void Grafica::operar(){
	int verificacion1;
	int verificacion2;
	int cuatrotodos;
	int cuatrotouno;
	int trestouno;
	int trestodos;
	int unio;

	cout<<"Bienvenido si quieres ingresar dos numeros por ejemplo 42, solo multiplicaciones de dos digitos ejemplo 42*42"<<endl<<endl;
	cout<<"Tendras que digitar numero por numero osea que seria 4 y aparte el 2 para crear el 42"<<endl;
	cout<<"Y si tus numeros son >10 pon primero el cero en cada valor porque solo acepta dos digitos y para llenarlo se necesita porner el 0"<<endl;
	cout<<"Ingreas el primer digito del primero numero:";
	cin>>num1;
	cout<<"Ingresa el segundo digito del primer numero:";
	cin>>num2;
	cout<<"Tu primer numero quedaria asi: ";
	cout<<num1;
	cout<<num2<<endl;
	cout<<"Ingresa tu primer digito del segundo numero:";
	cin>>num3;
	cout<<"Ingresa tu segundo digito del segundo numero:";
	cin>>num4;
	cout<<"Tu segundo numero quedaria asi: ";cout<<num3;
	cout<<num4<<endl<<endl;
	cout<<"Muy bien escribe los numeros pero ahora normal los dos digitos seguidos, por ejemplo el ",cout<<num1;cout<<num2;cout<<" Completo claro los mismos ya ingresados anteriormente"<<endl<<endl;
	cout<<"Ingresa el primer numero completo:";
	cin>>verificacion1;
	cout<<"Ingresa el segundo numero completo:";
	cin>>verificacion2;
	cuatrotodos=num4*num2;
	cuatrotouno=num4*num1;
	trestouno=num3*num1;
	trestodos=num3*num2;
	unio=verificacion1*verificacion2;
	if(verificacion1<10 && verificacion2<10){
		gotoxy(51,60);
		cout<<verificacion1;
		gotoxy(51,61);
		cout<<verificacion2;
		gotoxy(49,61);
		cout<<"X";
		gotoxy(47,62);
		cout<<"---------";
		gotoxy(51,63);
		cout<<unio;
		gotoxy(45,64);
		cout<<"Resultado:";
		cout<<unio;
	}
	else{
		gotoxy(51,60);
		cout<<verificacion1;
		gotoxy(51,61);
		cout<<verificacion2;
		gotoxy(49,61);
		cout<<"X";
		gotoxy(47,62);
		cout<<"---------";
		gotoxy(50,63);
		cout<<cuatrotodos;
		gotoxy(49,64);
		cout<<cuatrotouno;
		gotoxy(49,65);
		cout<<trestodos;
		gotoxy(48,66);
		cout<<trestouno;
		gotoxy(46,67);
		cout<<"-----------";
		gotoxy(48,68);
		cout<<unio;
		gotoxy(46,69);
		cout<<"Resultado:";
		cout<<unio;
	}

}



//int main(){
//
//	int num1f,num2f,num3f,num4f;
//	Grafica final(num1f, num2f, num3f, num4f);
//	final.operar();
//}
