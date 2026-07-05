#include <stdio.h>

int findFactorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int result = findFactorial(5);
    printf("%d\n", result);
    return 0;
}