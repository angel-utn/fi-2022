///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int vnum[5], i, maximo;
    ///cargar los números
    for(i=0;i<5;i++){
        cout<<"NUMERO: ";
        cin>>vnum[i];
    }
    ///buscar el máximo
    maximo=vnum[0];
    for(i=1;i<5;i++){
        if(vnum[i]>maximo){
            maximo=vnum[i];
        }
    }
    cout<<"VALOR MAXIMO: "<<maximo<<endl;
    ///mostrar las posiciones de los números iguales al máximo
	for(i=0;i<5;i++){
        if(vnum[i]==maximo){
            cout<<"POSICION DEL MAXIMO: "<<i+1<<endl;
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
