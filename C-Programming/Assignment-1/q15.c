#include <stdio.h>
//get a 2 digit number and make the one's digit as 0
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 9 && num < 100){
        num = (num/10)*10;
        printf("Ans: %d",num);
    }else{
        printf("Enter a 2 digit number.");
    }
}