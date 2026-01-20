#include <stdio.h>
//Loop program to print 2-digit odd numbers below 20
int main(){
    int i = 10;
    loop: if(i < 20){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
}