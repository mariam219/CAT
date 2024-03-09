#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    double ave;
       printf("Please enter 10 numbers to find their summation and average.\n");
    for(int i=0;i<10;i++){
     scanf("%d",&n);
     sum+=n;
    }
    ave=sum/10.0;
     printf("The sum is %d \n and the average is %lf",sum,ave);
    return 0;
}
