#include <stdio.h>
int n;
int mul(int arr1[],int arr2[])
{
    int m=0,*p1,*p2;
    for(p1=arr1,p2=arr2;p1<=&arr1[n-1];p1++,p2++){
    m +=*p1 * *p2;
   }
  return m;
}
int main() {

   printf("Please enter the size of array \n");
   scanf("%d",&n);
   int arr1[n],arr2[n];
   printf("Please enter the elements of array1 \n");
   int *p1,*p2=arr2;
   for(p1=arr1;p1<=&arr1[n-1];p1++){
    scanf("%d",&*p1);
   }
   printf("Please enter the elements of array2 \n");
   for(p2=arr2;p2<=&arr2[n-1];p2++){
    scanf("%d",&*p2);
   }
   printf("The multiplication between the two arrays is %d \n",mul(arr1,arr2));
   return 0;
}