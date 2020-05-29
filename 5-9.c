#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//参考 https://www.ishikawa-lab.com/montecarlo/5shou.html

int main(void){
    srand(time(NULL));
    double x, y, z;
    int count = 0;
    for (int i = 0; i < 1000000; i++){
        x = (rand() / (RAND_MAX + 1.0)) * 2 - 1.0;
        y = (rand() / (RAND_MAX + 1.0)) * 2 - 1.0;
        z = (rand() / (RAND_MAX + 1.0)) * 2 - 1.0;
        if (pow(x, 2) + pow(y, 2) + pow(z, 2) <= 1) count++;
    }
    double ans = pow(2, 3) * count / 1000000.0;
    printf("半径1の球の体積は%f\n", ans);

    return 0;
}

