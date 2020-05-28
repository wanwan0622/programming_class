#include <stdio.h>
int main(){
    int ans = 1;
    for (int i = 1; i <= 10; i++){
        ans *= i;
    }
    printf("%d\n", ans);

    return 0;
}
