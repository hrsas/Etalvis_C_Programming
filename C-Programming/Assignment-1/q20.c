#include <stdio.h>
//Subtract 5 from number if sum of digits is odd
int main(){
    volatile int num;
    scanf("%d", &num);
    int temp = num, sum = 0;
    while(temp){
        sum += (temp%10);
        temp /= 10;
    }
    (sum%2 != 0) ? (printf("%d", num-5)) : (printf("%d",num)); 
}