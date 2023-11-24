#include<stdio.h>
int fact(int);
int main(){
    int a,res;
    printf("Enter a number to find its factorial : ");
    scanf("%d",&a);
    res=fact(a);
    printf("The factorial of %d is %d",a,res);
    return 0;
}
int fact(int a){
    int f;
    if(a==1)
        return 1;
    else{
        f=a*fact(a-1);
    }    
    return f;
}