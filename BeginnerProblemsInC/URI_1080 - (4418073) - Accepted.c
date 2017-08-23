#include <stdio.h>

int main() {
    int i = 0;
    int m = 0;
    int posicao = 0;
    int termo;
    for (i=0;i<100;i++) {
        scanf("%d",&termo);
        if (termo>m) {
            m = termo;
            posicao = i;
        }
    }
    printf("%d\n%d\n",m,posicao+1);
}