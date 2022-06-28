/**Ejercicio:
36)Se ingresan los datos con la producción de los operarios de una empresa en el
último mes.
Cada registro contiene:
- Nro. de operario (1 a 20)
- Sector donde trabaja (1, 2, 3)
- Total de piezas defectuosas
- Total de piezas no defectuosas
Existe un total de 20 registros (uno para cada operario). Cada operario trabaja en
alguno de los tres sectores 1, 2 ó 3.
Se pide determinar e informar:
a) Para cada uno de los 3 sectores cual fue el operario que obtuvo mayor cantidad de
piezas defectuosas.

Sector 1 - Empleado 10
Sector 2 - Empleado 20
Sector 3 - Empleado 5


b) El sector cuyos empleados totalizaron mayor porcentaje de piezas defectuosas,
sobre el total de piezas fabricadas por el sector.

*/
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, nro, cd, cnd, sector;

    /// A
    int max_1=0, max_2=0, max_3=0, nroe_1, nroe_2, nroe_3;

    for(i=1; i<=5; i++){
        cout << "Empledo: ";
        cin >> nro;
        cout << "Sector: ";
        cin >> sector;
        cout << "Defectuosas: ";
        cin >> cd;
        cout << "No defectuosas: ";
        cin >> cnd;

        switch(sector){
            case 1:
                if (cd > max_1){
                    max_1 = cd;
                    nroe_1 = nro;
                }
            break;
            case 2:
                if (cd > max_2){
                    max_2 = cd;
                    nroe_2 = nro;
                }
            break;
            case 3:
                if (cd > max_3){
                    max_3 = cd;
                    nroe_3 = nro;
                }
            break;
        }


    }

    cout << endl << endl << "Punto A" << endl;
    cout << "Sector 1 - ";
    if (max_1 > 0){
        cout << "Empleado " << nroe_1 << endl;
    }
    else{
        cout << "No hubo piezas defectuosas" << endl;
    }
    cout << "Sector 2 - ";
    if (max_2 > 0){
        cout << "Empleado " << nroe_2 << endl;
    }
    else{
        cout << "No hubo piezas defectuosas" << endl;
    }
    cout << "Sector 3 - ";
    if (max_3 > 0){
        cout << "Empleado " << nroe_3 << endl;
    }
    else{
        cout << "No hubo piezas defectuosas" << endl;
    }


	cout<<endl;
	system("pause");
	return 0;
}
