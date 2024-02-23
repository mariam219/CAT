#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        printf("Enter row %d :\n",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("Row Totals : ");
     for(int i=0;i<5;i++){
            sum=0;
        for(int j=0;j<5;j++){
            sum+=arr[i][j];
        }
       printf("%d ",sum);
    }
    printf("\n");
      printf("Columns Totals : ");
     for(int i=0;i<5;i++){
            sum=0;
        for(int j=0;j<5;j++){
            sum+=arr[j][i];
        }
       printf("%d ",sum);
    }
    return 0;
}
