///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*
Dados dos números calcular:

* la suma si luego de los números se ingresa un 1
* la multiplicación si luego de los números se ingresa un 2
*/
int main(){
    int var=3, n1,n2, resultado, i;
    bool correcto;
    while(var!=0){
        correcto=true;
        cout<<"NUMERO: ";
        cin>>n1;
        cout<<"NUMERO: ";
        cin>>n2;
        cout<<"PARA CALCULAR LA SUMA INGRESE UN 1"<<endl;
        cout<<"PARA CALCULAR EL PRODUCTO INGRESE UN 2"<<endl;
        cout<<"PARA TERMINAR EL PROGRAMA INGRESE UN 0"<<endl;
        cin>>var;
        switch(var){
            case 1: resultado=n1+n2;
                    break;
            case 2: resultado=n1*n2;
                    break;
            default:cout<<"NO SE INGRESO NI 1 NI 2"<<endl;
                    correcto=false;
                    break;
        }
        if(correcto==true){
            cout<<"RESULTADO DE LA OPERACION: "<<resultado;
        }

        cout<<endl;
        system("pause");
        system("cls");
    }
	return 0;
}
