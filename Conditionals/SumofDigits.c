//without using loop
#include<stdio.h>
int main(){
    int n, sum = 0, digit;
    printf("enter the number: ");
    scanf("%d", &n);
    digit = n % 10; // extract the last digit
    sum += digit;   // add it to sum
    n /= 10;        // remove the last digit

    digit = n % 10; // extract the next last digit
    sum += digit;   // add it to sum
    n /= 10;        // remove the last digit

    digit = n % 10; // extract the next last digit
    sum += digit;   // add it to sum
    n /= 10;        // remove the last digit

    printf("sum of digits is %d", sum);
}

//with using loop
#include<stdio.h>
int main(){
    int n, sum=0,digit;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0){
        digit=n%10; //extract the last digit
        sum+=digit; //add it to sum
        n/=10;      //remove the last digit
    }
    printf("sum of digits is %d", sum);
}