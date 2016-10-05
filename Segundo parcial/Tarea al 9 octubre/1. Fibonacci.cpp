#include <iostream>
using namespace std;

void Fibonacci(){
    int n;
    cout << "Sucesion de Fibonacci" << endl
         << "Cantidad de terminos a mostrar: ";
    cin >> n;
    int a = 0, b = 1, c = 1;
    while(n--){
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    Fibonacci();
    return 0;
}
