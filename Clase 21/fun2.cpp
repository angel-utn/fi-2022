///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

///FUNCIONES: fragmentos de c�digo identificados con un nombre que resuelven
/// un problema en particular.
///Las funciones se suelen agrupar en librer�as/bibliotecas que luego se
/// incorporan al c�digo
///Librer�as de funciones est�ndar.
///Cada programador puede hacer sus funciones

///desarrollo de la funci�n
    ///cargar los n�meros
void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"NUMERO: ";
        cin>>v[i];
    }
}

int maximoVector(int v[], int tam){
    int i, maximo=v[0];
    for(i=1;i<tam;i++){
        if(v[i]>maximo){
            maximo=v[i];
        }
    }
    return maximo;
}

int main(){
    int vnum[7], i, maximo;
    ///cargar los n�meros
    cargarVector(vnum, 7);
    ///buscar el m�ximo
    maximo=maximoVector(vnum, 7);
    cout<<"VALOR MAXIMO: "<<maximo<<endl;
    ///mostrar las posiciones de los n�meros iguales al m�ximo
	/*for(i=0;i<5;i++){
        if(vnum[i]==maximo){
            cout<<"POSICION DEL MAXIMO: "<<i+1<<endl;
        }
    }*/
	cout<<endl;
	system("pause");///funciones
	return 0;
}
