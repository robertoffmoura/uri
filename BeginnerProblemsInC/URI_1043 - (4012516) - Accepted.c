#include <stdio.h>
#include <math.h>

int tamanho = 3; //tamanho da lista de numeros
float vetor[3];
float vetorDesordenado[3];

int passarBNaFrenteDeA(int b, int a) {
    float ultimo = vetor[b];
    int i;
    for (i = b - 1; i >= a; i--) {
        vetor[i + 1] = vetor[i];
    }
    vetor[a] = ultimo;
    return 0;
}

int main() {
    int i,j,k;
    for (i = 0; i<= tamanho-1; i++) {//preenchendo os vetores com input
        scanf("%f", &vetor[i]);
        vetorDesordenado[i] = vetor[i];
    }
    
    for (k = 0; k<= tamanho-1; k++) {//ordenando os valores do vetor
        j = k;
        for (i = k+1; i<= tamanho-1; i++) {
            if (vetor[j] < vetor[i]) {
                j = i;
            }
        }
        passarBNaFrenteDeA(j, k);
    }
    
    if (vetor[0] < vetor[1] + vetor[2]) {// maior lado é menor que a soma dos outros, triangulo existe
        printf("Perimetro = %.1f\n", vetor[0] + vetor[1] + vetor[2]);
    } else {
        printf("Area = %.1f\n", (vetorDesordenado[0] + vetorDesordenado[1])*vetorDesordenado[2]/2.0);
    }
    return 0;
}
