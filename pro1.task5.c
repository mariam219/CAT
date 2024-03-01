#include <stdio.h>

int main() {
  int num=10;
  printf("The number befor changing is %d \n",num);
  int *p=&num;
  *p=20;
  printf("The number after changing is %d \n",num);
  return 0;
}