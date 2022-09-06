#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;

struct Ponto {
	double x, y;
};

double calculaDistancia(Ponto pontoA, Ponto pontoB) {
	double distanciaAeB;
	distanciaAeB = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));
	return distanciaAeB;
}

int main() {
	
	Ponto pontoA, pontoB;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o x do ponto A: ";
	cin >> pontoA.x;
	cout << "Digite o y do ponto A: ";
	cin >> pontoA.y;
	
	cout << endl;
	
	cout << "Digite o x do ponto B: ";
	cin >> pontoB.x;
	cout << "Digite o y do ponto B: ";
	cin >> pontoB.y;
	
	cout << endl;
	
	cout << "Distância entre os dois pontos no plano cartesiano: " << calculaDistancia(pontoA, pontoB);
	
}
