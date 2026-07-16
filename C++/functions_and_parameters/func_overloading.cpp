#include <iostream>

using namespace std;

void print(int x){
    cout << x << endl;
}

void print(int x, int y){
    cout << x << " " << y << endl;
}
int main(){
    
    print(10);
    print(17, 20);

    return 0;
}