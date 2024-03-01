#include <stdio.h>
int n;
void sort(int arr[]){
    int temp;
    for (int *p1=arr;p1<=&arr[n-1];p1++){
        for (int *p2=arr;p2<=&arr[n-1];p2++){
        if(*p1<=*p2){
            temp=*p1;
            *p1=*p2;
            *p2=temp;
        }
    }
    }
}
int main()
{
    printf("Please enter the size of array \n");
   scanf("%d",&n);
   int arr[n];
    printf("Please enter the elements of array1 \n");
   int *p1;
   for(p1=arr;p1<=&arr[n-1];p1++){
    scanf("%d",&*p1);}
    printf("Array before sorting: \n");
   for (p1=arr;p1<=&arr[n-1];p1++){
         printf("%d ",*p1);
    }
    sort(arr);
    printf("\nArray after sorting: \n");
      for (p1=arr;p1<=&arr[n-1];p1++){
         printf("%d ",*p1);
    }
    return 0;
}