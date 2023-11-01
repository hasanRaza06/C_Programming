#include<stdio.h>
void main()
{
   int ram,shyam,mohan;
   printf("Enter the age of ram :");
   scanf("%d",&ram);
   printf("Enter the age of shyam :");
   scanf("%d",&shyam);
   printf("Enter the age of mohan :");
   scanf("%d",&mohan);
   if(ram>shyam && ram>mohan)
     printf("Ram is youngest ");
   else if(shyam>ram && shyam>mohan)
     printf("Shyam is youngest ");
   else
     printf("Mohan is youngest");    
}