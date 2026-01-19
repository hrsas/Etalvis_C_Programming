#include <stdio.h>
//get a 2 digit number and print ten's digit
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 9 && num < 100){
        printf("%d", (num/10)%10);
    }else{
        printf("Enter a 2 digit number.");
    }
}