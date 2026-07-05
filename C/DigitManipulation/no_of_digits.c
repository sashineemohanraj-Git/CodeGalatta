#include <stdio.h>

int main(){
int n= 678;

if (n==0){
        printf("The number of digits in the given number is: 1\n");
        return 0;
    }
int count= 0;

    while(n>0){
        n= n/10;
        count++;
    }

    printf("The number of digits in the given number is: %d\n", count);
}