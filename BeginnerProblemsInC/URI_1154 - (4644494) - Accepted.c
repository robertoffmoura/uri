#include <stdio.h>

int main() {
    int termo;
    int i = 0;
    int soma = 0;
    scanf("%d",&termo);
    while (termo >= 0) {
        i++;
        soma+=termo;
        scanf("%d",&termo);
    }
    printf("%.2f\n",((float)soma)/((float)i));
}