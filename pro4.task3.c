#include <stdio.h>
#include <stdlib.h>
void login()
{
    int id1=4444,p1=123,p,id;
     printf("Please enter your ID\n");
     scanf("%d",&id);
     if (id==id1)
        {
        printf("Please enter your password\n");
      scanf("%d",&p);
      if (p==p1){
        printf("welcome");
      }
      else{
           int i=0;
           while(i<2)
      {
         printf("try again \n");
         scanf("%d",&p);
         if (p==p1){
                printf("welcome");
         return 0;}
         i++;
      }
      printf("No more tries ");
      }}
     else
     {
         printf("Wrong ID ");
     int i=0;
           while(i<2)
      {
         printf("try again \n");
         scanf("%d",&id);
         if (id==id1){
               printf("Please enter your password\n");
      scanf("%d",&p);
      if (p==p1){
        printf("welcome");
      }
      else{
           int i=0;
           while(i<2)
      {
         printf("try again \n");
         scanf("%d",&p);
         if (p==p1){
                printf("welcome");
         return 0;}
         i++;
      }
      printf("No more tries ");
         return 0;}
         i++;
      }
      i++;
     }

}}
int main()
{
    printf("Hello world! if you want to login choose 1 if you want to exit choose 2 \n");
    int choose;
    scanf("%d",&choose);
    if (choose==1)
    {
        login();
    }
    else if(choose==2)
    {
         return 0;
    }
    return 0;
}

