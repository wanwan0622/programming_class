#include <stdio.h>
#include <string.h>
int main(void){
    char input[100];
    char check[10] = "geijo";
    int flag_1 = 0, flag_2 = 0;
    printf("文字列を入力してください:");
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++){
        for (int j = 0; j < 5; j++){
            if (input[i+j] == check[j]) flag_2 += 1;
        }
        if (flag_2 == 5) flag_1 = 1;
        flag_2 = 0;
    }
    if (flag_1 == 1) printf("この文字列は geijo を含んでいます。\n");
    else printf("この文字列は geijo を含んでいません。\n");

    return 0;
}
