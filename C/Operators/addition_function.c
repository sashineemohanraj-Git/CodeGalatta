#include <stdio.h>

int addition(int a, int b) {
    int output = a + b;
    printf("%d\n", output);
    return output;
}

int main() {
    int result = addition(5, 10);
    printf("Addition of 5 and 10 is: %d\n", result);
    return 0;
}