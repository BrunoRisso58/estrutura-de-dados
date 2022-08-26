#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>
using namespace std;

struct Conta {
    string nome;
    float cpf;
    float valor;
};

Conta *cadastraUsuarios(Conta c[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do " << i+1 << "° usuário: ";
        cin >> c[i].nome;
        cout << "Digite o cpf do " << i+1 << "° usuário: ";
        cin >> c[i].cpf;
        cout << "Digite o saldo do " << i+1 << "° usuário: ";
        cin >> c[i].valor;
        cout << "--------------------" << endl;
    }
    return c;
}

Conta *ordenaDecrescente(Conta c[5]) {
    Conta aux;
//    for (int i = 0; i < 5; i++) {
//        cOrdenado[i] = c[i];
//    }
    for (int contador = 0; contador < 5; contador++) {
        for (int i = 0; i < 4; i++) {
            if (c[i].valor < c[i+1].valor) {
                aux = c[i];
                c[i] = c[i+1];
                c[i+1] = aux;
            }
        }
    }
    return c;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    
    Conta c[5], cOrdenado[5];
    
    c[5] = *cadastraUsuarios(c);
    c[5] = *ordenaDecrescente(c);
    
    cout << endl << endl;
    
    for (int i = 0; i < 5; i++) {
    	cout << "Nome: " << c[i].nome << endl;
    	cout << "CPF: " << c[i].cpf << endl;
    	cout << "Valor: " << c[i].valor << endl;
    	cout << "--------------------" << endl;
	}
}
