#include <stdio.h>
#include <stdlib.h>

int *vetor;
int *vetor2;

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
    int n;
    int i,j,k;
    int permutacoes;
    while (scanf("%d",&n) != EOF) {
        permutacoes = 0;
        vetor = (int *)malloc(sizeof(int) * n);
        vetor2 = (int *)malloc(sizeof(int) * n);
        
        //READ
        for (k=0;k<n;k++) {
            scanf("%d",&vetor[k]);
        }
        for (k=0;k<n;k++) {
            scanf("%d",&vetor2[k]);
        }
        
        //do
        for (i=0;i<n;i++) {
            if (vetor2[i] != vetor[i]) {
                for (j=i+1;j<n;j++) {
                    if (vetor[j] == vetor2[i]) {
                        break;
                    }
                }
                permutacoes += j-i;
                //for (k=0;k<n;k++) {
                //    printf("%d ",vetor[k]);
                //}
                //printf("\n");
                //printf("%d %d\n",i,j);
                passarBNaFrenteDeA(j,i);
                //for (k=0;k<n;k++) {
                //    printf("%d ",vetor[k]);
                //}
                //printf("\n");
            }
        }
        printf("%d\n",permutacoes);
    }
    
            
    //PRINT
    //for (i=0;i<n;i++) {
    //    printf("%d",vetor[i]);
    //c}
    
    
    return 0;
}