#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define True 1
int main(void){
    srand(time(NULL));
    int max = RAND_MAX;
    int n = rand();

    int you, me;
    int flag = 0;
    while (True){
        if (flag == 1) break;
        me = rand() % 3 + 1;
        printf("%s", "あなたの手を入力してください(1:パー,2:グー,3:チョキ):");
        scanf("%d", &you);
        if (you == 1) printf("%s\n", "あなたの手:パー");
        else if (you == 2) printf("%s\n", "あなたの手:グー");
        else printf("%s\n", "あなたの手:チョキ");

        if (me == 1) printf("%s\n", "わたしの手:パー");
        else if (me == 2) printf("%s\n", "わたしの手:グー");
        else printf("%s\n", "わたしの手:チョキ");

        if (you == me) printf("%s\n", "あいこです。");
        else if ((you == 1 && me == 2) || (you == 2 && me == 3) || (you == 3 && me == 1)){
            printf("%s\n", "あなたが勝ちました！");
            flag = 1;
        }
        else {
            printf("%s\n", "あなたが負けました！");
            flag = 1;
        }
    }

    return 0;
}
