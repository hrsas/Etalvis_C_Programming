#include <stdio.h>
//Check if prime or not
int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }

    int i = 2;

    loop: if (i <= num / 2) {
        if (num % i == 0) {
            printf("Not Prime");
        }
        i++;
        goto loop;
    }

    printf("Prime");
    return 0;
}
