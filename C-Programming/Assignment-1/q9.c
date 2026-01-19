#include <stdio.h>
//get a 3 digit number and print hundred's digit
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        printf("%d", (num/100)%10);
    }else{
        printf("Enter a 3 digit number.");
    }
}