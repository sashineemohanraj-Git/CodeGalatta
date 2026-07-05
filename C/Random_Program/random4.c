#include <stdio.h>

int main() {

    for( short i = 0; i <= 32766; i++) {
        printf("%hd\n", i);
    }

    return 0;
}