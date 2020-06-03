#include <stdio.h>
int main(void){
    printf("%s", "文字を 1 文字入力して下さい:");
    char input, ans;
    scanf("%c", &input);
    if ('a' <= input && input <= 'z') ans = input + ('A' - 'a');
    else if ('A' <= input && input <= 'Z') ans = input - ('A' - 'a');
    printf("変換:%c\n", ans);

    return 0;
}
