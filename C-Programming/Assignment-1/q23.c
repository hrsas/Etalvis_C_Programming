#include <stdio.h>
//get a 3 digit number and make the ten's digit as 0
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        int digit = num%10;
        num = ((num/100)*100) + digit;
        printf("Ans: %d",num);
    }else{
        printf("Enter a 3 digit number.");
    }
}