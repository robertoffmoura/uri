#include <stdio.h>

float mod(float x) {
    if (x<0) {
        return -x;
    } else {
        return x;
    }
}

int min(int a, int b) {
    return (a+b)/2.0-mod((a-b)/2.0);
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    while (n != 0) {
        for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                if (i>=j && i<n-j-1) {
                    printf("%3d",j+1);
                } else if (i>j && i>=n-j-1) {
                    printf("%3d",n-i);
                } else if (i<j && i<=n-j-1) {
                    printf("%3d",i+1);
                } else if (i<=j && i>n-j-1) {
                    printf("%3d",n-j);
                } else {
                    printf("%3d",i+1);
                }
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
