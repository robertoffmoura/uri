#include <stdio.h>


int main() {
    int j = 7;
    int i = 1;
    int k = 0;
    while (i<=9) {
        printf("I=%d J=%d\n",i,j);
        k++;
        j--;
        if(k==3) {
            k=0;
            i+=2;
            j+=3;
        }
    }
}