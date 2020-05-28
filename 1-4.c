#include <stdio.h>
int main(){
    int year = 2020;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0)){
        printf("%s\n", "YES");
    }
    else printf("%s\n", "NO");

    return 0;
}
