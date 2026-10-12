#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, s, area;
    printf("enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area of the scalene triangle is %f", area);
}