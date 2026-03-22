//Write a program using function to find average of three numbers. 
#include<stdio.h>
float average(int,int,int);
int main(){
    int n1,n2,n3;
    printf("enter the three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("the average of three numbers is :%f",average(n1,n2,n3));
    return 0;
}
float average(int x,int y,int z){
    return (x+y+z)/3;
}