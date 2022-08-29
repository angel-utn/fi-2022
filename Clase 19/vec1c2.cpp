///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int vEdades[10], suma=0, i=0, mayoresAlPromedio=0;
    float promedio;

    /// Ingreso de datos (edades)
    cout << "Ingresar edades: " << endl;
    for(i=0; i<10; i++){
        cin >> vEdades[i];
    }

    /// Calcular el promedio de los datos (sumarlos y luego dividir por N)
    for(i=0; i<10; i++){
        suma = suma + vEdades[i];
    }
    promedio = suma / 10.0;

    /// Comparar y contar cada edad con el promedio anteriormente calculado
    for(i=0; i<10; i++){
        if (vEdades[i] > promedio){
            mayoresAlPromedio++;
        }
    }
    /// Listar la cantidad de edades mayores al promedio
    cout << endl << "Personas con edades mayores al promedio: " << mayoresAlPromedio << endl;
	cout<<endl;
	system("pause");
	return 0;
}
