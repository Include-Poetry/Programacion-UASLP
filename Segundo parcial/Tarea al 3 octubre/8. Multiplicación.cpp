#include <iostream>
using namespace std;

void Multiplicacion(){
	int a, b;
	cout << "Multiplicacion desarrollada" << endl
		 << "Ingresa dos numeros a multiplicar separados por un espacio: ";
	cin >> a >> b;
	cout << a << " x " << b << " = ";
	for(int i = 0; i < a; i++){
		cout << b;
		if (i < a-1) cout << " x ";
	}
	cout << endl << "O tambien si lo prefieres: " << endl
		 << a << " x " << b << " = ";
	for(int i = 0; i < b; i++){
		cout << a;
		if (i < b-1) cout << " x ";
	}
}

int main(){
	Multiplicacion();
}