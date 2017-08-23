#include <stdio.h>


int main() {
    int x;
    int i;
    int j;
    scanf("%d",&x);
    if (x%2==0) {
        i = x+1;
    } else {
        i = x;
    }
    for (j=1;j<=6;j++,i+=2) {
        printf("%d\n",i);
    }
    return 0;
    
}