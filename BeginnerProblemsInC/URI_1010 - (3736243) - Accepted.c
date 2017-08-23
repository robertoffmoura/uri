#include <stdio.h>

void readLongString(char input[256]) {
    int i;
    
    fgets( input, 256, stdin );
    
    for ( i = 0; i < 256; i++ )
    {
        if ( input[i] == '\n' )
        {
            input[i] = '\0';
            break;
        }
    }
    
    //getchar();
}

int main() {
    //char nome[256];
    int codigo1, quantidade1;
    int codigo2, quantidade2;
    double preco1, preco2;
    
    //fgets (nome, 256, stdin);
    scanf("%d%d%lf", &codigo1, &quantidade1, &preco1);
    scanf("%d%d%lf", &codigo2, &quantidade2, &preco2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n",  (quantidade1*preco1)+(quantidade2*preco2));
    
    //getchar();
    
    //scanf("%d%d%f",&n,&wh,&rph);
    //printf("NUMBER = %d\n", n);
    //printf("SALARY = U$ %.2f\n", wh*rph);
    //readLongString(nome);
    
    //printf("%s\n", nome);
    return 0;
}