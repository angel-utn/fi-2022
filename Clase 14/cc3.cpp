///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int curso, edad, eMax;
    cout<<"CURSO: ";
    cin>>curso;
    while(curso>=0){
        cout<<"EDAD: ";
        cin>>edad;
        eMax=0;
        while(edad!=0){
            if(edad>eMax){
                eMax=edad;
            }
            cout<<"EDAD: ";
            cin>>edad;
        }
        cout<<"PARA EL CURSO: "<<curso<<endl;
        cout<<"LA EDAD MAXIMA ES: "<<eMax<<endl;
        system("pause");
        system("cls");
        cout<<"CURSO: ";
        cin>>curso;
    }
	cout<<endl;
	system("pause");
	return 0;
}
