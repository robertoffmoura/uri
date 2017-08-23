#include <stdio.h>

int main() {
    int d = 12;
    float v[d][d];
    int n;
    scanf("%d",&n);
    char o;
    do {
        scanf("%c",&o);
    } while (o == '\n');
    int i,j;
    for (i=0;i<d;i++) {
        for (j=0;j<d;j++) {
            scanf("%f",&(v[i][j]));
        }
    }
    float s = 0;
    for (j=0;j<d;j++) {
        s+=v[j][n];
    }
    if (o == 'M') {
        s/= d;
    }
    printf("%.1f\n",s);
}
