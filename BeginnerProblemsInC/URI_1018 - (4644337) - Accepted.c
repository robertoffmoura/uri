#include <stdio.h>

int main() {
    int dinheiro;
    int notas100 = 0,notas50 = 0,notas20 = 0,notas10 = 0,notas5 = 0,notas2 = 0,notas1 = 0;

    scanf("%d", &dinheiro);
    printf("%d\n", dinheiro);
    
    notas100 = dinheiro/100;
    dinheiro %= 100;
    notas50 = dinheiro/50;
    dinheiro %= 50;
    notas20 = dinheiro/20;
    dinheiro %= 20;
    notas10 = dinheiro/10;
    dinheiro %= 10;
    notas5 = dinheiro/5;
    dinheiro %= 5;
    notas2 = dinheiro/2;
    dinheiro %= 2;
    notas1 = dinheiro;
    
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
    return 0;
}