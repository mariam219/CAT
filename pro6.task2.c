#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello please enter the result of 3 x 4 \n");
    int res;
     scanf("%d",&res);
     if(res==12){
        printf("Thanks");
     }
     else{
        while(res!=12){
             printf("Try again \n");
             scanf("%d",&res);
        }
        printf("Thanks \n");
     }
    return 0;
}
