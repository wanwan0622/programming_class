#include <stdio.h>
#define inf 2147483647
#define True 1
int main(void){
    int n = 1;
    long ans = 1;
    while (True){
        //printf("%d %ld\n", n, ans);
        ans *= n;
        if (ans >= inf){
            printf("最大のnは%d\n", n-1);
            break;
        }
        else {
            printf("%d! = %ld\n", n, ans);
        }
        n++;
    }

    return 0;
}
