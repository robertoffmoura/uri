#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int v[n];
    int m = 0;
    int i;
    for (i=0;i<n;i++) {
        scanf("%d",&v[i]);
        if (v[i] < v[m]) {
            m = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",v[m],m);
}