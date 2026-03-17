/* Write a program to find greatest of four numbers entered by the user.*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the four numbers :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("%d is a gretest",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is a gretest",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is a gretest",c);
    }
    else{
        printf("%d is a gretest",d);
    }
    return 0;
}