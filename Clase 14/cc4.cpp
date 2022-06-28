///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int curso, edad, eMax, cursoAnt;
    cout<<"CURSO: ";
    cin>>curso;
    cout<<"EDAD: ";
    cin>>edad;
    while(curso>=0){
        cursoAnt=curso;
        eMax=0;
        while(curso==cursoAnt){
            if(edad>eMax){
                eMax=edad;
            }
            cout<<"CURSO: ";
            cin>>curso;
            cout<<"EDAD: ";
            cin>>edad;
        }
        cout<<"PARA EL CURSO: "<<cursoAnt<<endl;
        cout<<"LA EDAD MAXIMA ES: "<<eMax<<endl;
        system("pause");
        system("cls");
    }
	cout<<endl;
	system("pause");
	return 0;
}
