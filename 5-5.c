#include <stdio.h>
int main(void){
    int a[3], b[3];
    printf("1 個目のベクトルを入力してください:");
    for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
    printf("2 個目のベクトルを入力してください:");
    for (int i = 0; i < 3; i++) scanf("%d", &b[i]);
    int ans = 0;
    for (int i = 0; i < 3; i++) ans += a[i] * b[i];
    printf("内積は%dです。\n", ans);

    return 0;
}
