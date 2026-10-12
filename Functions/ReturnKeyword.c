#include<stdio.h>
void fun(int n){
    printf("%d\n",n);
    if(n>20) return;
    printf("%d\n",n*n);
}
int main(){
    fun(10);
}