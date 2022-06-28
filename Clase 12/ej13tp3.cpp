///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, maximo, posmax;
    for(i=1;i<=5;i++){
        cout<<"NUMERO: ";
        cin>>num;
        if(i==1){
            maximo=num;
            posmax=1;
        }
        else{
            if(num>maximo){
                maximo=num;
                posmax=i;
            }
        }
    }
	cout<<"MAXIMO "<<maximo<<" QUE SE INGRESO EN LA POSICION "<<posmax;
	cout<<endl;
	system("pause");
	return 0;
}
