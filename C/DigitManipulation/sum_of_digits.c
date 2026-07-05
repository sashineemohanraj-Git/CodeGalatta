#include <stdio.h>

int main(){

    int num= 123;
    int sum=0;

    while(num>0){
        int last_digit= num%10;
        sum+= last_digit;
        num/=10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}