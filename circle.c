#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,a,b;
    printf("Enter the value of x and y :");
    scanf("%d %d",&x,&y);
    printf("Enter the value of redius of the circle :");
    scanf("%d",&r);
    a=(pow(x,2)+pow(y,2));
    b=pow(r,2);
    if(a==b)
        printf("The point (%d,%d) lies on the circle. ",x,y);
    else if(a>b)
        printf("The point (%d,%d) lies on outside the circle. ",x,y);    
    else
        printf("The point (%d,%d) lies on inside the circle. ",x,y);
    return 0;    
}