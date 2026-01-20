#include <stdio.h>
//Get 4-digit number, check if ten's and one's digit and thousand's and hundred's are equal and print res
int main(){
    int num;
    scanf("%d", &num);
    (num > 999 && num < 10000) ? ( (num%100) == (num/100)%100) ? (printf("1")) : (printf("0")) : (printf("Enter 4 digit number"));
}