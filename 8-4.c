#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(int n);

int main(void){
    int n, ans;
    printf("正の整数nを入力してください。");
    scanf("%d", &n);
    ans = dice(n);
    printf("サイコロの目は%dです。\n", ans);

    return 0;
}

int dice(int n){
    srand(time(NULL));
    return (rand() % n) + 1;
}
