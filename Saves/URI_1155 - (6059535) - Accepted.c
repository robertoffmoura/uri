#include <stdio.h>

int main() {
    double s = 0;
    int i;
    for (i=1;i<=100;i++) {
        s+= 1.0/i;
    }
    printf("%.2f\n",s);
}