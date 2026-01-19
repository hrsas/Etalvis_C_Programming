#include <stdio.h>
//Subtract 5 from number if ten's digit is odd
int main(){
    volatile int num;
    scanf("%d", &num);
    (((num/10)%10)%2 != 0) ? (printf("%d", num-5)) : (printf("%d",num)); 

}