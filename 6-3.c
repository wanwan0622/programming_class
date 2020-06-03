#include <stdio.h>
#include <string.h>
int main(void){
    char input[100], ans[5];
    printf("3 文字以上の文字列を入力して下さい:");
    scanf("%s", input);
    for (int i = 0; i < 3; i++){
        ans[i] = input[strlen(input) - 3 + i];
    }
    printf("%s\n", ans);

    return 0;
}
