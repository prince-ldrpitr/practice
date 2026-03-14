/*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                         
Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. */
#include<stdio.h>
int main(){
	int income;
	float tax;
	printf("enter the income:");
	scanf("%d",&income);
	if(income<250000){
		tax = 0;
	}
	else if(income<500000){
		tax = income * 0.05;
	}
	else if(income<1000000){
		tax = income * 0.20;
	}
	else if(income>1000000){
		tax = income * 0.30;
	}
	printf("the tax is:%f",tax);
	return 0;
}