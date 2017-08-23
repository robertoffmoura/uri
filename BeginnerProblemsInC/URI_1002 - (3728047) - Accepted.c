#include <stdio.h>
#define PI 3.14159

int main() {
    double R;
    double A;
    scanf("%lf", &R);
    A = R * R * PI;
    printf("A=%.4lf\n", A);
    return 0;
}