// Práctica 7 - Operaciones con dos números
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void funcion(){
    double a, b;
    char c;
    cout << "Calculadora sencilla" << endl
         << "Ingresa dos valores numericos a operar" << endl;
    cin >> a >> b;
    cout << "Ingresa el simbolo de la operacion que quieres realizar" << endl
         << "Como +, -, /, *, %" << endl
         << "Considera que se devuelve el valor de tu primer dato operando por el segundo" << endl;
    cin >> c;
    int A=a, B=b;
    if (c == '+') cout << "La suma es igual a: " << a+b << endl;
    else if (c == '-') cout << "La resta es igual a: " << a-b << endl;
         else if (c == '/') cout << "La division es igual a: " << a/b << endl;
              else if (c == '*') cout << "La multiplicacion es igual a: " << a*b << endl;
                   else if (c == '%') cout << "El modulo es igual a: " << A%B << endl;
                        else cout << "No ingresaste una operacion valida" << endl;
}

int main(){
    funcion();
    return 0;
}