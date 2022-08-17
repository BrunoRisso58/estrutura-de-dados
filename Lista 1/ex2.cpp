#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	string produtos[10] = {"Maçã", "Banana", "Pêra", "Uva", "Melancia", "Melão", "Mamão", "Abacate", "Limão", "Laranja"};
	double preco[10] = {2, 3, 2, 5, 10, 9, 9, 7, 4, 4};
	
	cout << "Preços antes da inflação \n";
	
	for (int i = 0; i < 10; i++) {
		cout << produtos[i] << ": " << preco[i] << "\n";
	}
	
	cout << "\n\n";
	
	cout << "Preços depois da inflação \n";
	
	for (int i = 0; i < 10; i++) {
		cout << produtos[i] << ": " << preco[i]*1.15 << "\n";
	}
	
}
