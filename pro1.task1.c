#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    printf("Please enter your working hours\n");
    scanf("%d",&h);
    if (h<40)
    {
           printf("Your salary is %d \n",h*50-h*5);
    }
    else
    {
           printf("Your salary is %d \n",h*50);
    }
    return 0;
}
