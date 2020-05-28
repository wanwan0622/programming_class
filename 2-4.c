#include <stdio.h>
#include <time.h>
int main(){
    int start = clock();
    for (int i = 0; i <= 1000000; i++) printf("Hello!\n");
    int end = clock();
    printf("%d\n", end - start);

    return 0;
}
