#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,rows;
    printf ("enter the number of the rows: ");
    scanf("%d",&rows);
    n=rows/2;
    for(int i = 1 ; i <= n ; i++ )
    {
        for(int j = 1 ; j <= n-i+1 ; j++ )
        {
            printf (" ");
        }
        for(int k = 1 ; k <= 2*i-1 ; k++ )
        {
            printf("*");
        }
        printf("\n");
    }
    if(rows%2!=0)
    {
        for(int i = 0 ; i<=2*n;i++)
        {
            printf ("*");
        }
        printf ("\n");
    }

    for(int i = 1 ; i <= n ; i++ )
    {
        for(int j = 1 ; j <=i ; j++ )
        {
                printf (" ");
        }
        for(int k = 1 ; k <= 2*(n -i)+1  ; k++ )
        {
                printf("*");
        }
        printf("\n");
    }



    return 0;
}
