/*input
10
3 1 2 67 5 3 6 9 0 6
*/
#include <iostream>
using namespace std;

void ParImpar(){
	int n, t, P=0, I=0;
	cout << "Cantidad de numeros pares e impares" << endl
		 << "Ingrese la cantidad de numeros a evaluar: ";
	cin >> n;
	cout << "Ingrese los " << n << " numeros a evaluar separados por un espacio: " << endl;

	for(int i = 0; i < n; i++){
		cin >> t;
		if (t%2 == 0)
			P++;
		else I++;
	}
	cout << "Cantidad de numeros pares: " << P << endl
		 << "Cantidad de numeros impares: " << I;
}

int main(){
	ParImpar();
	return 0;
}