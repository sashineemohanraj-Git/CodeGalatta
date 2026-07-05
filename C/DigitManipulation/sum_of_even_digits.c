#include <stdio.h>

int main(){

    int num= 222;
    int sum=0;

    while(num>0){
        int last_digit= num%10;
        if(last_digit%2==0){
            sum+= last_digit;
        }
        num/=10;
    }
    printf("Sum of even digits: %d\n", sum);
    return 0;
}