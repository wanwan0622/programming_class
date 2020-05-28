#include <stdio.h>
//0xFF = 111111(6進数)
int main(void){
    int ans = 0;

    for (int x = 0; x <= 255; x++){
        for (int y = 0; y <= 255; y++){
            if ((x | y) == 0xFF) ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}
