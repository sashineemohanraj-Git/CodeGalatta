#include <stdio.h>

void addition(int a, int b) {
    int output = a + b;
    printf("%d\n", output);
}

int main() {
    addition(5, 10);
    return 0;
}