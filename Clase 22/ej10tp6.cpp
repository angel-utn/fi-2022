///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, v[100], pos, i;
    pos=0;
    const int TAM=5;
    for(i=1;i<=TAM;i++){
        cout<<"NUMERO: ";
        cin>>num;
        if(num%3==0 && num%5!=0){
            v[pos]=num;
            pos++;
        }
    }
    for(i=0;i<pos;i++){
        cout<<v[i]<<endl;
    }

	cout<<endl;
	system("pause");
	return 0;
}
