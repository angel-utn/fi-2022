///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    const int TAM=5;
    ///carga del vector
    int v[TAM], maximo, posMax=0, i;
    for(i=0;i<TAM;i++){
        cout<<"NUMERO: ";
        cin>>v[i];
    }
    ///búsqueda del máxixmo
    maximo=v[0];
    for(i=1;i<TAM;i++){
        if(v[i]>maximo){
            maximo=v[i];
            posMax=i;
        }
    }
    cout<<"MAXIMO: "<<v[posMax]<<" POSICION: "<<posMax<<endl;
    ///desplazar todos los elementos pisando el máximo
    for(i=posMax;i<TAM-1;i++){
        v[i]=v[i+1];
    }

    ///mostrar como quedo el vector
    for(i=0;i<TAM-1;i++){
        cout<<v[i]<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
