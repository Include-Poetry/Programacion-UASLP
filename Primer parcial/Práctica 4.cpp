// Práctica 4 - Cajero automatico
// Ricardo Velázquez Contreras
#include <iostream>
using namespace std;

void convierte(){
    int n;
    cout << "Cajero automatico." << endl
         << "Ingresa la cantidad a convertir" << endl;
    cin >> n;
    cout << "La salida de dinero seria:" << endl
         << (n/500) << " billetes de 500" << endl
         << (n%500)/200 << " billetes de 200" << endl
         << ((n%500)%200)/100 << " billetes de 100" << endl
         << (((n%500)%200)%100)/50 << " billetes de 50" << endl
         << ((((n%500)%200)%100)%50)/20 << " billetes de 20" << endl
         << (((((n%500)%200)%100)%50)%20)/10 << " monedas de 10" << endl
         << ((((((n%500)%200)%100)%50)%20)%10)/5 << " monedas de 5" << endl
         << (((((((n%500)%200)%100)%50)%20)%10)%5)/2 << " monedasde 2" << endl
         << (((((((n%500)%200)%100)%50)%20)%10)%5)%2 << " monedas de 1" << endl;
}

int main(){
    convierte();
    return 0;
}