///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, estatura, peso , edad;
    float x, xMin, xMax;
    for(i=1;i<=3;i++){
        cout<<"ESTATURA: ";
        cin>>estatura;
        cout<<"PESO: ";
        cin>>peso;
        cout<<"EDAD: ";
        cin>>edad;
        x=(float)(estatura-peso)/100;

        if(edad<=20){
            xMin=1.1;
            xMax=0.9;
        }
        else{
            if(edad<=30){
                xMin=1.15;
                xMax=0.85;
            }
            else{
                if(edad<=40){
                    xMin=1.1;
                    xMax=0.8;
                }
                else{
                    xMin=1.1;
                    xMax=0.75;
                }
            }
        }

        if(x<=xMin && x>=xMax){
            cout<<"PESO NORMAL"<<endl;
        }
        else{
            if(x>xMin){
                cout<<"PESO BAJO";
            }
            else{
                cout<<"PESO ALTO";
            }
        }
        cout<<endl;
        system("pause");
    }
	return 0;
}
