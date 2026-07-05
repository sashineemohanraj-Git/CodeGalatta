#include <stdio.h>

int main(){

    int num= 8762;
    int reversed=0;

    while(num>0){
        int last_digit= num%10;
        reversed= reversed*10 + last_digit;
        num/=10;
    } if (reversed==num){
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    
    return 0;
}