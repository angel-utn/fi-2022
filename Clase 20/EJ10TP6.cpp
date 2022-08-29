
#include<iostream>
using namespace std;
int main() {
	int cant;
	int i;
	int numero;
	int vnumeros[100];
	cant = 0;
	cout << "Ingrese Numero: " << endl;
	cin >> numero;
	while ((numero!=0) && (cant<100)) {
		vnumeros[cant] = numero;
		cant = cant+1;
		cout << "Ingrese Numero: " << endl;
		cin >> numero;
	}
	for (i=0;i<=cant-1;i++) {
		cout << vnumeros[i] << endl;
	}
	return 0;
}

