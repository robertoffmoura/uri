#include <stdio.h>

int main() {
    int i;
    double n;
    scanf("%lf",&n);
    for (i=0;i<100;i++,n/=2) {
        printf("N[%d] = %.4lf\n",i,n);
    }
}