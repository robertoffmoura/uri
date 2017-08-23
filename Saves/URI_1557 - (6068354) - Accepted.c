#include <stdio.h>
#include <math.h>

int mod(int x) {
    if (x<0) {
        return -x;
    } else {
        return x;
    }
}


int main() {
    int n;
    scanf("%d",&n);
    int i,j,width;
    while (n != 0) {
        width = (int)((2*n-2)*log10(2)) + 1;
        for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                printf("%*d",width,(int)pow(2,i+j));
                if (j!=n-1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
}
