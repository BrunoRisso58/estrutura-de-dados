#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>

using namespace std;

float *maxAndMinValues(float, float);
float *maxAndMinValues(float vetorUsuario[], float maxMin[2]){
    float max, min;
    for (int i = 0; i < 10; i++) {
        if (vetorUsuario[i] > max) {
            max = vetorUsuario[i];
        }
        if (vetorUsuario[i] < min) {
            min = vetorUsuario[i];
        }
    }
    maxMin[0] = max;
    maxMin[1] = min;
    return maxMin;
}

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    float vetorUsuario[10], maxMin[2];
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor da " << i+1 << " posição: ";
        cin >> vetorUsuario[i];
    }
    
    maxMin[2] = *maxAndMinValues(vetorUsuario, maxMin);
    
    cout << "Valor máximo: " << maxMin[0] << endl;
    cout << "Valor mínimo: " << maxMin[1];
    
}