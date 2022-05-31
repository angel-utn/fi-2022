///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int edad, emax=0;
    cout<<"EDAD: ";
    cin>>edad;
    while(edad!=0){
        if(edad>emax){
            emax=edad;
        }
        cout<<"EDAD: ";
        //cin>>edad;
    }
    cout<<"EDAD MAXIMA: "<<emax;
	cout<<endl;
	system("pause");
	return 0;
}
