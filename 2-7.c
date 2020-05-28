#include <stdio.h>
int main(){
    int n = 27;
    while (1){
        if (n == 1) {
            printf("コラッツの予想が成り立つ\n");
            break;
        }
        else{
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
        }
    }
}