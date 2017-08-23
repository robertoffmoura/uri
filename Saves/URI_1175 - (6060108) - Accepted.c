#include <stdio.h>
#include <math.h>

int main() {
    int v[20];
    int i;
    int temp;
    for (i=0;i<20;i++) {
        scanf("%d",v+i);
    }
    for (i=0;i<10;i++) {
        temp = v[i];
        v[i] = v[20-1-i];
        v[20-1-i] = temp;
    }
    for (i=0;i<20;i++) {
        printf("N[%d] = %d\n",i,v[i]);
    }
}