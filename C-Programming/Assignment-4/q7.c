#include <stdio.h>
//Loop program to print 2-digit odd numbers with sum of digits as 7
int main(){
    int i = 10;
    loop: if(i < 100){
        if(i % 2 != 0 && (((i%10) + (i/10)%10) == 7)){
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
}