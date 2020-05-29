#include <stdio.h>
int main(void){
    int x[] = {13, 10, 5, 2, 13, 5, 27, 15, 8, 2};
    double ans = 0;
    for (int i = 0; i < 10; i++) ans += x[i];
    ans /= 10.0;
    printf("平均は%f\n", ans);

    return 0;
}
