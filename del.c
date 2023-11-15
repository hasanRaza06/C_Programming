#include<stdio.h>
#define x 5
void main()
{
 int i,p,a[x],b[x],c[x],num;
 printf("Enter the value in array :\n");
 for(i=1;i<=x;i++)
  {
    scanf("%d",&a[i]);
   }
  printf("Enter num of element no to delete it :\n ");
  scanf("%d",&num);
   for(i=1;i<=x;i++) 
     {
       if(i=num)
       {
        a[i]=0;
        b[i]=a[i];
        }
       c[i]=(a[i]-b[i]);
    }
      for(i=1;i<=x;i++)
       {
         if(c[i]!=0)
         printf("%d ",c[i]);
      }
}