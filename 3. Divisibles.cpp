#include <iostream>
using namespace std;

void Divisibles(){
    int n = 0, t;
    cout << "Numeros divisibles por 3 y 6" << endl
         << "El programa se detiene hasta que la suma de los divisibles sea mayor a 30" << endl;
    while (n <= 30){
        cin >> t;
        if (t%3 == 0 && t%6 == 0)
            n+=t;
    }
    cout << "Suma final de divisibles: " << n;
}

int main(){
    Divisibles();
    return 0;
}
