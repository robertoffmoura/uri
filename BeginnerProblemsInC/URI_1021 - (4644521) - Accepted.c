#include <stdio.h>

int main() {
    double dinheiro_float;
    int dinheiro;
    int centavos;
    int notas100 = 0,notas50 = 0,notas20 = 0,notas10 = 0,notas5 = 0,notas2 = 0;
    int moedas100 = 0,moedas50 = 0,moedas25 = 0,moedas10 = 0,moedas5 = 0,moedas1 = 0;
    
    scanf("%lf", &dinheiro_float);
    dinheiro = dinheiro_float;
    centavos = 100*(dinheiro_float-dinheiro);
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
    moedas100 = dinheiro;
    
    moedas50 = centavos/50;
    centavos %= 50;
    moedas25 = centavos/25;
    centavos %= 25;
    moedas10 = centavos/10;
    centavos %= 10;
    moedas5 = centavos/5;
    centavos %= 5;
    moedas1 = centavos;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas100);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1);
    return 0;
}