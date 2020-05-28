#include <stdio.h>
int main(){
    for (int i = 1; i <= 40; i++){
        if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3) printf("AHO\n");
        else printf("%d\n", i);
    }

    return 0;
}
