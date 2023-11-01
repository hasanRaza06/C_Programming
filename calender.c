#include<stdio.h>
void main()
{
    int startyear=1900,year,difference,leap=0,totaldays,day;
    printf("Enter the year between 1900 to 2099 to check its first day of january :");
    scanf("%d",&year);
    difference=year-startyear;
    for(int i=startyear;i<year;i++)
    {
        if(i%100==0)
        {
            if(i%400==0)
            {
                leap++;
            }
        }
        else{
            if(i%4==0)
            {
                leap++;
            }
        }
    }
    totaldays=(difference-leap)*365+leap*366;
    day=totaldays%7;
 switch (day)
    {
    case 0: printf("MONDAY ");
    break;
    case 1: printf("TUESDAY ");
    break;
    case 2: printf("WEDNESDAY ");
    break;
    case 3: printf("THRUSDAY ");
    break;
    case 4: printf("FRIDAY ");
    break;
    case 5: printf("SATURDAY ");
    break;
    case 6: printf("SUNDAY ");
    default: printf("Your calculation is wrong!");
        break;
    }
}