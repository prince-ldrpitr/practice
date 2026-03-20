/*Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). */
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum =0;
    for(int i=1;i<=10;i++){
        sum=sum+i*n;
        printf("%d * %d = %d\n",n,i,n*i);
    }
    printf("the sum is:%d",sum);
    return 0;
}