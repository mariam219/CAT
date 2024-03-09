#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
     printf("Please enter your ID\n");
     scanf("%d",&id);
     switch(id){
     case 1234:
        printf("Your name is Harry\n");
        break;
         case 5678:
        printf("Your name is Ron\n");
        break;
         case 1145:
        printf("Your name is Hermione\n");
        break;
          default:
        printf("Wrong IDn");
        break;
     }
    return 0;
}
