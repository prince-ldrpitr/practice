/*Write a program to determine whether a character entered by the user is 
lowercase or not. */
#include<stdio.h>
int main(){
    char ch;
    printf("enter the charcter is:");
    scanf("%c",&ch);
    printf("the charcter is :%c\n",ch);
    printf("the value of charcter is :%d\n",ch);
    if(ch >=97 && ch<=122){
    	printf("the charcter is lower case\n");
	}
	else{
		printf("the charcter is not a lower case");
	}
	return 0;
}