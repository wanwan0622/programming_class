#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int pre_num, num, ans, count;
    while (1){
        pre_num = rand() % 13; //場のカード A->12, 2->0, 3->1, 4->2, ..., J->9, Q->10, K->11
        printf("%s", "場のカード：");
        if (pre_num == 9) printf("%c\n", 'J');
        else if (pre_num == 10) printf("%c\n", 'Q');
        else if (pre_num == 11) printf("%c\n", 'K');
        else if (pre_num == 12) printf("%c\n", 'A');
        else printf("%d\n", pre_num + 2);

        printf("%s\n", "Highならば１Lowならば２：");
        scanf("%d", &ans); //予想
        
        printf("%s", "めくったカード:");
        num = rand() % 13; //めくったカード
        if (num == 9) printf("%c\n", 'J');
        else if (num == 10) printf("%c\n", 'Q');
        else if (num == 11) printf("%c\n", 'K');
        else if (num == 12) printf("%c\n", 'A');
        else printf("%d\n", num + 2);

        if ((ans == 1 && num >= pre_num) || (ans == 2 && num <= pre_num)){
            printf("あたりです！\n------\n");
            count++;
        }
        else {
            printf("はずれー。\n------\n");
            break;
        }
    }
    printf("あなたは連続%d回あたりました。\n", count);

    return 0;
}
