/**
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos.

Por cada comanda se registró:
- Número de comanda
- Número de mozo (entero)
- Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
- Importe (float)

La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas. Para indicar el fin de la carga de datos se registra un Número de mozo negativo.
Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El número de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.

*/
#include <iostream>
using namespace std;

int main(){
    const int REGS = 4;
    int mozo, comanda, tipoplato, i;
    float importe;

    /// A
    int cant_pp, cant_e, cant_po;

    cout << "Mozo: ";
    cin >> mozo;

    while (mozo >= 0){

        cant_pp = cant_e = cant_po = 0;

        for(i=1; i<=4; i++){

            cout << "Comanda: ";
            cin >> comanda;
            cout << "Tipo de plato: ";
            cin >> tipoplato;
            cout << "Importe: $";
            cin >> importe;

            switch(tipoplato){
                case 1:
                    cant_e++;
                break;
                case 2:
                    cant_pp++;
                break;
                case 3:
                    cant_po++;
                break;
            }
        }
        cout << endl << "PUNTO A" << endl;
        cout << "Entrada: " << cant_e << endl;
        cout << "Plato principal: " << cant_pp << endl;
        cout << "Postre: " << cant_po << endl;

       cout << "Mozo: ";
       cin >> mozo;
    }
    return 0;
}
