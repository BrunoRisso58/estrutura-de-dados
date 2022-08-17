#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome, sobrenome, nomeCompleto;
	
	cout << "Digite seu nome e seu sobrenome: ";
	cin >> nome;
	cin >> sobrenome;
	
	if (nome.length() > sobrenome.length()) {
		cout << nome << " " << sobrenome << "\n";
	} 
	if (sobrenome.length() > nome.length()) {
		cout << sobrenome << " " << nome << "\n";
	} 
	if (sobrenome.length() == nome.length()) {
		nomeCompleto = nome + " " + sobrenome;
		cout << nomeCompleto << endl;
		cout << "Número de caracteres: " << nomeCompleto.length()-1;
	}
	
}
