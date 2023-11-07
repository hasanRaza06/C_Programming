#include<stdio.h>
#include<math.h>
int main()
{
    float b,c,x,y,r,s;
    printf("Enter the value of x coodinate :");
    scanf("%f",&x);
    printf("Enter the value of y coodinate :");
    scanf("%f",&y);
    b=(x*x+y*y);
    r=sqrt(b);
    c=y/x;
    s=tan(c);
    printf("The cartesian coordinates of (%.0f,%.0f) is (%.2f,%.2f)",x,y,r,c);
    return 0;
}