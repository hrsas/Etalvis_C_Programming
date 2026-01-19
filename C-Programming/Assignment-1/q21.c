#include <stdio.h>
//Subtract 5 from a three digit number if one's digit and hundred's digit numbers are odd
int main(){
    volatile int num;
    scanf("%d", &num);
    if(num > 99 && num < 1000){
        ((num%2 != 0) && ((num/10)%2 != 0)) ? (printf("%d", num-5)) : (printf("%d",num)); 
    }else{
        printf("Enter a 3 digit number.");
    }
}