#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){
    srand(time(NULL));

    int count = 0, max = RAND_MAX;
    double x_n, y_n;

    for (int i = 0; i < 1000000; i++){
        x_n = 2 * (rand() / (max + 1.0)) - 1.0;
        y_n = 2 * (rand() / (max + 1.0)) - 1.0;
        if (pow(x_n, 2) + pow(y_n, 2) <= 1) count++;
    }

    double ans = 4 * (count / 1000000.0);
    printf("円の面積は%f\n", ans);

    return 0;
}
