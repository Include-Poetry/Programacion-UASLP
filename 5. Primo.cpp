#include <iostream>
using namespace std;

void Primo(){
    int p, n=2;
    cout << "Evaluacion de numero primo" << endl
         << "Ingresa un numero a evaluar: ";
    cin >> p;
    int b = 0;
    while (n < p){
        if (p%n == 0)
            b=1;
        n++;
    }
    if (b == 1) cout << "No es primo";
    else cout << "Es primo";
}

int main(){
    Primo();
    return 0;
}
