#include <stdio.h>
//Loop program to get total number of digits in number
int main(){
    int num;
    scanf("%d", &num);
    int i = 0;
    loop: if(num > 0){
        num/=10;
        i++;
        goto loop;
    }
    printf("%d",i);
}