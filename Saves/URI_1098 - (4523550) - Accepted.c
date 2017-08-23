#include <stdio.h>


int main() {
    int j = 10;
    int i = 0;
    int k = 0;
    while (i<=20) {
        if (i%10 == 0) {
            printf("I=%d",i/10);
        } else {
            printf("I=%.1f",i/10.0);
        }
        if (j%10 == 0) {
            printf(" J=%d\n",j/10);
        } else {
            printf(" J=%.1f\n",j/10.0);
        }
        k++;
        j+=10;
        if(k==3) {
            k=0;
            i+=2;
            j-=30;
            j+=2;
        }
    }
}