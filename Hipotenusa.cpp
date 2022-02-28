#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Calculohipo{
	private: float x;
			 float y;
			 public:
			 Calculohipo (float,float);
			 void hipotenusa();
};
Calculohipo::Calculohipo(float x1,float y1){
	x=x1;
	y=y1;
}
void Calculohipo::hipotenusa(){
	cout<<"Ingresa el lado adyacente de tu triangulo: ";
	cin>>x;
	cout<<"Ingresa el lado opuesto de tu triangulo: ";
	cin>>y;
	cout<<setprecision(3)<<sqrt(x*x + y*y);
}

//int main(){
//	float x2;
//	float y2;
//	Calculohipo Hipotenusa(x2,y2);
//	Hipotenusa.hipotenusa();
//}
