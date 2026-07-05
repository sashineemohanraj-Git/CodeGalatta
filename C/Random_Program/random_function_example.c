#include <stdio.h>
int findfactorial(int n){
    int fact=1;int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("%d\n",fact);
    return fact;
}

int main(){
    findfactorial(5);
    findfactorial(3);

    return 0;
}