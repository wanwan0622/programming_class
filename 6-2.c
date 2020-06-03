#include <stdio.h>
int main(void){
    char one[100], two[100], three[100], four[100], ans[400];
    printf("1 つめ:");
    scanf("%s", one);
    printf("2 つめ:");
    scanf("%s", two);
    printf("3 つめ:");
    scanf("%s", three);
    printf("4 つめ:");
    scanf("%s", four);
    sprintf(ans, "%s-%s-%s-%s", one, two, three, four);
    printf("%s\n", ans);

    return 0;
}
