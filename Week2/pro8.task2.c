#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello please enter the number to display the multiplication table  \n");
    int n;
     scanf("%d",&n);
     for(int i=1;i<=12;i++){
        printf("%d * %d =%d \n",i,n,i*n);
     }
    return 0;
}
