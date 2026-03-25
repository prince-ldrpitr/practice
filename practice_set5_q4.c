//Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
int fabonacci(int n);


int fabonacci(int n){
	if(n==1 || n==2) return n-1;
	return fabonacci(n-1) + fabonacci(n-2);
}
int main()
{
	int n;
	printf("enter the number is :");
	scanf("%d",&n);
	int fact = fabonacci(n);
	printf("%d",fact);
	return 0;
}