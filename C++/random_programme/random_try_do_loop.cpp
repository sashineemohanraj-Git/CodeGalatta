#include <iostream>

using namespace std;
int main(){
    int i=0;

    do {
        cout << i << endl;
        i++;
    } 
    while (i <= 5); // while loop cannot be placed before do loop, it will give error. do loop will execute at least once even if the condition is false.

    
    return 0;
}