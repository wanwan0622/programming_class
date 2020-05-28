#include <stdio.h>
int main(void){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 8; j++){
            printf("%02d ", i * j);
        }
        printf("%02d\n", i * 9);
    }

    return 0;
}
