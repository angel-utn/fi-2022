///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int TAM=5;
    int i, numeroEmpleado, horas;
    float vValorHora[TAM], vh, sueldo, vSueldos[TAM]={0};
    ///PRIMER LOTE DE DATOS DE ENTRADA: NUMERO DE EMPLEADO Y VALOR HORA;
    for(i=1;i<=TAM;i++){
        cout<<"NUMERO DE EMPLEADO: ";
        cin>>numeroEmpleado;
        cout<<"VALOR DE LA HORA DE TRABAJO: ";
        cin>>vh;
        vValorHora[numeroEmpleado-1]=vh;
    }
    ///INGRESO DEL SEGUNDO LOTE (CANTIDAD DE HORAS Y NUMERO DE EMPLEADO) Y CALCULO DEL SUELDO
    system("cls");
    cout<<"CARGA DE LAS HORAS TRABAJADAS"<<endl;
    cout<<"NUMERO DE EMPLEADO: ";
    cin>>numeroEmpleado;
    while(numeroEmpleado!=0){
        cout<<"INGRESE LA CANTIDAD DE HORAS TRABAJADAS: ";
        cin>>horas;
        vSueldos[numeroEmpleado-1]=horas*vValorHora[numeroEmpleado-1];
        cout<<"NUMERO DE EMPLEADO: ";
        cin>>numeroEmpleado;
    }
    for(i=0;i<TAM;i++){
        if(vSueldos[i]!=0){
            cout<<"EMPLEADO: "<<i+1<<" SUELDO: "<<vSueldos[i]<<endl;
        }
    }

	cout<<endl;
	system("pause");
	return 0;
}
