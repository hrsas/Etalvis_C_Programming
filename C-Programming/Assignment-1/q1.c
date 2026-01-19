#include <stdio.h>

//Get a number from user, add 2 and print

int main(){
    volatile int num;
    scanf("%d",&num);
    num += 2;
    printf("%d",num);
}