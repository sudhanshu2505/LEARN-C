#include<stdio.h>
void MINofTWO(int a, int b){ //2 numbers ko receive karega and unka min print karega
    if(a<b) printf("%d is minimum",a);
    else printf("%d is minimum",b);
}

int main(){
    MINofTWO(10,20); //function call
}