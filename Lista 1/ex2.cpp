#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	string produtos[10] = {"Ma��", "Banana", "P�ra", "Uva", "Melancia", "Mel�o", "Mam�o", "Abacate", "Lim�o", "Laranja"};
	double preco[10] = {2, 3, 2, 5, 10, 9, 9, 7, 4, 4};
	
	cout << "Pre�os antes da infla��o \n";
	
	for (int i = 0; i < 10; i++) {
		cout << produtos[i] << ": " << preco[i] << "\n";
	}
	
	cout << "\n\n";
	
	cout << "Pre�os depois da infla��o \n";
	
	for (int i = 0; i < 10; i++) {
		cout << produtos[i] << ": " << preco[i]*1.15 << "\n";
	}
	
}
