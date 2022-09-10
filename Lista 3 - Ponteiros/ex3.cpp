#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
using namespace std;

// a) O código compila? Sim
// b) Após executar o código, qual será o valor de inx? 20
// c) Após executar o código, para onde parr estará apontando? Para o endereço de memória de arr[4]

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	
	inx = *parr++;
	
	cout << inx;
	
}
