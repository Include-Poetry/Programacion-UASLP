// Práctica 6 - Números divisibles
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void funcion(){
    int a, b;
    cout << "Ingresa dos numeros a evaluar si son divisibles" << endl;
    cin >> a >> b;
    if ( !(a%b) || !(b%a) ) cout << "Si son divisibles" << endl;
    else cout << "No son divisibles" << endl;
}

int main(){
     funcion();
     return 0;
}