// Práctica 1 - Intercambio de valores
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void funcion(){
    int a, b, c;
    cout << "Ingresa dos numeros enteros" << endl;
    cin >> a >> b;
    cout << "Con valores iniciales: " << endl
         << a << " " << b << endl;
    
    c = a;
    a = b;
    b = c;
    cout << "Con valores invertidos:" << endl
         << a << " " << b << endl;
}

int main(){
    funcion();
    return 0;
}