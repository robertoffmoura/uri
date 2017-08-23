#include <stdio.h>

int main() {
    int n;
    int resultado = 1;
    int i;
    scanf("%d",&n);
    for (i=2;i<=n;i++) {
        resultado*=i;
    }
    printf("%d\n",resultado);
}