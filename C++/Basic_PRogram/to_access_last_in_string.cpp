#include <iostream>

using namespace std;
int main(){

    string num= "jello";

    num[ num.size() - 1] = 'y';
    cout << num << endl;

    return 0;
}