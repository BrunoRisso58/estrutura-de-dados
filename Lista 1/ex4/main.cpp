#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

main() {
	
	setlocale(LC_ALL, "Portuguese");

	string texto;
	int valor;
	
	// lê a string
	cout << "Digite a string: ";
	cin >> texto;
	
	// verifica se a string é SIM ou NAO
	if (texto == "SIM") {
		valor = 1;
		cout << valor;
	} else if (texto == "NAO")  {
		valor = 0;
		cout << valor;
	}
	
}
