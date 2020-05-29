#include <stdio.h>
int main(void){
    int x[10];
    printf("整数を10個スペース区切りで入力してください：");
    for (int i = 0; i < 10; i++) scanf("%d", &x[i]);
    printf("逆の順番：");
    for (int i = 9; i >= 0; i--) printf("%d ", x[i]);
    printf("\n");

    return 0;
}
