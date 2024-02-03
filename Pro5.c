#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    printf("Hello please enter 3 number \n");
    for(int i=0 ;i<3;i++)
        {
        scanf("%d",&arr[i]);
    }
      for(int i=2 ;i>=0;i--)
        {
        printf("%d \n",arr[i]);
    }
    return 0;
}
