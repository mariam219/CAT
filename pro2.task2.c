#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
     printf("Please enter the number\n");
     scanf("%d",&num);
     if(num%2==0){
         printf("%d is even number\n",num);
     }
     else{
         printf("%d is odd number\n",num);
     }
    return 0;
}
