#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    int unique[n];
     for(int i=0;i<n;i++){
        unique[i]=0;
    }
    for(int i=0 ;i<n;i++){
        unique[arr[i]]++;
    }
    for(int i=0;i<n;i++){
         if(unique[arr[i]]){
            printf("%d ",arr[i]);
         }
         }
    return 0;
}
