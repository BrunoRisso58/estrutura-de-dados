#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
using namespace std;

// a) O c�digo compila? Sim
// b) Ap�s executar o c�digo, qual ser� o valor de inx? 20
// c) Ap�s executar o c�digo, para onde parr estar� apontando? Para o endere�o de mem�ria de arr[4]

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	
	inx = *parr++;
	
	cout << inx;
	
}
