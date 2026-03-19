//Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i=0;
    int sum=0;
    while(i<=n){
        sum = sum +i;
        i++;
    }
    printf("the sum is :%d",sum);
    return 0;
}