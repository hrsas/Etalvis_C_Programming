#include <stdio.h>

//Get an input, subtract 5 and print

int main(){
    volatile int num;
    scanf("%d", &num);
    num -= 5;
    printf("%d",num);
}