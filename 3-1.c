#include <stdio.h>
#define True 1
int main(void){
    int n = 1;
    while (True){
        if (n % 3 == 1 && n % 5 == 2 && n % 7 == 3){
            printf("%d\n", n);
            break;
        }
        else n++;
    }

    return 0;
}
