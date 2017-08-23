#include <stdio.h>
#define N 10005

int merg[N];//variaveis declaradas aqui fora começam sendo 0 (variaveis globais)

int main() {
    int n, r, i, termo;
    while (scanf("%d%d",&n,&r) != EOF) {
        int algumVoltou = 0;
        for (i=0;i<r;i++) {
            scanf("%d",&termo);
            merg[termo] = 1;
        }
        for (i=1;i<=n;i++) {
            if (!merg[i]) {
                printf("%d ",i);
                algumVoltou = 1;
            }
        }
        if (!algumVoltou)
            printf("*");
        printf("\n");
        for (i=0;i<=n;i++)
            merg[i] = 0;
    }
    return 0;
}
