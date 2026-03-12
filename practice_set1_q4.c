/*Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. */
#include<stdio.h>
int main(){
    int p=10,r=10,t=10;
    float s = (p*r*t) / 100;
    printf("the simple interest is:%f",s);
    return 0;
}