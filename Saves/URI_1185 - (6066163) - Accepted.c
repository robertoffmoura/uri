#include <stdio.h>

int main() {
    int d = 12;
    float v[d][d];
    int n;
    //scanf("%d",&n);
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
    int x = 0;
    for (i=0;i<d-1;i++) {
        for (j=0;j<d-i-1;j++) {
            s+=v[i][j];
            x++;
        }
    }
    if (o == 'M') {
        s/= x;
    }
    printf("%.1f\n",s);
}
