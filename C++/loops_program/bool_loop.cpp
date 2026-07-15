#include <iostream>

using namespace std;
int main(){

    bool boolarray[] = { true, false, true, false, true };
    int length = sizeof(boolarray) / sizeof(boolarray[0]);
    for (int i = 0; i < length; i++) {
        cout << boolarray[i] << endl;
    }

    return 0;
}