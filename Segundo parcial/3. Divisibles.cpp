#include <iostream>
using namespace std;

void NumerosDivisibles(){
	cout << "Numeros divisibles entre 2 y 3" << endl
		 << "Mayores o iguales a 1 y menores o iguales a 200" << endl;
	for(int i = 1; i < 201; i++){
		if (i%2 == 0 || i%3 == 0){
			cout << i << " es divisible entre 2 o 3" << endl;
		}
	}

}

int main(){
	NumerosDivisibles();
	return 0;
}