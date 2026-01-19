#include <stdio.h>
//Divide a number by 6 and print
int main(){
    volatile int num;
    scanf("%d", &num);
    num /= 6;
    printf("%d",num);
}