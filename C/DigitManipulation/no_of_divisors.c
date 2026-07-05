#include <stdio.h>

int main(){

    int num= 24;
int count=0;
    for(int i=1; i*i<= num; i++){

        if(num%i==0){

            count++ ;

        }

    }
    printf("Count of divisors: %d\n", count);
    return 0;
}