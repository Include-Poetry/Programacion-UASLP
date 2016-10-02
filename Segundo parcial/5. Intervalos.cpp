#include <iostream>
using namespace std;

void Intervalos(){
	int n, m, o;
	cout << "Serie por intervalos con limites definidos" << endl
		 << "Ingrese el rango de la serie, separando los argumentos por un espacio: ";
	cin >> n >> m;
	cout << "Ingrese el intervalo de la serie: ";
	cin >> o;
	cout << "La serie es:" << endl;

	for (int i = n; i <= m; i+=o){
		cout << i << " ";
	}
	for (int i = m; i <= n; i+=o){
		cout << i << " ";
	}
}

int main(){
	Intervalos();
}