#include<stdio.h>
#define x 5
void main()
{
  int i,a[x],num;
  printf("Enter values in array :\n");
  for(i=0;i<=x;i++)
   {
     if(i==x)
     {
     a[i]=0;
     break;
     }
      scanf("%d",&a[i]);
   }  
     for(i=0;i<=x;i++)
     {
        printf("%d ",a[i]); 
     }
      printf("\nEnter a value to insert in array :\n");
      scanf("%d",&num);
        for(i=x;i>=num;i--)
        {
            a[i]=a[i-1];
             if(a[i]=num)
          {
              a[num]=0;                                                       
          }      
        }
      for(i=0;i<=x;i++)
      { 
          printf("%d ",a[i] );
      }

}