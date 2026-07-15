#include <iostream>
using namespace std;

int main(){

    string n1, n2;

    cout << "Enter your name: ";
    getline(cin, n1);
    cout << "Enter your age: ";
    getline(cin, n2);

    cout << "Name: " << n1 << endl;
    cout << "Age: " << n2 << endl;

    return 0;
}