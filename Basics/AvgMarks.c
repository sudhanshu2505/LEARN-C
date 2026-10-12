#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three marks of the student: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg = (a + b + c) / 3.0;
    printf("average marks of the student is %f", avg);
}