///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n, pos, i, tope;
    pos=0;
    cout<<"INGRESE LA CANTIDAD DE NUMEROS A ANALIZAR: ";
    cin>>tope;
    for(i=1;i<=tope;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>n;
        if(n>0){
            pos=pos+1;///pos++;///pos+=1
        }
    }
	cout<<"POSITIVOS: "<<pos;
	cout<<endl;
	system("pause");
	return 0;
}
