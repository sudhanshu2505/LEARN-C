#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("enter no. of terms: ");
    scanf("%d",&n);
    printf("fibonacci series: %d %d ",a,b);
    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}