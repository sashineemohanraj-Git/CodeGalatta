#include <iostream>

using namespace std;
int main(){

    string greeting = "Hello World";
    
    //for each loop
    for( char value: greeting){
        cout << value << endl;
    }

    return 0;
}