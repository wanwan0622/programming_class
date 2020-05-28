#include <stdio.h>
int main(void){
    for (int i = 1; i <= 20; i++){
        for (int j = 1; j <= i - 1; j++) printf("%c", '*');
        printf("%c\n", '*');
    }

    return 0;
}
