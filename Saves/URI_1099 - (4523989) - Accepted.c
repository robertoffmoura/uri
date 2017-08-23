#include <stdio.h>


int main() {
    int i,n,x,y;
    int soma;
    int termo;
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d%d",&x,&y);
        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        termo = x + 1;
        soma = 0;
        while (termo < y) {
            if (termo%2 == 0) {
                termo++;
            } else {
                soma += termo;
                termo +=2;
            }
        }
        printf("%d\n",soma);
    }
}