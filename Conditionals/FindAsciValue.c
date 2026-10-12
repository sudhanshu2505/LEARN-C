#include<stdio.h>
int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c", &ch);
    int asciiValue = (int)ch; // type casting to get ASCII value
    printf("ASCII value of %c is %d", ch, asciiValue);
}