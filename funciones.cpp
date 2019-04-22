#include "funciones.h"

void mostrarVector(vector<int> v, int largo){
	cout << "Vector: [";
	for(int i=0; i<largo; i++){
		if(i != largo-1)
			cout << v[i] << ", ";
		else
			cout << v[i] << "]\n\n";
	}
}

void quickSort(vector<int> &numeros, int limite_izq, int limite_der){
	int pivote = numeros[(limite_izq + limite_der)/2];
	int i = limite_izq;
	int j = limite_der;
	int aux;

	while(i<=j){
		while(numeros[i] < pivote)
			i++;
		while(numeros[j] > pivote)
			j--;
		//En este punto los límites están en la ubicación para ser intercambiados

		if(i <= j){
			aux = numeros[i];
			numeros[i] = numeros[j];
			numeros[j] = aux;
			i++;
			j--;
		}
	}

	if(limite_izq < j){
		quickSort(numeros, limite_izq, j);
	}

	if(i < limite_der){
		quickSort(numeros, i, limite_der);
	}
}
