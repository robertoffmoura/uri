#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c, delta, x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    delta = b*b-4*a*c;
    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("R1 = %.5f\n", x1);
    printf("R2 = %.5f\n", x2);
    }
}