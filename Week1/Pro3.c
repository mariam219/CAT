#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello please enter a dollars and cents amount\n");
    double n;
    scanf("%lf",&n);
    double new_n=n+n*.05;
    printf("The amount after the tax is %lf \n",new_n);
    return 0;
}
