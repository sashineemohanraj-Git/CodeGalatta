#include <stdio.h>
int main(){

    int num= 2112;
    int reversed=0;
    int temp= num;

while(temp>0){
        int last_digit= temp%10;
        reversed= reversed*10 + last_digit;
        temp/=10;
    } 
    printf("palidrome or not: %d\n", reversed==num);
    return reversed==num;
}

