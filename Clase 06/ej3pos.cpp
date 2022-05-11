///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n2;
    cout<<"INGRESE UN NUMERO: ";
    cin>>n3;
    if(n1>0 and n2>0 and n3>0){
        cout<<"HAY 3 POSITIVOS";
    }
    else{
        cout<<"NO HAY 3 POSITIVOS";
    }
	cout<<endl;
	system("pause");
	return 0;
}
