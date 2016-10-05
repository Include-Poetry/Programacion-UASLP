#include <iostream>
using namespace std;

void Caracteres(){
    char t = 'b';
    int n = 0;
    cout << "Conteo de vocales" << endl
         << "El programa se detiene hasta que se ingresa un '.'" << endl;
    while (t != '.'){
        cin >> t;
        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
            n++;
        if (t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')
            n++;
    }
    cout << "Vocales totales: " << n;
}

int main(){
    Caracteres();
    return 0;
}
