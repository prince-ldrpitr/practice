//Write a function to convert Celsius temperature into Fahrenheit. 
#include<stdio.h>
int feranhit(int);
int feranhit(int c){
   return ((9*c)/5) + 32;	
}
int main()
{
	int c;
	printf("enter number c :");
	scanf("%d",&c);
	printf("the convert of farenhit: %d",feranhit(c));
	return 0;
}