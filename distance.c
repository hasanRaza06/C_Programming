#include<stdio.h>
int main()
{
    float distance,m,cm,inch,feet;
    printf("Enter the distance in km :");
    scanf("%f",&distance);
    printf("The distance in km : %.2f",distance);
    m=distance*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("\nThe distance in metere : %.2f",m);
    printf("\nThe distance in centimetre :%.2f",cm);
    printf("\nThe distance in feet :%.2f",feet);
    printf("\nThe distance in inch :%.2f",inch);
    return 0;
}