#include <stdio.h>
//Loop program to sum all digits from 1 - 5
int main(){
    int i = 5;
    int sum = 0;
    loop: if(i > 0){
        sum += i;
        i--;
        goto loop;
    }
    printf("%d",sum);
}