#include <stdio.h>
int main(void){
    int a[3][3];
    for (int i = 0; i < 3; i++){
        printf("%d行目の3つの要素をスペース区切りで代入:", i+1);
        for (int j = 0; j < 3; j++) scanf("%d", &a[i][j]);
    }

    int ans = a[0][0]*a[1][1]*a[2][2] + a[1][0]*a[2][1]*a[0][2] + a[0][1]*a[1][2]*a[2][0] - a[0][2]*a[1][1]*a[2][0] - a[0][1]*a[1][0]*a[2][2] - a[0][0]*a[1][2]*a[2][1];
    printf("行列式は%dです。\n", ans);

    return 0;
}
