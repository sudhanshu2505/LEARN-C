#include<stdio.h>
int main(){
    int l,b;
    printf("enter the length of rectangle: ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle: ");
    scanf("%d",&b);
    int Area = l*b;
    printf("area of rectangle is %d",Area);
    int perimeter = 2*(l+b);
    printf("perimeter of rectangle is %d",perimeter);
}