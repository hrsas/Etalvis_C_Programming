#include <stdio.h>
//get a 4 digit number and reverse the first 2 digits
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 999 && num < 10000){
        int res = (num/100)*100;
        res+= (num%10)*10;
        num = num/10;
        res+=(num%10);
        printf("Ans: %d",res);
    }else{
        printf("Enter a 4 digit number.");
    }
}