#include <stdio.h>
#define True 1
int main(void){
    /* 
    int x = 99999999;
    for (int i = 2; i <= x; i++){
        if (x % i == 0){
            printf("%d\n", i);
            x /= i;
            i--;
        }
    }*/

    int i = 2;
    int x = 99999999;
    while (True){
        if (i > x) break;
        else {
            if (x % i == 0){
                printf("%d\n", i);
                x /= i;
            }
            else i++;
        }
    }

    return 0;
}
