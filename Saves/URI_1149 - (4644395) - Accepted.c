#include <stdio.h>

int main() {
    int a,n,i;
    scanf("%d%d",&a,&n);
    while(n<=0) {
        scanf("%d",&n);
    }
    printf("%d\n",((2*a+n-1)*n)/2);
    return 0;
}