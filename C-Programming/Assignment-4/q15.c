#include <stdio.h>
//Loop program, if one's digit is even, print same number. Else, subtract 1 from MSB

int main() {
    int num, temp, pow = 1;
    scanf("%d", &num);
    temp = num;
    loop: if (temp >= 10) {
        temp /= 10;
        pow *= 10;
        goto loop;
    }

    if((num%10)%2 == 0) printf("%d",num);
    else{
        printf("%d", num-pow);
    }
}
