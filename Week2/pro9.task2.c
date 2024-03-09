#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello please enter the number to calculate the factorial \n");
    int n;
     scanf("%d",&n);
     int fact=1;
     while(n!=0){
        fact*=n;
        n--;
     }
     printf("The factorial is %d \n",fact);
    return 0;
}
