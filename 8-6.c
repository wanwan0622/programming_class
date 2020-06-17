#include <stdio.h>
#include <string.h>
void communication(void);

int main(void){
    communication();

    return 0;
}

void communication(void){
    char input[100][100], ans[100];
    char str1[100] = "Hello";
    char str2[100] = "What is your name?";
    char str3[100] = "What is your favorite food?";
    char str4[100] = "Finish";
    while (1){
        scanf("%s", input);
        printf("%s\n", input);
        if (strcmp(input, str1) == 0) printf("Hello!\n");         //sprintf(ans, "Hello!");
        if (strlen(input) == 4) printf("I'm anonymous.\n");  //sprintf(ans, "I'm anonymous.");
        if (strlen(input) == 5) printf("I love apples.\n"); //sprintf(ans, "I love apples.");
        if (strcmp(input, str4) == 0) break;
        //printf("%s\n", ans);
    }
}
