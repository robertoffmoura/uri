#include <stdio.h>

int main() {
    int anos = 0;
    int meses = 0;
    int dias = 0;
    
    scanf("%d", &dias);
    while (dias >= 365) {
        dias -= 365;
        anos += 1;
    }
    while (dias >= 30) {
        dias -= 30;
        meses += 1;
    }
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
}