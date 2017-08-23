#include <stdio.h>


int main() {
    int i = 0;
    int k;
    int m = 0;
    for (i=0;i<5;i++) {
        scanf("%d",&k);
        if (k%2==0) {
            m++;
        }
    }
    printf("%d valores pares\n", m);
}