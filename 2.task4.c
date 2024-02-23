#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
                          }
    }
    }
        printf("The second largest element in the array is %d \n",arr[n-2]);
    return 0;
}
