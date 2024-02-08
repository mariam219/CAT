#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g;
     printf("Please enter your grade \n");
     scanf("%d",&g);
     if (g>=85)
     {
         printf("You are Excellent \n");
     }
     else if (g>=70)
     {
         printf("You are very good \n");
     }
          else if (g>=60)
     {
         printf("You are good \n");
     }
          else if (g>=50)
     {
         printf("You are acceptable \n");
     }
          else if (g<50)
     {
         printf("You are fail \n");
     }
    return 0;
}
