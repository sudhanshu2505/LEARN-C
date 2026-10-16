#include<stdio.h>
int main(){
    float a;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Area of circle: %f\n", 3.14 * a * a);
    printf("Area of rectangle: %f\n", a * (a + 1));
    printf("Area of triangle: %f\n", (a * (a + 1)) / 2);
    printf("Area of square: %f\n", a * a);

}