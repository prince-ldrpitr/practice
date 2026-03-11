/*
Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. */
#include<stdio.h>
int main(){
    int r;
    printf("the radius is :");
    scanf("%d",&r);
    float a = 3.14*r*r;
    printf("the area of circle is :%f",a);
    return 0;
}