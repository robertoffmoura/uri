#include <stdio.h>


int main() {
    int x,y,i,j,soma,temp;
    scanf("%d%d",&x,&y);
    if (x>y) {
        temp = x;
        x = y;
        y = temp;
    }
    i = x;
    soma = 0;
    while (i%13!=0 && i<=y) {
        soma+=i;
        i++;
    }
    i++;
    while (i <= y) {
        for (j=0;j<12 && i<=y;j++) {
            soma+=i;
            i++;
        }
        i++;
    }
    if (x == y) {
        if (x%13 != 0) {
            soma+=x;
        }
    }
    printf("%d\n",soma);
}