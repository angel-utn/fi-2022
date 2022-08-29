///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, dia;
    float vRec[31]={0}, importe;
    cout<<"DIA";
    cin>>dia;
    while(dia!=0){
        cout<<"IMPORTE: ";
        cin>>importe;
        vRec[dia-1]=vRec[dia-1]+importe;
        cout<<"DIA";
        cin>>dia;
    }

     for(i=0;i<31;i++){
        cout<<"DIA: "<<i+1<<" RECAUDACION: "<<vRec[i]<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
