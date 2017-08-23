#include <stdio.h>


int main() {
    int x,y,i,temp;
    scanf("%d%d",&x,&y);
    if (x>y) {
        temp = x;
        x = y;
        y = temp;
    }
    i = x + 1;
    while (i<y) {
        if (i%5 == 2 || i%5 == 3) {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}