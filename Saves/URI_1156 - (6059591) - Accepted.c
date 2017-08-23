#include <stdio.h>
#include <math.h>

int main() {
    double s = 1;
    int i,j;
    for (i=3,j=2;i<=39;i+=2,j*=2) {
        s+= (float) i/ (float) j;
    }
    printf("%.2f\n",s);
}