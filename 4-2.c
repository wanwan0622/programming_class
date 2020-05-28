#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    //printf("%lf %lf %lf\n", a, b, c);

    if (a + b > c && b + c > a && c + a > b){
        double s = (a + b + c) / 2.0;
        double ans = pow(s * (s-a) * (s-b) * (s-c), 0.5);
        printf("三角形の面積は%lfです\n", ans);
    }
    else printf("%s\n", "三角形が作れません");

    return 0;
}
