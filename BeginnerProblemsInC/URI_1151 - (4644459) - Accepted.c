#include <stdio.h>

int main() {
    int n;
    int a1 = 0;
    int a2 = 1;
    int a3 = a1+a2;
    int i;
    scanf("%d",&n);
    if (n==1) {
        printf("%d",a1);
    } else {
        printf("%d %d",a1,a2);
        for (i=0;i<n-2;i++) {
            printf(" %d",a3);
            a1 = a2;
            a2 = a3;
            a3 = a1+a2;
        }
    }
    printf("\n");
    return 0;
}