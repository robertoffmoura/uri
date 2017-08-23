#include <stdio.h>

unsigned long long int fatorial(int n) {
    int i = 2;
    if (n>=2) {
        unsigned long long int resultado = 1;
        for (i = 2; i <= n; i++) {
            resultado = resultado*i;
        }
        return resultado;
    } else if (n==0 || n==1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int m,n;
    while (scanf("%d",&m) != EOF) {
        scanf("%d",&n);
        printf("%llu\n",fatorial(m)+fatorial(n));
    }
    return 0;
}