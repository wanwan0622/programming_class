#include <stdio.h>

int getDays(int month);

int main(void){
    int n, day;
    scanf("%d", &n);
    day = getDays(n);
    printf("%d\n", day);

    return 0;
}

int getDays(int month){
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else if(month == 2) return 28;
    else return 31;
}
