#include <stdio.h>

int main(){
    int base=3;
    int power=2;
    int result=1;
    for (int i=1; i<= power; i++){
result= result*base;
        
}
printf("%d to the power of %d is %d\n", base, power, result);
return 0;
}