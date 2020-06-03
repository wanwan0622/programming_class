#include <stdio.h>
#include <string.h>
#include <math.h>
double max(double a, double b){
    if (a >= b) return a;
    else return b;
}

int main(void){
    char input_1[100], input_2[100];
    long double ans;
    double f_a = 0.0;
    double f_b = 0.0;
    printf("一人目の名前:");
    scanf("%s", input_1);
    printf("二人目の名前:");
    scanf("%s", input_2);
    for (int i = 0; i < strlen(input_1); i++){
        f_a += input_1[i];
    }
    for (int i = 0; i < strlen(input_2); i++){
        f_b += input_2[i];
    }
    ans = 1 - fabs(f_a - f_b) / max(f_a, f_b);
    printf("二人の相性度は%Lf\n", ans);

    return 0;
}
