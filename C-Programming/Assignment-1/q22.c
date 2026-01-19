#include <stdio.h>
//Get a 3 digit number, if sum of digits is < 10, print sum. Else, add digits of sum.
//If sum of digits is < 10, print the sum, otherwise add the digits of sum and print.

int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        int sum = 0;
        while(num){
            sum += (num%10);
            num /=10;
        }
        if(sum >= 10){
            int sum_of_digits = 0;
            while(sum){
                sum_of_digits += (sum%10);
                sum/=10;
            }
            if(sum_of_digits >= 10){
                int final = 0;
                while(sum_of_digits){
                    final += (sum_of_digits%10);
                    sum_of_digits/=10;
                }
                printf("%d", final);
            }
            else{
                printf("%d",sum_of_digits);
            }
        }else{
            printf("%d", sum);
        }
    }else{
        printf("Enter a 3 digit number.");
    }
}