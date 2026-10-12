#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the two numbers: ");  //swap the value of two variables using third variable
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping the value of a is %d and b is %d",a,b);
}