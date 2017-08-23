#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    for (i=j=0;i<1000;i++,j++,j%=n) {
        printf("N[%d] = %d\n",i,j);
    }
}