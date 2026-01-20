#include <stdio.h>
//Loop program to print 1 - 5
int main(){
    int i = 0;
    loop: if(i < 5){
        printf("%d\n",i+1);
        i++;
        goto loop;
    }
}