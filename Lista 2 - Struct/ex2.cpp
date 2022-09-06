#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Pessoa {
    string nome;
    Data data;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    
    Pessoa pessoas[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome da " << i+1 << " pessoa: ";
        cin >> pessoas[i].nome;
        cout << "Digite o dia do nascimento da " << i+1 << "° pessoa: ";
        cin >> pessoas[i].data.dia;
        cout << "Digite o mês do nascimento da " << i+1 << "° pessoa: ";
        cin >> pessoas[i].data.mes;
        cout << "Digite o ano do nascimento da " << i+1 << "° pessoa: ";
        cin >> pessoas[i].data.ano;
        cout << "====================================================" << endl;
    }

	// ordena as pessoas pela data de nascimento, de modo que as mais velhas venham primeiro e as mais novas venham depois
    for (int contador = 0; contador < 5; contador++) {
    	for (int i = 0; i < 4; i++) {
    		if (pessoas[i].data.ano > pessoas[i+1].data.ano) {
	    		Pessoa aux = pessoas[i];
	    		pessoas[i] = pessoas[i+1];
	    		pessoas[i+1] = aux;
			}
		}
	}
    
    // exibe o índice 0 do array, pois, depois de ordenado, o índice 0 corresponde à pessoa mais velha
    cout << pessoas[0].nome << " | ";
    cout << pessoas[0].data.dia << "/" << pessoas[0].data.mes << "/" << pessoas[0].data.ano;
    
}
