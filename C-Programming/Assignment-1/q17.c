#include <stdio.h>
//get a 3 digit number and make the one's digit as 2
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        num = ((num/10)*10) + 2;
        printf("Ans: %d",num);
    }else{
        printf("Enter a 3 digit number.");
    }
}