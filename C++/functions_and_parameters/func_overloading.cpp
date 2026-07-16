#include <iostream>

using namespace std;

void print(int x){
    cout << x << endl;
}

void print(int x, int y){ 
    // function overloading with two parameters cannot be defined with default parameters as error will be thrown 
    //but we can default two parameters in a function with two parameters
    cout << x << " " << y << endl;
}
int main(){
    
    print(10);
    print(17, 20);

    return 0;
}