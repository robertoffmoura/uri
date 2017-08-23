#include <stdio.h>


int main() {
    int i = 0;
    float k;
    int m = 0;
    float soma = 0;
    for (i=0;i<6;i++) {
        scanf("%f",&k);
        if (k> 0) {
            m++;
            soma+= k;
        }
    }
    printf("%d valores positivos\n", m);
    printf("%.1f\n",soma/m);
}