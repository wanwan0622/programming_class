#include <stdio.h>
int main(void){
    printf("%s\n", "西暦何年生まれですか？");
    int year;
    scanf("%d", &year);

    //昭和元年=1926年, 平成元年=1989年, 令和元年=2019年
    if (1926 <= year && year < 1989) printf("昭和%d年生まれですね。\n", year - 1926 + 1);
    else if (1989 <= year && year < 2019) printf("平成%d生まれですね。\n", year - 1989 + 1);
    else if (2019 <= year) printf("令和%d年生まれですね。\n", year - 2019 + 1);

    return 0;
}
