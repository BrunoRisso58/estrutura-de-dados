#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	int conjunto[10], soma;
	double media;
	
	// lê os 10 valores
	cout << "Digite 10 valores\n";
	for (int i = 0; i < 10; i++) {
		cin >> conjunto[i];
		soma += conjunto[i];
	}
	
	// atribui a variável media e imprimi ela na tela
	media = soma / 10;
	cout << "\nMédia: " << media;
	
	for (int i = 0; i < 10; i++) {
		if (conjunto[i] == media) {
			cout << "\nO " << i+1 << "° valor é igual a média!\n";
		}
	}
		
}
