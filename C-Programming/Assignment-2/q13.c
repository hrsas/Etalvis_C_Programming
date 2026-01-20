#include <stdio.h>
//Get 4-digit number, check if ten's and one's digit are equal
                    //and if thousand's and hundred's are different and print res
int main(){
    int num;
    scanf("%d", &num);
    (num > 999 && num < 10000) ? ( (((num/10))%10 == (num%10))  && ( (num/100)%10) != (num/1000)%10) ? (printf("1")) : (printf("0")) : (printf("Enter 4 digit number"));
