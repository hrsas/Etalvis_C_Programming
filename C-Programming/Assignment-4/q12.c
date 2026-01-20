#include <stdio.h>
//Loop program to print sum of all digits
int main(){
    int num;
    scanf("%d", &num);
    int sum = 0;
    loop: if(num > 0){
        sum += (num%10);
        num/=10;
        goto loop;
    }
    printf("%d",sum);
}