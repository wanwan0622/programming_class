#include <stdio.h>
int main(void){
    int a_1 = 1;
    int a_2 = 1;
    int pre_a_1, pre_a_2, ans;
    pre_a_1 = a_1;
    pre_a_2 = a_2;
    printf("%d\n%d\n", a_1, a_2);
    for (int i = 3; i <= 30; i++){
        ans = pre_a_1 + pre_a_2;
        printf("%d\n", ans); 
        pre_a_1 = pre_a_2;
        pre_a_2 = ans;
        //printf("%d %d\n", a_1, a_2);
    }

    return 0;
}

/*
int fib(n){
    if (n == 1 || n == 2){
        printf("a_%d = %d\n", n, 1);
    }
    else {

    }
} */