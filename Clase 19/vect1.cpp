///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int CANTIDAD=10;
    int vEdades[CANTIDAD], i, suma=0, cuentaMayores=0, menoresA20=0;
    float promedio;
    for(i=0;i<CANTIDAD;i++){
        cout<<"NUMERO: ";
        cin>>vEdades[i];
    }

    for(i=0;i<CANTIDAD;i++){
        suma=suma+vEdades[i];
    }
    promedio=(float)suma/CANTIDAD;

    for(i=0;i<CANTIDAD;i++){
        if(vEdades[i]>promedio){
            cuentaMayores++;
        }
    }
    for(i=0;i<CANTIDAD;i++){
        if(vEdades[i]<20){
            menoresA20++;
        }
    }

    cout<<"CANTIDAD DE EDADES MAYORES AL PROMEDIO: "<<cuentaMayores<<endl;
	cout<<"CANTIDAD DE ALUMNOS MENORES A 20 AÑOS: "<<menoresA20;
	cout<<endl;
	system("pause");
	return 0;
}
