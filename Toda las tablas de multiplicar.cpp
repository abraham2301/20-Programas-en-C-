#include <iostream>
using namespace std;

class Todatabla{
	private: int num;
	public:
		Todatabla(int);
		void operacion();
};
Todatabla::Todatabla(int numf){
	num=numf;
}
void Todatabla::operacion(){
	int uno=1;
	int dos=2;
	int tres=3;
	int cuatro=4;
	int cinco=5;
	int seis=6;
	int siete=7;
	int ocho=8;
	int nueve=9;
	int diez=10;
	int once=11;
	int doce=12;
	int operacion;
	
	for(int q=1; q<=12; q++){
		if(q==1){
			cout<<"Tabla del uno"<<endl;
		}
		operacion= uno*q;
		cout<<uno; cout<<"X"; cout<<q; cout<<"="; cout<<operacion<<endl;
		if(q==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	
	for(int w=1; w<=12; w++){
		if(w==1){
			cout<<"Tabla del dos"<<endl;
		}
		operacion= dos*w;
		cout<<dos; cout<<"X"; cout<<w; cout<<"="; cout<<operacion<<endl;
		if(w==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int e=1; e<=12; e++){
		if(e==1){
			cout<<"Tabla del tres"<<endl;
		}
		operacion= tres*e;
		cout<<tres; cout<<"X"; cout<<	e; cout<<"="; cout<<operacion<<endl;
		if(e==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
		for(int r=1; r<=12; r++){
		if(r==1){
			cout<<"Tabla del cuatro"<<endl;
		}
		operacion= cuatro*r;
		cout<<cuatro; cout<<"X"; cout<<r; cout<<"="; cout<<operacion<<endl;
		if(r==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int t=1; t<=12; t++){
		if(t==1){
			cout<<"Tablade del cinco"<<endl;
		}
		operacion= cinco*t;
		cout<<cinco; cout<<"X"; cout<<t; cout<<"="; cout<<operacion<<endl;
		if(t==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int y=1; y<=12; y++){
		if(y==1){
			cout<<"Tabla del seis"<<endl;
		}
		operacion= seis*y;
		cout<<seis; cout<<"X"; cout<<y; cout<<"="; cout<<operacion<<endl;
		if(y==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int u=1; u<=12; u++){
		if(u==1){
			cout<<"Tabla del siete"<<endl;
		}
		operacion= siete*u;
		cout<<siete; cout<<"X"; cout<<u; cout<<"="; cout<<operacion<<endl;
		if(u==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int i=1; i<=12; i++){
		if(i==1){
			cout<<"Tabla del ocho"<<endl;
		}
		operacion= ocho*i;
		cout<<ocho; cout<<"X"; cout<<i; cout<<"="; cout<<operacion<<endl;
		if(i==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int o=1; o<=12; o++){
		if(o==1){
			cout<<"Tabla del nueve"<<endl;
		}
		operacion= nueve*o;
		cout<<nueve; cout<<"X"; cout<<o; cout<<"="; cout<<operacion<<endl;
		if(o==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int p=1; p<=12; p++){
		if(p==1){
			cout<<"Tabla del diez"<<endl;
		}
		operacion= diez*p;
		cout<<diez; cout<<"X"; cout<<p; cout<<"="; cout<<operacion<<endl;
		if(p==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int a=1; a<=12; a++){
		if(a==1){
			cout<<"Tabla del once"<<endl;
		}
		operacion= once*a;
		cout<<once; cout<<"X"; cout<<a; cout<<"="; cout<<operacion<<endl;
		if(a==12){
			cout<<""<<endl;
			cout<<""<<endl;
		}
	}
	for(int s=1; s<=12; s++){
		if(s==1){
			cout<<"Tabla del doce"<<endl;
		}
		operacion= doce*s;
		cout<<doce; cout<<"X"; cout<<s; cout<<"="; cout<<operacion<<endl;
		if(s==12){
			cout<<"Fin de las tablas";
		}
	}
	
}

//int main(){
//	int unof=1;
//	
//	Todatabla fin1(unof);
//	fin1.operacion();
//	
//	
//	
//	return 0;
//}

