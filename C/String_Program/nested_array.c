#include <stdio.h>

int main() {

    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n= sizeof(arr[0])/sizeof(arr[0][0]);

     
    printf("Number of elements: %d\n", n);
    return 0;
}