#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two numbers: ");  //swap the value of two variables without using third variable
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the value of a is %d and b is %d",a,b);
}