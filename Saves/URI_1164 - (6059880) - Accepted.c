#include <stdio.h>
#include <math.h>

int main() {
    int n,i,s,x,j;
    scanf("%d",&x);
    for (j=0;j<x;j++) {
        s = 0;
        scanf("%d",&n);
        for (i=1;i<n;i++) {
            if (n%i == 0) {
                s+=i;
            }
        }
        if (s == n) {
            printf("%d eh perfeito\n",n);
        } else {
            printf("%d nao eh perfeito\n",n);
        }
    }
}