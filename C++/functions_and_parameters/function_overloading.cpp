#include <iostream>

using namespace std;

void print(int x){
    cout << x << endl;
}

void print(double x){
    cout << x << endl;
}
int main(){
    
    print(10);
    print(10.5);

    return 0;
}