// A delegação francesa de Futsal deseja criar um programa que deva contero nome do atleta, sua posição, idade e altura. 
// Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
using namespace std;

struct Atleta {
	string nome, posicao;
	int idade;
	float altura;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Atleta atleta[5], aux;
	
	for (int i = 0; i < 5; i++) {
		cout << "Digite o nome do " << i+1 << " atleta: ";
		cin >> atleta[i].nome;
		cout << "Digite a posição do " << i+1 << " atleta: ";
		cin >> atleta[i].posicao;
		cout << "Digite a idade do " << i+1 << " atleta: ";
		cin >> atleta[i].idade;
		cout << "Digite a altura do " << i+1 << " atleta: ";
		cin >> atleta[i].altura;
		cout << endl;
	}
	
	for (int contador = 0; contador < 5; contador++) {
		for (int i = 0; i < 4; i++) {
			if (atleta[i].idade < atleta[i+1].idade) {
				aux = atleta[i];
				atleta[i] = atleta[i+1];
				atleta[i+1] = aux;
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		cout << "Nome: " << atleta[i].nome << endl;
		cout << "Posição: " << atleta[i].posicao << endl;
		cout << "Idade: " << atleta[i].idade << endl;
		cout << "Altura: " << atleta[i].altura << endl;
		cout << "=======================================" << endl;
	}
	
}
