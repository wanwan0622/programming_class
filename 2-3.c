#include <stdio.h>
int main(){
    double ans = 1.0;
    for (int i = 0; i < 1000000; i++){
        ans *= 0.999999;
    }
    ans *= 100;
    printf("%f%%\n", ans);

    return 0;
}
