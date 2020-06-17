#include <stdio.h>
#include <string.h>

void kyohaku(void);

int main(void){
    kyohaku();

    return 0;
}

void kyohaku(void){
    char input[1000], cmp[5] = "yes";
    while (1){
        printf("プログラミングできますか?");
        scanf("%s", input);
        if (strcmp(input, cmp) == 0){
            printf("それは良かったです。\n");
            break;
        }
    }
}
