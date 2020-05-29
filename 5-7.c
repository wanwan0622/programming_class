#include <stdio.h>
#include <math.h>
int main(void){
    int r;
    double theta, x, y;
    printf("r を入力してください:");
    scanf("%d", &r);
    printf("θを入力してください:");
    scanf("%lf", &theta);

    double rad = theta * M_PI / 180.0;
    x = r * cos(rad);
    y = r * sin(rad);
    printf("(x, y) = (%lf, %lf)\n", x, y);

    return 0;
}
