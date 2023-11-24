#include<stdio.h>
int fibo(int);
int main(){
     int terms=25,n=0,i;
     for(i=1;i<=terms;i++){
        printf("%d  ",fibo(n));
        n++;
     }
    return 0;
}
int fibo(int a){
    if(a==0||a==1)
        return a;
    else
        return(fibo(a-1)+fibo(a-2));    
}