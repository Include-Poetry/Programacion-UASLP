#include <iostream>
using namespace std;

void Media(){
	int n;
	float x, y=0;

	cout << "Calculadora de promedio o media" << endl
		 << "Cantidad de numeros a ingresar: ";
	cin >> n;
	cout << "Ingresa los " << n << " numeros" << endl;
	for (int i = 0; i < n; i++){
		cin >> x;
		y += x;
	}
	y /= n;
	cout << "La media es: " << y;
}

int main(){
	Media();
}
