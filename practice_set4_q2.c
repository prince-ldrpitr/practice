// Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("%d\n",i*10);
    }
    return 0;
}