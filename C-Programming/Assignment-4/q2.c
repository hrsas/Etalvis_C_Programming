#include <stdio.h>
//Loop program to print 5 - 1
int main(){
    int i = 5;
    loop: if(i > 0){
        printf("%d\n",i);
        i--;
        goto loop;
    }
}