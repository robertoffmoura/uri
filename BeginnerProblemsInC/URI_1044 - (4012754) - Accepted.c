#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    int m,n;// m = maior, n = manor
    
    scanf("%d%d",&a,&b);
    
    if (a>b) {
        m = a;
        n = b;
    } else {
        m = b;
        n = a;
    }
    if (m%n == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    
    
    return 0;
}