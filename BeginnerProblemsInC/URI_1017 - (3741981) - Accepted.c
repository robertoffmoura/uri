#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    int time, velocity;

    scanf("%d%d", &time, &velocity);
    
    printf("%.3f\n", (time*velocity)/12.0);
    return 0;
}