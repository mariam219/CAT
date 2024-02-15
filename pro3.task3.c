#include <stdio.h>
#include <stdlib.h>
int count=0;
int digits(int n)
{
    if (n!=0)
    {
        count++;
        return digits(n/10);
    }
    else{return count;}
}
int main()
{
     printf("Hello please enter number to find the number of the digits \n");
     int num;
     scanf("%d",&num);
     printf("The number of the digits %d",digits(num));
    return 0;
}
