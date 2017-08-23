#include <stdio.h>
#include <math.h>

int tamanho = 3; //tamanho da lista de numeros
float vetor[3];

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
    float a,b,c;
    for (i = 0; i<= tamanho-1; i++) {
        scanf("%f", &vetor[i]);
    }
    
    for (k = 0; k<= tamanho-1; k++) {
        j = k;
        for (i = k+1; i<= tamanho-1; i++) {
            if (vetor[j] < vetor[i]) {
                j = i;
            }
        }
        passarBNaFrenteDeA(j, k);
    }
    
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];
    
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        
        if (a*a == b*b + c*c) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a*a > b*b + c*c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
        
    }
    
    return 0;
}
