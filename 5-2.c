#include <stdio.h>
#include <math.h>
int main(void){
    int x[] = {13, 10, 5, 2, 13, 5, 27, 15, 8, 2};
    double ave = 0, stn = 0;
    for (int i = 0; i < 10; i++) ave += x[i];
    ave /= 10.0;
    for (int i = 0; i < 10; i++) stn += pow(x[i] - ave, 2);
    stn /= 10.0;
    stn = pow(stn, 0.5);
    printf("標準偏差は%f\n", stn);

    return 0;
}
