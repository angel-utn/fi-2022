///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int PATENTES=2;
    const int DIAS=5;
    int patente, dia, kmi, kmf, tipo, kmDiario;
	int i, j;
	///punto a
	bool noTrabajo;
	int sinTrabajo=0;
	///punto b
	int totalKm20=0;
	///punto c
	int totalRecaudacion=0, precioKm;
	///punto d
	int kmMax=0, totalKmMes, autoMax;
	for(i=1;i<=PATENTES;i++){
        noTrabajo=false;
        totalKmMes=0;
        for(j=1;j<=DIAS;j++){
            cin>>patente;
            cin>>dia;
            cin>>tipo;
            cin>>kmi;
            cin>>kmf;
            kmDiario=kmf-kmi;
            if(kmDiario==0){
                noTrabajo=true;
            }
            ///punto b
            if(dia==20){
                totalKm20=totalKm20+kmDiario;
            }
            ///punto c
            if(tipo==1){
                precioKm=60;
            }
            else{
                precioKm=90;
            }
            totalRecaudacion+=kmDiario*precioKm;
            ///punto d
            totalKmMes+=kmDiario;
        }
        if(noTrabajo==true){
            sinTrabajo++;
        }
        if(totalKmMes>kmMax){
            kmMax=totalKmMes;
            autoMax=patente;
        }
	}
	system("pause");
	system("cls");
	cout<<"punto a "<<sinTrabajo<<endl;
    cout<<"punto b "<<totalKm20<<endl;
	cout<<"punto c "<<totalRecaudacion<<endl;
    cout<<"punto d "<<autoMax;
	cout<<endl;
	system("pause");
	return 0;
}
