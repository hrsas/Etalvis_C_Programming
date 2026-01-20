#include <stdio.h>
//Loop program to print sum of 2-digit odd numbers with ten's as 7
int main(){
    int i = 10;
    int sum = 0;
    loop: if(i < 100){
        if((i % 2 != 0) && (((i/10)%10) == 7)){
            sum += i;
        }
        i++;
        goto loop;
    }
    printf("%d",sum);
}