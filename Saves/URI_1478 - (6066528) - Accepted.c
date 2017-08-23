#include <stdio.h>

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
    int i,j;
    while (n != 0) {
        for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                printf("%3d",mod(i-j)+1);
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
