#include <stdio.h>

int main(){

    int num= 24;

    for(int i=1; i*i<= num; i++){

        if(num%i==0){

            printf("%d ", i);

            if(i != num/i){

                printf("%d ", num/i);

            }

        }

    }
    return 0;
}