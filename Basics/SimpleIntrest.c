#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter principal amount: ");
    scanf("%d",&a);
    printf("enter rate of interest: ");
    scanf("%d",&b);
    printf("enter time in years: ");
    scanf("%d",&c);
    printf("simple intreset is %d",(a*b*c)/100);

}