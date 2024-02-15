#include <stdio.h>
#include <stdlib.h>
int num1,num2;
void swap()
{
    int tem=num1;
    num1=num2;
    num2=tem;
}
int main()
{
    printf("Hello please enter two  numbers \n");
    scanf("%d%d",&num1,&num2);
    printf("The numbers befor swaping is number1=%d number2=%d \n",num1,num2);
    swap();
     printf("The numbers after swaping is number1=%d number2=%d",num1,num2);
    return 0;
}
