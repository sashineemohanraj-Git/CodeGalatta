#include <stdio.h>

int main(){
    for(int i=1; i<=5; i++){
  printf("%d\n", i);
  continue; // Skip the rest of the loop body and continue with the next iteration
  printf("This will not be printed.\n");
    }
    return 0;
}