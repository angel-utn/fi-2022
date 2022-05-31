///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n, suma=0, cantCeros=0;
    bool seguir=true;
    while(seguir==true){
        cout<<"NUMERO: ";
        cin>>n;
        suma=suma+n;
        if(n==0){
            cantCeros++;
            if(cantCeros==2){
                seguir=false;
            }
        }
    }
	cout<<"SUMA: "<<suma;
	cout<<endl;
	system("pause");
	return 0;
}
