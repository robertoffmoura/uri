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
    
}

int main() {
    char nome[256];
    double salary, sales;
    float rph;
    
    fgets (nome, 256, stdin);
    scanf("%lf%lf", &salary, &sales);
    
    printf("TOTAL = R$ %.2lf\n",  salary+0.15*sales);
    
    return 0;
}