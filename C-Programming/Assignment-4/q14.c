#include <stdio.h>
//Loop program to interchange first and last digit

int main() {
    int num, temp, first, last, pow = 1;
    scanf("%d", &num);

    if (num < 10) {
        printf("%d", num);   
        return 0;
    }

    last = num % 10;
    temp = num;

    loop: if (temp >= 10) {
        temp /= 10;
        pow *= 10;
        goto loop;
    }

    first = temp;
    int middle = (num % pow) / 10;
    int result = last * pow + middle * 10 + first;

    printf("%d", result);
}
