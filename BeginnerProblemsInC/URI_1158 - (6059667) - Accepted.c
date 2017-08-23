#include <stdio.h>
#include <math.h>

int main() {
    int n,x,y,i,j,s;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        s = 0;
        scanf("%d%d",&x,&y);
        if (x%2 == 0) {
            x++;
        }
        for (j=0;j<y;j++) {
            s+= x+2*j;
        }
        printf("%d\n",s);
    }
}