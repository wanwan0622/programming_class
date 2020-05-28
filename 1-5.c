#include <stdio.h>
int main(){
    int year = 2020;

    if (year % 12 == 4) printf("%d年の干支はねずみです。\n", year);
    else if (year % 12 == 5) printf("%d年の干支はうしです。\n", year);
    else if (year % 12 == 6) printf("%d年の干支はとらです。\n", year);
    else if (year % 12 == 7) printf("%d年の干支はうさぎです。\n", year);
    else if (year % 12 == 8) printf("%d年の干支はたつです。\n", year);
    else if (year % 12 == 9) printf("%d年の干支はへびです。\n", year);
    else if (year % 12 == 10) printf("%d年の干支はうまです。\n", year);
    else if (year % 12 == 11) printf("%d年の干支はひつじです。\n", year);
    else if (year % 12 == 0) printf("%d年の干支はさるです。\n", year);
    else if (year % 12 == 1) printf("%d年の干支はとりです。\n", year);
    else if (year % 12 == 2) printf("%d年の干支はいぬです。\n", year);
    else if (year % 12 == 3) printf("%d年の干支はいのししです。\n", year);

    return 0;
}
