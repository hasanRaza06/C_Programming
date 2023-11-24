#include<stdio.h>
int main(){
    int num,i=1;
    long sum=1;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&num);
    while(i<=num){
        sum*=i;
        i++;
    }
    printf("The factorial of %d is %ld",num,sum);
    return 0;
}