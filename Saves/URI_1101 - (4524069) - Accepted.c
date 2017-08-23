#include <stdio.h>


int main() {
    int x,y,temp,i,soma;
    scanf("%d%d",&x,&y);
    while (x > 0 && y > 0) {
        soma = 0;
        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        for(i=x;i<=y;i++) {
            printf("%d ",i);
            soma+=i;
        }
        printf("Sum=%d\n",soma);
        scanf("%d%d",&x,&y);
    }
}