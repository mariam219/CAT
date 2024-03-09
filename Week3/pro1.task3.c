#include <stdio.h>
#include <stdlib.h>
int find_max(int n1,int n2)
{
    if(n1>=n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    printf("Hello please enter two  numbers to find the max \n");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The max is %d",find_max(num1,num2));
    return 0;
}
