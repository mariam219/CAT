#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,p1=123,p;
     printf("Please enter your ID\n");
     scanf("%d",&id);
     printf("Please enter your password\n");
      scanf("%d",&p);
      if (p==p1){
        printf("welcome");
      }
      else{
           int i=0;
           while(i<2)
      {
         printf("try again \n");
         scanf("%d",&p);
         if (p==p1){
                printf("welcome");
         return 0;}
         i++;
      }
      printf("No more tries \n You are not registered");
      }
    return 0;
}
