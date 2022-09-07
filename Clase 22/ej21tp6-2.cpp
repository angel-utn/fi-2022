///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///datos de entrada
/*
- 2 conjuntos de datos a procesar.
        Número de empleado  Valor por hora
        Número de empleado  Cantidad de horas*/
///salida

int main(){
    const int TAM=5;
    int numeroEmpleado,i, horas;
    float vValorHora[TAM], sueldo, montoHora,vSueldo[TAM]={0};
	for(i=1;i<=TAM;i++){
        cout<<"NUMERO DE EMPLEADO: ";
        cin>>numeroEmpleado;
        cout<<"VALOR DE LA HORA PARA EL EMPLEADO: ";
        cin>>montoHora;
        vValorHora[numeroEmpleado-1]=montoHora;
	}
	///cargar lote 2 con horas
	system("cls");
	cout<<"CARGA DE HORAS TRABAJADAS"<<endl;
    cout<<"NUMERO DE EMPLEADO: ";
    cin>>numeroEmpleado;
    while(numeroEmpleado!=0){
        cout<<"CANTIDAD DE HORAS TRABAJADAS: ";
        cin>>horas;
        sueldo=horas*vValorHora[numeroEmpleado-1];
        vSueldo[numeroEmpleado-1]=sueldo;
        cout<<"NUMERO DE EMPLEADO: ";
        cin>>numeroEmpleado;
    }
    for(i=0;i<TAM;i++){
        if(vSueldo[i]!=0){
            cout<<"EMPLEADO: "<<i+1<<" SUELDO: "<<vSueldo[i]<<endl;
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
