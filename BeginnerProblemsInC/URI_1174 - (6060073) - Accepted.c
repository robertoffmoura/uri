#include <stdio.h>
#include <math.h>

int main() {
    float v[100];
    int i;
    for (i=0;i<100;i++) {
        scanf("%f",v+i);
    }
    for (i=0;i<100;i++) {
        if (v[i] <= 10) {
            printf("A[%d] = %.1f\n",i,v[i]);
        }
    }
}