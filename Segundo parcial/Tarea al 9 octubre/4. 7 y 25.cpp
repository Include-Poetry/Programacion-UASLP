#include <iostream>
using namespace std;

void Siete25(){
    int t = 1;
    int n = 0;
    cout << "Divisible por 7 o sumatoria menor a 25" << endl
         << "El programa se detiene hasta que:" << endl
         << " - El numero ingresado sea divisible por 7" << endl
         << " - La sumatoria de numeros ingresados sea mayor a 25" << endl;
    while (t%7 != 0 && n <= 25){
        cin >> t;
        n += t;
    }
    cout << "Fin del programa" << endl
         << "La sumatoria es: " << n;
}

int main(){
    Siete25();
    return 0;
}
