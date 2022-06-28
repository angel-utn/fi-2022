///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, cpos=0, cneg=0;
    int minPos,maxNeg;
    for(i=1;i<20;i++)
        cin>>num
        if(num>0){
            cpos++;
            if(cpos==1){
                minPos=num;
            }
            ///acá se debería poner el else para seguir comparando
        }
        else{
            if(num<0){
               cneg++;
               if(cneg==1){
                    maxNeg=num;
               }


            }
        }

    }
    if(cneg==0) cout<<"NO HUBO NEGATIVOS";
	cout<<endl;
	system("pause");
	return 0;
}
