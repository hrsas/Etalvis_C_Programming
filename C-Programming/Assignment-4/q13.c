#include <stdio.h>
//Loop program to reverse a number 
int main(){
    int num;
    scanf("%d", &num);
    int rev = 0;
    loop: if(num > 0){
        rev = rev*10 + (num%10);
        num/=10;
        goto loop;
    }
    printf("%d",rev);
}