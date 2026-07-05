#include <stdio.h>

int main(){

    int arrived_time= 23;
    int delayed_time= 33;


int new_time= (arrived_time + delayed_time) % 24;

    printf("The new time is: %d\n", new_time);

return 0;
}