#include<stdio.h>
#define x 5
void main()
{
 int  i,j,k,l,a[x],b[x],c[x],d[x],count=0,tmp=0;
 printf("Enter the five values in arrays :\n");
 for(i=0;i<=(x-1);i++)
  {
   scanf("%d",&a[i]);
  }
  for(j=0;j<=(x-1);j++)
   {
    b[j]=a[j];
   }
  for(k=0;k<=(x-1);k++)
   {
    for(l=0;l<=(x-1);l++)
     {
      if(a[k]==b[l])
       count++;
       if(count>1)
        tmp++;
      }
       if(tmp>=1)
        {
         c[k]=b[k];
         }
      count=0;
      tmp=0;
   }
    printf("Unique elements found in this array are :\n");
    for(i=0;i<=(x-1);i++)
     {
      d[i]=a[i]-c[i];
       if(d[i]==0)
        i++;
        printf("%d ",d[i]);
      }
} 


















