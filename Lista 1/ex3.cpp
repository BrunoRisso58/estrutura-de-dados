#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	int conjunto[10], soma;
	double media;
	
	// l� os 10 valores
	cout << "Digite 10 valores\n";
	for (int i = 0; i < 10; i++) {
		cin >> conjunto[i];
		soma += conjunto[i];
	}
	
	// atribui a vari�vel media e imprimi ela na tela
	media = soma / 10;
	cout << "\nM�dia: " << media;
	
	for (int i = 0; i < 10; i++) {
		if (conjunto[i] == media) {
			cout << "\nO " << i+1 << "� valor � igual a m�dia!\n";
		}
	}
		
}
