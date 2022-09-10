#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>
using namespace std;

// O que aparecerá quando executarmos o programa abaixo? Aparecerá o valor de count, de onde o ponteiro temp está apontando, e de sum. 
// count = 20 *temp = 20 sum = 20 

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int count = 30, *temp, sum = 2;
	
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout <<  " count = " << count << " *temp = " << *temp << " sum = " << sum;
	
}
