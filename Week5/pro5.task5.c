#include <stdio.h>
int main()
{
    int x=10,y=20,z=30,*px=&x,*py=&y,*pz=&z;
    printf("x= %d y= %d z= %d \npx= %d py= %d pz= %d \n*px= %d *py= %d *pz= %d \n",x,y,z,px,py,pz,*px,*py,*pz);
     pz = px;
     px = py;
     py = pz;
     prinf("after swaping ");
    printf("x= %d y= %d z= %d \npx= %d py= %d pz= %d \n*px= %d *py= %d *pz= %d",x,y,z,px,py,pz,*px,*py,*pz);
 return 0;
}