#include <iostream>
using namespace std;
class Numahexa{
	private: int decimal;
	public:
		Numahexa(int);
		void resultado();
		
};
Numahexa::Numahexa(int decimals){
	decimal=decimals;
}
void Numahexa::resultado(){
	int digito[20];
	int residuo,resultado,i = 0;
	cout<<"Ingresa el numero a convertir en hexadecimal: ";
	cin>>decimal;
    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digito[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digito[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digito[j] == 10)
        {
            cout << "A";
        }
        else if (digito[j] == 11)
        {
            cout << "B";
        }
        else if (digito[j] == 12)
        {
            cout << "C";
        }
        else if (digito[j] == 13)
        {
            cout << "D";
        }
        else if (digito[j] == 14)
        {
            cout << "E";
        }
        else if (digito[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digito[j];
        }   
    }	
	cout<<endl;
}

//int main(){
//	int final;
//	Numahexa probando(final);
//	probando.resultado();
//	
//}7
