///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

///informar el tipo de ruta con mayor cantidad de rutas

using namespace std;

void mostrarTipos(int v[], int tam){
	int i;
	for(i=0;i<tam;i++){
        cout<<"TIPO: "<<" CANTIDAD DE RUTAS: "<<v[i]<<endl;
	}
}

int buscarMaximo(int v[], int tam){
	int i;
	int maxValor=v[0], posMax=0;

	for(i=1;i<tam;i++){
        if(v[i]>maxValor){
            maxValor=v[i];
            posMax=i;
        }
	}
	return posMax;
}

int main(){
    const int CANT=5;
    int ruta, co, cf, tipo, peaje, i;
    float km;
    ///punto a
    int  maxRuta,maxCo, maxCf;
    float maxKm=0;
    ///punto b
    int conPeaje=0;
    float porcentaje;
    ///punto c
    int vecTipo[5]={0};
    ///punto d
    int tipoMax;

    for(i=1;i<=CANT;i++){
        cout<<"RUTA ";
        cin>>ruta;
        cout<<"CIUDAD ORIGEN ";
        cin>>co;
        cout<<"CIUDAD DE FIN ";
        cin>>cf;
        cout<<"LONGITUD ";
        cin>>km;
        cout<<"TIPO ";
        cin>>tipo;
        cout<<"TIENE PEAJE? ";
        cin>>peaje;
        ///
        if(km>maxKm){
            maxKm=km;
            maxRuta=ruta;
            maxCo=co;
            maxCf=cf;
        }
        if(peaje==1){
            conPeaje++;
        }
        vecTipo[tipo-1]++;
    }
    cout<<endl;
    ///punto a
    cout<<"RUTA MAS LARGA: "<<maxRuta<<" CIUDAD DE ORIGEN: "<<maxCo<<" CIUDAD DE FIN: "<<maxCf;
	cout<<endl<<endl;
	porcentaje=(float)conPeaje/CANT*100;
	cout<<"PORCENTAJE DE RUTAS CON PEAJE: "<<porcentaje<<endl<<endl;
	mostrarTipos(vecTipo, 5);
	cout<<endl;
	tipoMax=buscarMaximo(vecTipo, 5)+1;
	cout<<"HAY MAYOR CANTIDAD DE RUTAS DE TIPO: "<<tipoMax<<endl;
	system("pause");
	return 0;
}
