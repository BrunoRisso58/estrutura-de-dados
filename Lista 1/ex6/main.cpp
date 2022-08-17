#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {

	// numA e numB s�o os dois termos das somas que comp�e a sequ�ncia de finobacci, e come�am com o valor 1
	// numC representa a soma de numA e numB
	int numA = 1, numB = 1, numC;
	
	// o programa escreve numA e numB uma vez, pois os dois primeiros termos da sequ�ncia de fibonacci s�o 1
	cout << numA << endl;
	cout << numB << endl;
	
	for (int i = 0; i < 15; i++) {
		
		// atribui a numC o seu valor e imprime essa vari�vel na tela
		numC = numA + numB;
		cout << numC << endl;
		
		// os termos que antes tinham os valores de A e B agora passam a ter os valores de B e C (armazenados nas vari�veis A e B)
		numA = numB;
		numB = numC;
		
	}
	
}
