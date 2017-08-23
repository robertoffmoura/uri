#include <stdio.h>

int main() {
    int par[5];
    int impar[5];
    int n,i,j,k,l;
    j = 0;
    k = 0;
    for (i=0;i<15;i++) {
        scanf("%d",&n);
        if (n%2 == 0) {
            par[j] = n;
            j++;
            if (j==5) {
                for (l=0;l<5;l++) {
                    printf("par[%d] = %d\n",l,par[l]);
                }
                j=0;
            }
        } else {
            impar[k] = n;
            k++;
            if (k==5) {
                for (l=0;l<5;l++) {
                    printf("impar[%d] = %d\n",l,impar[l]);
                }
                k=0;
            }
        }
    }
    for (l=0;l<k;l++) {
        printf("impar[%d] = %d\n",l,impar[l]);
    }
    for (l=0;l<j;l++) {
        printf("par[%d] = %d\n",l,par[l]);
    }
}