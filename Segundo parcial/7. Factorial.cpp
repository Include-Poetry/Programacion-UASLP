/*input
5
*/
#include <iostream>
using namespace std;

void Factorial(){
	int n, r = 1;
	cout << "Factorial de un numero" << endl
		 << "Ingresa un numero a obtener el factorial: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		r *= i;
	}
	cout << "El factorial de " << n << " es: " << r;
}

int main(){
	Factorial();
	return 0;
}