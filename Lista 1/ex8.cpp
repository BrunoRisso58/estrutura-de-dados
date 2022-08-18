#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>

using namespace std;

int *ordemCrescente(int vetorUsuario, int vetorOrdenado);
int *orderDecrescente(int vetorUsuario);

int *ordemCrescente(int vetorUsuario[10], int vetorOrdenado[10]){
	int aux;
	for (int i = 0; i < 10; i++) {
		vetorOrdenado[i] = vetorUsuario[i];
	}
	for (int contador = 0; contador < 10; contador++) {
		for (int i = 0; i < 9; i++) {
			if (vetorOrdenado[i] > vetorOrdenado[i+1]) {
				aux = vetorOrdenado[i];
				vetorOrdenado[i] = vetorOrdenado[i+1];
				vetorOrdenado[i+1] = aux;
			}
		}
	}
	return vetorOrdenado;
}

int *ordemDecrescente(int vetorUsuario[10], int vetorOrdenado[10]){
	int aux;
	for (int i = 0; i < 10; i++) {
		vetorOrdenado[i] = vetorUsuario[i];
	}
	for (int contador = 0; contador < 10; contador++) {
		for (int i = 0; i < 9; i++) {
			if (vetorOrdenado[i] < vetorOrdenado[i+1]) {
				aux = vetorOrdenado[i];
				vetorOrdenado[i] = vetorOrdenado[i+1];
				vetorOrdenado[i+1] = aux;
			}
		}
	}
	return vetorOrdenado;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorUsuario[10], vetorOrdenado[10], opcao;
	
	for (int i = 0; i < 10; i++) {
		cout << "Digite o " << i+1 << "° valor: ";
		cin >> vetorUsuario[i];
	}
	
	cout << "Para ordenar de forma crescente, digite 1. Para ordenar de forma decrescente, digite 2: ";
	cin >> opcao;
	
	switch(opcao) {
		case 1:
			vetorOrdenado[10] = *ordemCrescente(vetorUsuario, vetorOrdenado);
			break;
		case 2:
			vetorOrdenado[10] = *ordemDecrescente(vetorUsuario, vetorOrdenado);
			break;
		default:
			cout << "Você precisa digitar 1 ou 2";
			break;
	}
	
	cout << "Vetor ordenado: ";
	for(int i = 0; i < 10; i++)	 {
		cout << vetorOrdenado[i] << " ";
	}
	
}
