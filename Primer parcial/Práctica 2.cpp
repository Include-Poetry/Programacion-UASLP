// Práctica 2 - Formula general 1
// Ricardo Velázquez Contreras
#include <iostream> 
#include <cmath>
using namespace std;

void funcion(){
    float a, b, c, DeltaRes;
    cout << "Implementacion de formula general" << endl
         << "Ingresa los coeficientes de una funcion cuadratica separados por un espacio" << endl;
    cin >> a >> b >> c;
    
    DeltaRes = (b*b) - (4*a*b);
   
    float x1, x2;
    DeltaRes = sqrt(DeltaRes);
    x1 = (((0-b) + DeltaRes) / (2*a));
    x2 = (((0-b) + DeltaRes) / (2*a));
    cout << "Los resultados son" << endl
         << "x1 = " << x1 << ", x2 = " << x2;
}

int main(){
    funcion();
    return 0;
}
    
