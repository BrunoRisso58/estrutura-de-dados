#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;

struct Ponto {
	double x, y;
};

struct Triangulo {
	Ponto a, b, c;
};

double calculaDistancia(Ponto pontoA, Ponto pontoB);
void classificacaoTriangulos(Ponto pontoA, Ponto pontoB, Ponto pontoC, Ponto pontoD, Ponto pontoE, Ponto pontoF);

double calculaDistancia(Ponto pontoA, Ponto pontoB) {
	double distanciaAeB;
	distanciaAeB = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));
	return distanciaAeB;
}

void classificacaoTriangulos(Ponto pontoA, Ponto pontoB, Ponto pontoC, Ponto pontoD, Ponto pontoE, Ponto pontoF) {
	
	Triangulo triangulo1, triangulo2;
	double ab, bc, ac, de, ef, df;
	
	triangulo1.a = pontoA;
	triangulo1.b = pontoB;
	triangulo1.c = pontoC;
	
	triangulo2.a = pontoD;
	triangulo2.b = pontoE;
	triangulo2.c = pontoF;
	
	// Triângulo 1
	ab = calculaDistancia(triangulo1.a, triangulo1.b);
	bc = calculaDistancia(triangulo1.b, triangulo1.c);
	ac = calculaDistancia(triangulo1.a, triangulo1.c);
	
	// Triângulo 2
	de = calculaDistancia(triangulo2.a, triangulo2.b);
	ef = calculaDistancia(triangulo2.b, triangulo2.c);
	df = calculaDistancia(triangulo2.a, triangulo2.c);
	
	// Classificação do triângulo 1
	if ((ab != bc) && (ab != ac)) {
		cout << "Escaleno!";
	} else if ((ab == bc) && (ab == ac)) {
		cout << "Equilátero!";
	} else {
		cout << "Isósceles!";
	}
	
	cout << endl;
	
	// Classificação do triângulo 2
	if ((de != ef) && (de != df)) {
		cout << "Escaleno!";
	} else if ((de == ef) && (de == df)) {
		cout << "Equilátero!";
	} else {
		cout << "Isósceles!";
	}
	
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Ponto pontoA, pontoB, pontoC, pontoD, pontoE, pontoF;
	
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
	
	cout << "Digite o x do ponto C: ";
	cin >> pontoC.x;
	cout << "Digite o y do ponto C: ";
	cin >> pontoC.y;
	
	cout << endl;
	
	cout << "Digite o x do ponto D: ";
	cin >> pontoD.x;
	cout << "Digite o y do ponto D: ";
	cin >> pontoD.y;
	
	cout << endl;
	
	cout << "Digite o x do ponto E: ";
	cin >> pontoE.x;
	cout << "Digite o y do ponto E: ";
	cin >> pontoE.y;
	
	cout << endl;
	
	cout << "Digite o x do ponto F: ";
	cin >> pontoF.x;
	cout << "Digite o y do ponto F: ";
	cin >> pontoF.y;
	
	cout << endl;
	
	classificacaoTriangulos(pontoA, pontoB, pontoC, pontoD, pontoE, pontoF);
	
}
