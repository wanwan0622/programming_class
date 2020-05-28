#include <stdio.h>
#include <math.h>
#include <float.h>

int main(void){
    long double ans = 0.0;
    long double max_ldouble = LDBL_MAX;
    long double tmp = 0;
    double i = 1;
    int count = 1;
    
    for (int i = 1; i <= 10000000; i += 2){
        tmp += pow(-1, count + 1) * (1 / (double)i);
        count += 1;
        //printf("%Lf\n", tmp);
    }
    ans = 4 * tmp;
    printf("%Lf\n", ans);

    return 0;
}
