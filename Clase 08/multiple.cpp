///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*
Dados dos numeros hacer las siguietes operaciones
* sumarlos si se ingresa el valor 1 luego de los 2 números
* multiplicarlos si se ingresa el valor 2
*/
int main(){
    int var, n1, n2, resultado, i;
    var=5;
    while(var!=0){
        cout<<"NUMERO: ";
        cin>>n1;
        cout<<"NUMERO: ";
        cin>>n2;
        cout<<"SI QUIERE SUMAR LOS NUMEROS INGRESE 1"<<endl;
        cout<<"SI QUIERE MULTIPLICAR LOS NUMEROS INGRESE 2"<<endl;
        cout<<"SI QUIERE SALIR DEL PROGRAMA INGRESE 0"<<endl;
        cin>>var;
        switch(var){
                case 1: resultado=n1+n2;
                        break;
                case 2: resultado=n1*n2;
                        break;
        }
        cout<<"RESULTADO DE LA OPERACION: "<<resultado;
        cout<<endl;
        system("pause");
        system("cls");
    }
	return 0;
}
