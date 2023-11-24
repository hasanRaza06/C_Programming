#include<stdio.h>
int main(){
    int i,j,sip=10,l=1,k=1;
    for(i=1;i<5;i++){
        for(j=1;j<sip;j++){
            printf(" ");
        }
        sip-=2;
        for(k=0;k<i;k++){
            printf(" %d ",l++);
        }
        printf("\n");
    }
    return 0;
}