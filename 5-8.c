#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int flag = 1;
    if (n == 1) flag = 0;
    for (int i = 2; i < n; i++){
        if (n % i == 0) flag = 0;
    }

    if (flag) printf("nは素数です。\n");
    else printf("nは素数ではありません。\n");

    return 0;
}
