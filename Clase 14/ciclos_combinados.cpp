# include<iostream>
# include<cstdlib>
using namespace std;

int main(){
    const int CURSOS = 3;
    const int ALUMNOS = 4;
    int i, j, edad, edadMaxima, nrocurso, edadMaximaGeneral=0;

    for(i=1; i<=CURSOS; i++){
        cout << endl << "Curso: ";
        cin >> nrocurso;
        edadMaxima = 0;
        for(j=1; j<=ALUMNOS; j++){
            cout << "Ingresar edad del alumno: ";
            cin >> edad;
            if (edad > edadMaxima){
                edadMaxima = edad;
            }
        }
        if (edadMaxima > edadMaximaGeneral){
            edadMaximaGeneral = edadMaxima;
        }
        cout << endl << "La edad maxima es: " << edadMaxima << " del curso " << nrocurso << endl;
        system("pause");
    }
    cout << endl << endl;
    cout << "La edad maxima general es: " << edadMaximaGeneral;
	return 0;
}
