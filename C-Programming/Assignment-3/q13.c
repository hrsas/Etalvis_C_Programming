#include <stdio.h>
//Get a 4-digit input, check if ten's and one's are equal and
//if thousand's and hundred's are different
int main(){
    int num;
    scanf("%d", &num);
    if(num >999 && num < 10000){
        if(((num/10)%10 == num%10) && ((num/100)%10 != (num/1000)%10)){
            printf("Success");
        }else{
            printf("Failure");
        }
    }
    else{
        printf("Enter a 4-Digit number");
    }
}