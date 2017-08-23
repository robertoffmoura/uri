#include <stdio.h>
#include <math.h>

int tamanho = 3; //tamanho da lista de numeros
int vetor[3];
int vetorDesordenado[3];

int passarBNaFrenteDeA(int b, int a) {
    int ultimo = vetor[b];
    int i;
    for (i = b - 1; i >= a; i--) {
        vetor[i + 1] = vetor[i];
    }
    vetor[a] = ultimo;
    return 0;
}

int main() {
    int i,j,k;
    for (i = 0; i<= tamanho-1; i++) {
        scanf("%d", &vetor[i]);
        vetorDesordenado[i] = vetor[i];
    }
    
    for (k = 0; k<= tamanho-1; k++) {
        j = k;
        for (i = k+1; i<= tamanho-1; i++) {
            if (vetor[j] > vetor[i]) {
                j = i;
            }
        }
        passarBNaFrenteDeA(j, k);
    }
    
    for (i = 0; i<= tamanho-1; i++) {
        printf("%d\n", vetor[i]);
    }
    
    printf("\n");
    
    for (i = 0; i<= tamanho-1; i++) {
        printf("%d\n", vetorDesordenado[i]);
    }
    
    return 0;
}
