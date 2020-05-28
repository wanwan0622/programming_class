#include <stdio.h>

int main(void){

  double debt = 100000; //借金を100000円した。
  double r = 1.15; //年率を15%とする。

  printf("最初に%f円借りた。\n", debt); //最初の借金表示
  debt = debt * r;
  printf("1年目の借金は%f円。\n", debt); //1年目の借金表示
  debt = debt * r;
  printf("2年目の借金は%f円。\n", debt); //2年目の借金表示
  debt = debt * r;
  printf("3年目の借金は%f円。\n", debt); //3年目の借金表示
  debt = debt * r;
  printf("4年目の借金は%f円。\n", debt); //4年目の借金表示
  debt = debt * r;
  printf("5年目の借金は%f円。\n", debt); //5年目の借金表示

  return 0;

}
