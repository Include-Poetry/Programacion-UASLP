#include <iostream>
using namespace std;

void TablaMultiplicar(){
	int n;
	cout << "Tabla de multiplicar" << endl
		 << "Ingrese el numero del que se mostrara la tabla: ";
	cin >> n;
	for(int i = 1; i < 11; i++){
		cout << n << " x " << i << " = " << n*i << endl;
	}
}

int main(){
	TablaMultiplicar();
}