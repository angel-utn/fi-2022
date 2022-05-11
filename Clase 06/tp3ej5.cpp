///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, i, tope;
    cout<<"INGRESE LA CANTIDAD DE NUMEROS A ANALIZAR: ";
    cin>>tope;
    system("cls");
    for(i=1;i<=tope;i++){
        cout<<"NUMERO: ";
        cin>>num;
        if(num>=5){
            cout<<num<<endl;
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
