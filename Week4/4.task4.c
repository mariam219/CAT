#include <stdio.h>
#include <stdlib.h>
int n;
int repeat(int arr[])
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main()
{
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ele=repeat(arr);
     printf("The repeating element is %d \n",ele);
    return 0;
}
