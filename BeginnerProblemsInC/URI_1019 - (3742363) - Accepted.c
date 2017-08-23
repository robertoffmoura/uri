#include <stdio.h>

int main() {
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    
    scanf("%d", &seconds);
    while (seconds >= 3600) {
        seconds -= 3600;
        hours += 1;
    }
    while (seconds >= 60) {
        seconds -= 60;
        minutes += 1;
    }
    
    printf("%d:%d:%d\n",hours,minutes,seconds);
}