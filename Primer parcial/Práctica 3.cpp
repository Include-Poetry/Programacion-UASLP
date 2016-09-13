// Práctica 3 - Reloj
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void funcion(){
	int s, m, h;
    cout << "Conversion de tiempo a horas con minutos y segundos." << endl
         << "Ingresa la cantidad a convertir" << endl;
    cin >> s;
    h = s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;
    cout << "La conversion da como resultado" << endl
    	 << h << " horas, " << m << " minutos, " << s << " segundos." << endl;
}

int main(){
    funcion();
    return 0;
}