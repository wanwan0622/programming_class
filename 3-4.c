#include <stdio.h>
#include <math.h>
int main(void){
    double ans = 1;
    for (int i = 1; i <= 30; i++) ans *= 2;

    ans *= 2 * pow(10, -8);
    printf("%ft\n", ans);

    return 0;
}
