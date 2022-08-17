#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>

using namespace std;

float operacaoMatematica(int a, int b, int c, int d);

float operacaoMatematica(int a, int b, int c, int d) {
	return (float) 3*a + pow(b, 2) + pow(c, 2) + pow(d, 2);
}

int main() {
	
	int a, b, c, d;
	float resultado;
	
	cout << "Digite os valores a, b, c e d:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	resultado =	operacaoMatematica(a, b, c, d);
	
	cout << resultado;
	
}
