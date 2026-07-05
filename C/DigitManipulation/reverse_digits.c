#include <stdio.h>

int main(){

    int num= 8762;
    int reversed=0;

    while(num>0){
        int last_digit= num%10;
        reversed= reversed*10 + last_digit;
        num/=10;
    } 
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}