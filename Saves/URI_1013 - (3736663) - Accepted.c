#include <stdio.h>
#define PI 3.14159

int abs(int x) {
    if (x > 0) {
        return x;
    } else {
        return -x;
    }
}

int main() {
    int a,b,c;
    int maiorAB, maiorABC;

    scanf("%d%d%d", &a,&b,&c);
    
    maiorAB = (a + b + abs(a-b))/2;
    maiorABC = (maiorAB + c + abs(maiorAB - c))/2;
    printf("%d eh o maior\n", maiorABC);
    return 0;
}