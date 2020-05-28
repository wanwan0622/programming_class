#include <stdio.h>
int main(void){
    printf("%s\n", "日と時間と分と秒をスペース区切りで入力してください。");
    int day, hour, minute, second;
    scanf("%d %d %d %d", &day, &hour, &minute, &second);

    int ans_day, ans_hour, ans_minute, ans_second;
    ans_second = second % 60;
    ans_minute = second / 60 + minute % 60;
    ans_hour = second / 3600 + minute / 60 + hour % 24;
    ans_day = second / 86400 + minute / 1440 + hour / 24 + day;
    printf("%d日%d時間%d分%d秒ですね。\n", ans_day, ans_hour, ans_minute, ans_second);

    return 0;
}
