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
int cartel(int param){
    if(param==1){
        cout<<"HOLA A TODOS/AS!!!!!";
        return 15;
    }
    if(param==2){
        cout<<"CHAU A TODOS/AS!!!!!";
        return 1;
    }
    return 0;
}

int main(){
    int valorDevuelto=cartel(1),var;
    if(valorDevuelto==0){
        cout<<"PARAMETRO INCORRECTO"<<endl;
    }
    cout<<endl<<"INGRESE UN VALOR PARA LLAMAR A LA FUNCION Cartel(): ";
    cin>>var;
    valorDevuelto=cartel(var);
    cout<<"VALOR DEVUELTO POR Cartel() "<<valorDevuelto<<endl;
    if(valorDevuelto==0){
        cout<<"PARAMETRO INCORRECTO"<<endl;
    }
    /*
    int vnum[5], i, maximo;
    ///cargar los n�meros
    for(i=0;i<5;i++){
        cout<<"NUMERO: ";
        cin>>vnum[i];
    }
    ///buscar el m�ximo
    maximo=vnum[0];
    for(i=1;i<5;i++){
        if(vnum[i]>maximo){
            maximo=vnum[i];
        }
    }
    cout<<"VALOR MAXIMO: "<<maximo<<endl;
    ///mostrar las posiciones de los n�meros iguales al m�ximo
	for(i=0;i<5;i++){
        if(vnum[i]==maximo){
            cout<<"POSICION DEL MAXIMO: "<<i+1<<endl;
        }
    }*/
	cout<<endl;
	system("pause");///funciones
	return 0;
}
