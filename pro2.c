#include <stdio.h>
int sum(int *p1,int *p2)
{
  return *p1 + *p2;
}
int main() {

   printf("Please enter two numbers to find the sum  \n");
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   int *p1=&n1,*p2=&n2;
   printf("The sum of two numbers is %d \n",sum(p1,p2));
   return 0;
}