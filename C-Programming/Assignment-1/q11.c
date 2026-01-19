#include <stdio.h>
//get a 3 digit number and print sum of digits
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        int sum = 0;
        while(num){
            sum += (num%10);
            num = num/10;
        }
        printf("Sum: %d", sum);
    }else{
        printf("Enter a 3 digit number.");
    }
}