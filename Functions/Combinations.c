#include<stdio.h>
int fact(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);
    int ncr = fact(n)/(fact(r)*fact(n-r));
    printf("The value of C(%d,%d) is %d",n,r,ncr);
    return 0;
}