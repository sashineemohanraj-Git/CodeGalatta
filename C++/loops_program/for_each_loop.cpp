#include <iostream>

using namespace std;
int main(){

    
    string greeting = "Hello, World!";
    int index = 0;

    //for each loop

    for (char c : greeting) {
        if (c == 'l') { // Skip spaces
            cout << "Character at index " << index << ": " << c << endl;
        }
        
        index++;
    }

    return 0;
}