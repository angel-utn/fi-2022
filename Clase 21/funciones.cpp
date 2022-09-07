///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:
# include<iostream>
# include<cstdlib>
using namespace std;

/// Definición de la función
int sumar(int a, int b){
    int res;
    res = a + b;
    return res;
}

int main(){
    int n1, n2, resultado;

    cout << "Ingresar dos numeros: ";
    cin >> n1;
    cin >> n2;

    resultado = sumar(n1, n2);

    cout << "Resultado: " << resultado;

    cout << endl << sumar(10, sumar(50, 50));

	cout<<endl;
	system("pause");
	return 0;
}
