#include <stdio.h>
//get a 3 digit number and print print the reverse of the number
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        int rev = 0;
        while(num){
            rev = (rev*10) + (num%10);
            num/=10;
        }
        printf("Reversed: %d",rev);
    }else{
        printf("Enter a 3 digit number.");
    }
}