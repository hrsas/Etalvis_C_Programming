#include <stdio.h>
//Loop program to print odd numbers from 1 - 9
int main(){
    int i = 1;
    loop: if(i < 10){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
}