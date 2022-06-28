# include<iostream>
# include<cstdlib>
using namespace std;

int main(){
    int edad, altura;
    float peso, x, xMin, xMax;

    cout << "Edad: ";
    cin >> edad;
    cout << "Altura: ";
    cin >> altura;
    cout<< "Peso: ";
    cin >> peso;

    x = (altura-peso)/100;

    if (edad <= 20){
        xMin = 0.9;
        xMax = 1.1;
    }
    else{
        if (edad <= 30){
            xMin = 0.85;
            xMax = 1.15;
        }
        else{
            if (edad <= 40){
                xMin = 0.8;
                xMax = 1.1;
            }
            else{
                xMin = 0.75;
                xMax = 1.1;
            }
        }
    }

    if (x >= xMin && x <= xMax){
        cout << "Peso normal";
    }
    else{
        if (x > xMax){
            cout << "Bajo peso";
        }
        else{
            if (x < xMin){
                cout << "Excedido";
            }
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
