///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n, suma=0, cantCeros=0;
    while(cantCeros<2){
        cout<<"NUMERO: ";
        cin>>n;
        suma=suma+n;
        if(n==0){
            cantCeros++;
        }
    }
	cout<<"SUMA: "<<suma;
	cout<<endl;
	system("pause");
	return 0;
}
