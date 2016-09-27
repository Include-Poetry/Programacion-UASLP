/*input
5
1 3 5 3 9
*/
#include <iostream>
using namespace std;

void Media(){
	int n;
	float x, y=0;

	cout << "Cantidad de numeros a ingresar: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		y += x;
	}
	y /= n;
	cout << "La media es: " << y;
}

int main(){
	Media();
	return 0;
}