#include<iostream>
using namespace std;
int main() {
	int i;
	int v1[15];
	int v2[15];
	for (i=0;i<=14;i++) {
		cout << "Ingrese valor: " << endl;
		cin >> v1[i];
	}
	for (i=0;i<=14;i++) {
		v2[i] = v1[14-i];
	}
	for (i=0;i<=14;i++) {
		cout << v2[i] << endl;
	}
	return 0;
}

