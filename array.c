#include<stdio.h>
void main()
{
  int n,a[3],sum=0;
  printf("Enter 3 values in array :\n\n");
  for(int i=0;i<3;i++)
  {
     printf("Enter value in a[%d] : ",i);
     scanf("%d",&a[i]); 
  }
  printf("\n");
  for(int i=0;i<3;i++)
  {
    printf("The values in array a[%d] is %d ",i,a[i]);
    printf("\n");
  }
  printf("\nThe reverse of the array is : \n\n");
  for(int i=2;i>=0;i--)
  {
     printf("The reverse value of a[%d] is %d ",i,a[i]);
     printf("\n"); 
  }
  for(int i=0;i<3;i++)
  {
     sum+=a[i]; 
  }
  printf("\nThe sum of the values stored in array : %d",sum);
}