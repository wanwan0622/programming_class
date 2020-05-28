#include <stdio.h>

int main(void){
    double i;

    for(i=1;i<=2;i=i+0.1){
        printf("Hello! %f\n", i);
        //i = 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0
        //小数の誤差
    }

    return 0;

}
