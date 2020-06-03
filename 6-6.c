#include <stdio.h>
#include <string.h>
int main(void){
    char input_1[100], input_2[100], mini_1[100], mini_2[100];
    int flag = 1;
    printf("一つ目の文字列を入力して下さい。:");
    scanf("%s", input_1);
    printf("二つ目の文字列を入力して下さい。:");
    scanf("%s", input_2);

    for (int i = 0; i < strlen(input_1); i++){ //input_1を全て小文字に
        if ('A' <= input_1[i] && input_1[i] <= 'Z') mini_1[i] = input_1[i] - ('A' - 'a');
        else mini_1[i] = input_1[i];
    }
    for (int i = 0; i < strlen(input_2); i++){ //input_2を全て小文字に
        if ('A' <= input_2[i] && input_2[i] <= 'Z') mini_2[i] = input_2[i] - ('A' - 'a');
        else mini_2[i] = input_2[i];
    }

    for (int i = 0; i < strlen(mini_1); i++){
        if (mini_1[i] != mini_2[i]) flag = 0;
    }
    if (flag) printf("入力した文字列は一致しています。\n");
    else printf("入力した文字列は一致していません。\n");

    return 0;
}
