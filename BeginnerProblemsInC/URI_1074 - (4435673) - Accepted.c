#include <stdio.h>


int main() {
    int n;
    int i;
    int termo;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&termo);
        if (termo == 0) {
            printf("NULL\n");
        } else {
            if (termo%2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }
            if (termo>0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}