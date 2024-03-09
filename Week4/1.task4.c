#include <stdio.h>
#include <stdlib.h>
int n;
void asc(int arr[])
{ int temp=0;
    for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
                          }
    }
    }
    printf("The array after ascending order is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void desc(int arr[])
{ int temp=0;
    for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
                          }
    }
    }
    printf("The array after descending order is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int choice;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter 0 for ascending or Enter 1 for descending \n");
     scanf("%d",&choice);
     if (choice==0){
        asc(arr);
     }
     else{
        desc(arr);
     }
    return 0;
}
