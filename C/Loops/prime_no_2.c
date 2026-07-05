#include<stdio.h>

int main(){

    int n=16;
int count=0;
    for(int i = 2; i <= n-1; i++){
        if(n%i == 0){
            count++;
            printf("%d is not a prime number\n", n);
            break;
        }
    }
    if(count == 0){
        printf("%d is a prime number\n", n);
    }
        
    

    return 0;
}