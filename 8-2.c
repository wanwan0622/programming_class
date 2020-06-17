#include <stdio.h>

double min5(double a, double b, double c, double d, double e);

int main(void){
    double x1,x2,x3,x4,x5;
    double min;
    printf("スペース区切りで 5個数字をいれてください。");
    scanf("%lf%lf%lf%lf%lf",&x1, &x2, &x3, &x4, &x5);
    min = min5(x1, x2, x3, x4, x5); printf("最小値:%f\n", min);

    return 0;
}

double min5(double a, double b, double c, double d, double e){
    if (a <= b && a <= c && a <= d && a <= e) return a;
    else if (b <= a && b <= c && b <= d && b <= e) return b;
    else if (c <= a && c <= b && c <= d && c <= e) return c;
    else if (d <= a && d <= b && d <= c && d <= e) return d;
    else return e;
}
