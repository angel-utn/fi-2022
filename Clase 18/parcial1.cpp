///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int DIAS=2;
    const int VEHICULOS=5;
    int patente, dia, kmi, kmf, tipo, importe;
    int i, j, tipo1=0, tipo2=0;
    float por1, por2;
    int totalKm=0, km;
    int recaudacion=0, precio;
    ///punto d
    bool primero=true;
    int kMin=99999, patenteMin;

    for(i=1; i<=DIAS;i++){
            for(j=1;j<=VEHICULOS;j++){
                cin>>dia;
                cin>>patente;
                cin>>tipo;
                cin>>kmi;
                cin>>kmf;
                km=kmf-kmi;
                if(tipo==1){
                    tipo1++;
                    precio=60;
                }
                else{
                    tipo2++;
                    precio=90;
                }
                totalKm=totalKm+km;
                ///punto c
                if(dia==15){
                    importe=precio*km;
                    recaudacion+=importe;
                }
                ///punto d
                if(primero==true){
                    kMin=km;
                    patenteMin=patente;
                    primero=false;
                }
                if(km<kMin){
                    patenteMin=patente;
                    kMin=km;
                }
            }
    }
    system("cls");
    cout<<"punto a";
    por1=(float)tipo1/(tipo1+tipo2)*100;
    por2=(float)tipo2/(tipo1+tipo2)*100;
    cout<<por1<<"\t"<<por2<<endl;
    cout<<"punto b "<<totalKm<<endl;
    cout<<"punto c "<<recaudacion<<endl;
    cout<<"punto d "<<patenteMin;
	cout<<endl;
	system("pause");
	return 0;
}

