#include <stdio.h>


int main() {
    int a,b;
    int temp;
    int soma = 0;
    int j = 0;
    
    scanf("%d%d",&a,&b);
    
    if (a>b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (a%2==0) {
        a += 1;
    } else {
        a += 2;
    }if (b%2==0) {
        b -=1;
    } else {
        b -= 2;
    }
    j = a;
    for (j=a;j<=b;j+=2) {
        soma += j;
    }
    
    printf("%d\n",soma);
    return 0;
    
}