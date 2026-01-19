#include <stdio.h>
//get a number, multiply by 3 and print
int main(){
    volatile int num;
    scanf("%d",&num);
    num *= 3;
    printf("%d",num);
}