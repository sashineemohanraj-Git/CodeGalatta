#include <stdio.h>
int squareroot(int n){

    int sqrt=0;

    for(int i=1;i*i<=n;i++){

        sqrt=i;

    }
    return sqrt;
}
int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d",squareroot(n));

    return 0;
}