/*
Ejercicio 5
--------------
Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 50000.-, más $1000.- de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un determinado vendedor y que luego calcule el sueldo total a pagarle al mismo (Sueldo fijo + Comisión Total) y emitirlo por pantalla.
Atención:
El programa solamente debe solicitar un solo dato: la cantidad de autos vendidos.
*/
#include <iostream>
using namespace std;

int main(){
    const int SUELDO_BASE = 50000;
    const int PREMIO = 1000;

    int autos, sueldo;
    cout << "Ingresar la cantidad de autos vendidos: ";
    cin >> autos;

    sueldo = SUELDO_BASE+(autos*PREMIO);
    cout << endl << endl;
    cout << "El sueldo es: $" << sueldo << " neto.";

    return 0;
}
