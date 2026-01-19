#include <stdio.h>
//get a 2 digit number and print sum of digits
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 9 && num < 100){
        int sum = 0;
        while(num){
            sum += (num%10);
            num /=10;
        }
        printf("%d",sum);
    }else{
        printf("Enter a 2 digit number.");
    }
}