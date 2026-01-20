#include <stdio.h>
//Get a 2-digit input, check if one's greater than ten's digit
int main(){
    int num;
    scanf("%d", &num);
    if(num >9 && num < 100){
        if(num%10 > (num/10)%10){
            printf("Success");
        }else{
            printf("Failure");
        }
    }
    else{
        printf("Enter a 2-Digit number");
    }
}