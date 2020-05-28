#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);

    int ans_500, ans_100, ans_50, ans_10, ans_5, ans_1;
    if (n <= 0 || n >= 1001) printf("%s\n", "金額がおかしいです");
    else {
        int x = 1000 - n;
        ans_500 = x / 500;
        ans_100 = (x - ans_500*500) / 100;
        ans_50 = (x - ans_500*500 - ans_100*100) / 50;
        ans_10 = (x - ans_500*500 - ans_100*100 - ans_50*50) / 10;
        ans_5 = (x - ans_500*500 - ans_100*100 - ans_50*50 - ans_10*10) / 5;
        ans_1 = x - ans_500*500 - ans_100*100 - ans_50*50 - ans_10*10 - ans_5*5;
        printf("500円硬貨%d枚、100円硬貨%d枚、50円硬貨%d枚、10円硬貨%d枚、5円硬貨%d枚、1円硬貨%d枚\n", ans_500, ans_100, ans_50, ans_10, ans_5, ans_1);
    }

    return 0;
}
