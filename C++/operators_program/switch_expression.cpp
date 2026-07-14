#include <iostream>
using namespace std;

int main(){

    const int num = -98;
    switch(num){
        case num > 50:
            cout<< "Number is greater than 50"<< endl;
            break;
        case num <= 50:
            cout<< "Number is less than or equal to 50"<< endl;
            break;
            default:
            cout<< "num is negative"<< endl;
    }

    
    return 0;
}