#include<stdio.h>
void main()
{
 int i,j,k,l,a[2][3],b[2][3],c[2][3];
  printf("Enter value in first 2d array :\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
     {
      printf("Enter value inside [%d][%d]",i,j);
       scanf("%d",&a[i][j]);
     }
  }
   printf("Enter value in second 2d array :\n");
    for(k=0;k<2;k++)
      {
       for(l=0;l<3;l++)
       {
         printf("Enter value inside [%d][%d]",k,l);
         scanf("%d",&b[k][l]);
       }
     }
       printf("_________________________\n");
      printf("\nFirst matrix is :\n");
      //printf("_________________________\n");
      for(i=0;i<2;i++)
      {
        for(j=0;j<3;j++)
         {
         printf("%d ",a[i][j]);
         }
        if(j=2)
        printf("\n");
      }
      printf("_________________________\n");
       printf("\nSecond matrix is :\n");
      // printf("_________________________\n");
        for(k=0;k<2;k++)
        {
         for(l=0;l<3;l++)
         {
          printf("%d ",b[k][l]);
         }
          if(l=2)
          printf("\n");
        }
        printf("_________________________\n");
         for(i=0;i<2;i++)
          {
           for(j=0;j<3;j++)
            {
             c[i][j]=a[i][j]+b[i][j];
            }
         } 
          printf("\nAdded matixs are :\n");
        //  printf("_________________________\n");
          for(k=0;k<2;k++)
           {
             for(l=0;l<3;l++)
              {
                printf("%d ",c[k][l]);
              }
              if(l=2)
              printf("\n");
           }
            printf("_________________________\n");        
}
          