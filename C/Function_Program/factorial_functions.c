#include <stdio.h>

int f(int x, int y) {
    int f= x*x + 6 + y*y;
    return f;
}

int main() {
    int result = f(2, 3);
    printf("%d\n", result);
    return 0;
}