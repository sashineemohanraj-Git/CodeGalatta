#include <iostream>

using namespace std;
int main(){

    int a = 10;
    int b = 20;
    char op = '+';

    switch(op){
        case '+':
            cout << a + b<< endl;
            break;
        case '-':
            cout << a - b<< endl;
            break;
        case '*':
            cout << a * b<< endl;
            break;
        case '/':
            cout << a / b<< endl;
            break;
        default:
            cout << "Invalid operator"<< endl;
    }

    return 0;
}