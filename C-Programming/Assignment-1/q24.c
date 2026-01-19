#include <stdio.h>
//get a 4 digit number and reverse the last 2 digits
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 999 && num < 10000){
        int res = num%100;
        res += ((num/100)%10)*1000 + ((num/1000)%10)*100;
        printf("Ans: %d",res);
    }else{
        printf("Enter a 4 digit number.");
    }
}