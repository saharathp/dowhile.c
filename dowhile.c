#include<stdio.h>

int main(){
    int i=0,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    do{

        printf("The value of i=%d\n",i+1);
        i++;
    }
    while(i<n);
    return 0;
}