#include <stdio.h>

int main() {
    int x,z,i,soma;
    scanf("%d%d",&x,&z);
    while(z<=x) {
        scanf("%d",&z);
    }
    soma = x;
    i = 1;
    while (soma < z) {
        soma+=(x+i);
        i++;
    }
    printf("%d\n",i);
    return 0;
}