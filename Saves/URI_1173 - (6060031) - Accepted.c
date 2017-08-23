#include <stdio.h>
#include <math.h>

int main() {
    int v[10];
    scanf("%d",v);
    int i;
    for (i=1;i<10;i++) {
        v[i] = v[i-1]*2;
    }
    for (i=0;i<10;i++) {
        printf("N[%d] = %d\n",i,v[i]);
    }
}