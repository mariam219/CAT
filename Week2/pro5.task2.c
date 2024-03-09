#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n1,n2,n3;
     printf("Please enter 3 numbers to find the max \n");
     scanf("%d%d%d",&n1,&n2,&n3);
     if (n1>=n2 && n1>=n3)
     {
         printf("The max is %d \n",n1);
          return 0;
     }
      if (n2>=n1 && n2>=n3)
     {
         printf("The max is %d \n",n2);
          return 0;
     }
      if (n3>=n1 && n3>=n2)
     {
         printf("The max is %d \n",n3);
          return 0;
     }
    return 0;
}
