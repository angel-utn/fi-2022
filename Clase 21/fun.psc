Algoritmo principal
	DIMENSION vNumeros[5]
	CargarVector(vNumeros, 5)
	MostrarVector(vNumeros, 5)
	Maximo = MaximoVector(vNumeros, 5)
	MostrarPosiciones(vNumeros, 5, Maximo)
	Escribir "Maximo: ", Maximo
FinAlgoritmo

Funcion CargarVector(Vec, Tam)
	Para I<-0 Hasta Tam-1 Con Paso 1 Hacer
		Escribir "ingrese el #", I, " numero: "
		Leer Vec[I]
	FinPara
FinFuncion

Funcion MostrarVector(Vec, Tam)
	Para I<-0 Hasta Tam-1 Con Paso 1 Hacer
		Escribir "Numero #", I, ": ", Vec[I]
	FinPara
FinFuncion

Funcion Max = MaximoVector(Vec, Tam)
	Max = Vec[0]
	Para I<-1 Hasta tam-1 Con Paso 1 Hacer
		Si Vec[I] > Max Entonces
			Max = Vec[I]
		FinSi
	FinPara
FinFuncion

Funcion MostrarPosiciones(Vec, Tam, ValorBuscado)
	Para I<-0 Hasta Tam-1 Con Paso 1 Hacer
		Si Vec[I] == ValorBuscado Entonces
			Escribir I+1
		FinSi
	FinPara
FinFuncion
