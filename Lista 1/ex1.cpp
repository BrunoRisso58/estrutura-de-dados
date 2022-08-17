#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	// a variável a é o número da esquerda, enquanto a variável b é o número da direita
	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			cout << a << "\t*\t" << b << "\t=\t" << a*b << "\n";
		}
		cout << endl;
	}
	
}
