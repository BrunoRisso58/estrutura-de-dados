#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
using namespace std;

struct Produto {
	char nome[30]; /* Nome do produto */
	int *codigo = NULL; /* Codigo do produto */
	double *preco = NULL; /* Preco do produto */
	char fornecedor[50]; /* Fornecedor do produto*/
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Produto produto[5], *p[5];
	int codigo2[5];
	double preco2[5];
	
	for (int i = 0; i < 5; i++) {
		p[i] = &produto[i];
		p[i]->codigo = &codigo2[i];
		p[i]->preco = &preco2[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << "Digite o nome do produto: ";
		cin >> p[i]->nome;
		cout << "Digite o código do produto: ";
		cin >> *(p[i]->codigo);
		cout << "Digite o preço do produto: ";
		cin >> *(p[i]->preco);
		cout << "Digite o fornecedor do produto: ";
		cin >> p[i]->fornecedor;
		cout << endl;
	}
	
	cout << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << "Nome: " << p[i]->nome << endl;
		cout << "Código: " << *(p[i]->codigo) << endl;
		cout << "Preço: " << *(p[i]->preco) << endl;
		cout << "Fornecedor: " << p[i]->fornecedor << endl;
		cout << "=====================" << endl;
	}
	
}
