#include <stdio.h>
//Subtract 5 from number and print if odd
int main(){
    volatile int num;
    scanf("%d", &num);
    (num%2 != 0) ? (printf("%d", num-5)) : (printf("%d",num)); 
}