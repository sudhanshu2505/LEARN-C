#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers(except 0): ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);

    float x, y;
    printf("Enter two float numbers(except 0): ");
    scanf("%f %f", &x, &y);
    printf("Sum: %f\n", x + y);
    printf("Difference: %f\n", x - y);
    printf("Product: %f\n", x * y);
    printf("Quotient: %f\n", x / y);
}
