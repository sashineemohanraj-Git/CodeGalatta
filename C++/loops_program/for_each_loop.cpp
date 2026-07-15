#include <iostream>

using namespace std;
int main(){

    string greeting = "Hello World";
    int index = 0;
    
    //for each loop
    for( char value: greeting){
        if (value== 'l'){
            cout << "The letter e is found at index: " << index << endl;
        }
        cout << value << endl;
        index++;
    }

    return 0;
}