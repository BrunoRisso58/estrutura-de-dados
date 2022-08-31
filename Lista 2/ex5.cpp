#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;

struct Produto {
	int codigo, quantidade;
	char nome[15];
	double preco;
};

struct Pedido {
	int codigoProduto, quantidadeProduto;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Produto produtos[2];
	Pedido pedido;
	bool estoque = true;
		
	// lê os produtos
	for (int i = 0; i < 2; i++) {
		cout << "Digite o código do produto " << i+1 << ": ";
		cin >> produtos[i].codigo;
		cout << "Digite o nome do produto " << i+1 << ": ";
		cin >> produtos[i].nome;
		cout << "Digite o preço do produto " << i+1 << ": ";
		cin >> produtos[i].preco;
		cout << "Digite a quantidade do produto " << i+1 << ": ";
		cin >> produtos[i].quantidade;
		cout << "=====================" << endl;
	}
	
	do {
		
		// lê um pedido
		cout << "\nPedido:" << endl;
		cout << "Digite o código do produto: ";
		cin >> pedido.codigoProduto;
		cout << "Digite a quantidade do produto: ";
		cin >> pedido.quantidadeProduto;
		
		for (int i = 0; i < 2; i++) {
			if (pedido.codigoProduto == produtos[i].codigo) {
				if (produtos[i].quantidade == 0) {
					estoque = false;
					cout << "Quantidade no estoque do produto " << produtos[i].codigo << " é igual a 0";
					break;
				}
				if (pedido.quantidadeProduto <= produtos[i].quantidade) {
					produtos[i].quantidade -= pedido.quantidadeProduto;
					cout << "Item vendido: " << produtos[i].codigo << endl;
					cout << "Quantidade vendida: " << pedido.quantidadeProduto << endl;
					cout << "Restam no estoque: " << produtos[i].quantidade << endl;
				} else if (pedido.quantidadeProduto > produtos[i].quantidade) {
					cout << "Não é possível fazer este pedido, pois não há quantidade suficiente deste produto no estoque!\n";
					cout << "Quantidade do produto " << pedido.codigoProduto << " no estoque: " << produtos[i].quantidade << "\n";
				}
			}
		}
	} while (estoque);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
