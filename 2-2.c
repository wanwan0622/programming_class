#include <stdio.h>
#include <math.h>
int main(){
    int ans = 0;
    for (int i = 1; i <= 30; i++){
        ans += pow(i, 5);
    }
    printf("%d\n", ans);

    return 0;
}
