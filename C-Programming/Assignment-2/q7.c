#include <stdio.h>
//Get 2-digit number, check if ten's and one's digit are equal and print res
int main(){
    int num;
    scanf("%d", &num);
    (num > 9 && num < 100) ? ((num%10) == ((num/10))%10) ? (printf("1")) : (printf("0")) : (printf("Enter 2 digit number"));
}