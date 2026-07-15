#include <iostream>

using namespace std;
int main(){

    int num[] = { 6, 7, 29, 5, 4, 3, 2, 1, 0 };

    int length = sizeof(num) / sizeof(num[0]);

    
    //for each loop
    for( int value: num){
        cout << value +1 << endl;
    }

    return 0;
}