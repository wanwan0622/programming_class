#include <stdio.h>
int main(void){
    int x[6];
    printf("整数を6個スペース区切りで入力してください：");
    for (int i = 0; i < 6; i++) scanf("%d", &x[i]);
    int ans = x[0];
    for (int i = 0; i < 6; i++){
        if (x[i] > ans) ans = x[i];
    }
    printf("最大値は%d\n", ans);

    return 0;
}
