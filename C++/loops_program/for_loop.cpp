#include <iostream>

using namespace std;
int main(){

    int num[] = { 6, 7, 29, 5, 4, 3, 2, 1, 0 };

    int length = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < length; i++) {
        cout << num[i] << endl;
    }

    return 0;
}