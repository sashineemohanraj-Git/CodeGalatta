#include <stdio.h>

int main(){
int factorial = 1;
    for(int i=1; i<=10;i++){
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", factorial, factorial);
        return factorial;
    }

