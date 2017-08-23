#include <stdio.h>


int main() {
    int i = 0;
    int k;
    int p = 0;
    int po = 0;
    int ne = 0;
    for (i=0;i<5;i++) {
        scanf("%d",&k);
        if (k%2==0) {
            p++;
        } if (k>0) {
            po++;
        } else if (k<0) {
            ne++;
        }
    }
    printf("%d valor(es) par(es)\n", p);
    printf("%d valor(es) impar(es)\n", 5-p);
    printf("%d valor(es) positivo(s)\n", po);
    printf("%d valor(es) negativo(s)\n", ne);
}