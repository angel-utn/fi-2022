///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

void cargarVector(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout << "Ingresar numero: ";
        cin >> vec[i];
    }
}

void mostrarVector(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout << vec[i] << endl;
    }
}

int maximoVector(int vec[], int tam){
    int i, m;
    m = vec[0];
    for(i=1; i<tam; i++)
    {
        if(vec[i] > m)
        {
            m = vec[i];
        }
    }
    return m;
}
void mostrarPosiciones(int vec[],int tam,int  valorbuscado)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vec[i]==valorbuscado)
        {
            cout<<i+1<<endl;
        }
    }
}

int main()
{
    int vnum[5], i, maximo, contPos=0;///0,1,2,3 y 4
    cargarVector(vnum, 5);
    maximo = maximoVector(vnum, 5);
    mostrarPosiciones(vnum, 5, maximo);
    if(a>b){

    }

/*
int vPos[5]={0};
///cargar el vector
for(i=0;i<5;i++){
cout<<"NUMERO: ";
cin>>vnum[i];
}
///calcular el máximo
maximo=vnum[0];
for(i=1;i<5;i++){
if(vnum[i]>maximo){
    maximo=vnum[i];
}
}
cout<<"EL MAXIMO VALOR ES: "<<maximo<<endl;
///mostrar las posiciones del máximo
cout<<"POSICION/ES DEL MAXIMO"<<endl;
for(i=0;i<5;i++){
if(vnum[i]==maximo){
    vPos[i]=1;
}
}


for(i=0;i<5;i++){
if(vPos[i]==1){
    cout<<i+1<<endl;
}
}

for(i=0;i<5;i++){
if(vnum[i]==maximo){
    vPos[contPos]=i+1;
    contPos++;
}
}
/**
i=0;
while(i<contPos){
cout<<vPos[i]<<endl;
i++;
}

for(i=0; i<contPos;i++){
cout<<vPos[i]<<endl;
}
*/
cout<<endl;
system("pause");
return 0;
}
