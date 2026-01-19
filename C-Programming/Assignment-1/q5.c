#include <stdio.h>
//Divide a number by 8 and print remainder
int main(){
    volatile int num;
    scanf("%d", &num);
    num %= 8;
    printf("%d",num);
}