//Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
#include<stdio.h>
int fun(int);

int fun(int n){

  if(n==1) return 1;
   return fun(n-1) + n;
}
int main(){
	int n;
	printf("enter the number is:");
	scanf("%d",&n);
	int sum = fun(n);
	printf("the sum of n number is:%d",sum);
	return 0;
}