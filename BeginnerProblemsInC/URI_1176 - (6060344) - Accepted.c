#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int v[61];
    v[0] = 0;
    v[1] = 1;
    int i;
    for (i=2;i<61;i++) {
        v[i] = v[i-1] + v[i-2];
    }
    int n;
    int x;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&x);
        printf("Fib(%d) = %llu\n",x,v[x]);
    }
}