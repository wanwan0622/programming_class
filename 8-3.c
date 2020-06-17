#include <stdio.h>

void printsum (int n);

int main(void){
    int n, ans;
    printf("正の整数nを入力してください。");
    scanf("%d", &n);
    printf("整数を%d個、スペース区切りで入力してください。", n);
    printsum(n);

    return 0;
}

void printsum(int n){
    int rtrn = 0, tmp = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &tmp);
        rtrn += tmp;
    }
    printf("%d\n", rtrn);
}
