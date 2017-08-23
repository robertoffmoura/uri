#include <stdio.h>

int main() {
    
    int n, wh;
    float rph;
    scanf("%d%d%f",&n,&wh,&rph);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", wh*rph);
    return 0;
}