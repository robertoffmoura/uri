#include <stdio.h>


int main() {
    int n;
    int i;
    int a;
    char c;
    int coelhos = 0;
    int sapos = 0;
    int ratos = 0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d %c",&a,&c);
        switch (c) {
            case 'C':
                coelhos+=a;
                break;
            case 'R':
                ratos+=a;
                break;
            case 'S':
                sapos+=a;
            default:
                break;
        }
    }
    printf("Total: %d cobaias\n",(ratos+coelhos+sapos));
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2f %%\n",100*((float)coelhos)/(ratos+coelhos+sapos));
    printf("Percentual de ratos: %.2f %%\n",100*((float)ratos)/(ratos+coelhos+sapos));
    printf("Percentual de sapos: %.2f %%\n",100*((float)sapos)/(ratos+coelhos+sapos));
    
}