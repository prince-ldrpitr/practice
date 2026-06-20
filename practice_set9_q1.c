#include<stdio.h>

struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1 = {2,3};
    printf("the vector is :i%d + j%d",v1.x,v1.y);
    return 0;

}