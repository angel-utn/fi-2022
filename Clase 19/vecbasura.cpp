# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int vec[5] = {}; /// Inicializa todo el vector con valores en 0
    int otrovector[5]; /// Vector no inicializado (con basura)
    int i;

    cout << "Vector inicializado" << endl;
    for(i=0; i<5; i++){
        cout << vec[i] << endl;
    }

    cout << endl << "Vector con basura" << endl;
    for(i=0; i<5; i++){
        cout << otrovector[i] << endl;
    }

	cout<<endl;
	system("pause");
	return 0;
}
