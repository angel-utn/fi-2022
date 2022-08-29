/**
Un negocio tiene registradas las ventas del mes de julio. Por cada
una de ellas emiti� un ticket con los siguientes datos:

- D�a
- Importe

El fin de la carga de los datos se indica con un valor de d�a igual a 0.

A) Calcular e informar la recaudaci�n (suma de todas las ventas)
en cada uno de los d�as del mes.
*/

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float recaudacion[31] = {};
    int dia, i;
    float importe;

    cout << "Dia: ";
    cin >> dia;
    while(dia != 0){
        cout << "Importe: $";
        cin >> importe;
        recaudacion[dia-1] = recaudacion[dia-1] + importe;
        cout << "Dia: ";
        cin >> dia;
    }
    cout << endl << "Recaudacion diario del mes de Julio: " << endl;
    for(i=0; i<31; i++){
        cout << i+1 << "   $ " << recaudacion[i] << endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
