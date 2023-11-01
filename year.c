#include<stdio.h>
void main()
{
  int num,year,weeks,days,rem;

  printf("Enter the number of days do you have  :");
  scanf("%d",&num);  
  year=num/365;
  rem=num%365;
  weeks=rem/7;
  days=rem%7;
  printf("Years = %d\n",year);
  printf("Weeks = %d\n",weeks);
  printf("Days = %d\n",days);
}