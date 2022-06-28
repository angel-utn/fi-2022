///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i;
    int op, sector, pd, pnd;

    int op1,  op2, op3;
    int maxd1, maxd2,maxd3;

    maxd1=maxd2=maxd3=0;

    for(i=1;i<=5;i++){
        cout<<"OPERARIO: ";
        cin>>op;
        cout<<"SECTOR: ";
        cin>>sector;
        cout<<"PIEZAS DEFECTUOSAS: ";
        cin>>pd;
        cout<<"PIEZAS NO DEFECTUOSAS: ";
        cin>>pnd;
        switch(sector){
            case 1: if(pd>maxd1){
                            maxd1=pd;
                            op1=op;
                    }
                    break;
            case 2:if(pd>maxd2){
                            maxd2=pd;
                            op2=op;
                    }
                    break;
            case 3:if(pd>maxd3){
                            maxd3=pd;
                            op3=op;
                    }
                    break;
        }
    }
	cout<<"SECTOR 1 OPERARIO CON MAS PIEZAS DEFECTUOSAS: "<<op1<<endl;
	cout<<"SECTOR 1 OPERARIO CON MAS PIEZAS DEFECTUOSAS: "<<op2<<endl;
	cout<<"SECTOR 1 OPERARIO CON MAS PIEZAS DEFECTUOSAS: "<<op3<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
