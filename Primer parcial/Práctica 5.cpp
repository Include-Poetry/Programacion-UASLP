// Práctica 5 - Mayor de tres números
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void funcion(){
    int a, b, c;
    cout << "Ingresa tres numeros para saber el mayor" << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c) cout << a << " es el mayor" << endl;
    if (b >= a && b >= c) cout << b << " es el mayor" << endl;
    if (c >= b && c >= a) cout << c << " es el mayor" << endl;
}

int main(){
    funcion();
    return 0;
}