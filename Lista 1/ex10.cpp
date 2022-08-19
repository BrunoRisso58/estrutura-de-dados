#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>

using namespace std;

void classificandoNumero(int);
void classificandoNumero(int num) {
    if (num % 2 == 0) {
        cout << "É par" << endl;
    }
    if (num % 2 != 0) {
        cout << "É impar" << endl;
    }
    if (num == 2 || num == 3) {
        cout << "É primo";
    }
    if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 && num != 1) {
        cout << "É primo" << endl;
    }
}

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    classificandoNumero(num);
    
}
