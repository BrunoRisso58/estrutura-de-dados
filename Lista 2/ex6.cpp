#include <iostream>
#include <cstdlib>
#include <string.h>
#include <time.h>
using namespace std;

struct Pessoa {
	string nome;
	int numero;
};

Pessoa sorteiaNumero(Pessoa pessoa) {
	int numeroSorteado;
	srand(time(NULL));
	numeroSorteado = 1 + rand() / 10000;
	pessoa.numero = numeroSorteado;
	return pessoa;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoa;
	int numeroEscolhido;
	
	cout << "Digite seu nome: ";
	cin >> pessoa.nome;
	
	pessoa = sorteiaNumero(pessoa);
	
	cout << "Digite o número que você acha que foi sorteado: ";
	cin >> numeroEscolhido;
	
	if (pessoa.numero == numeroEscolhido) {
		cout << "Parabéns! Você acertou o número! :)" << endl;
	} else  {
		cout << "Você errou! :(" << endl;
	}
	
	cout << "Número sorteado: " << pessoa.numero;
	
}
