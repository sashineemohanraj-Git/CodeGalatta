#include <iostream>

using namespace std;
int find_factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*find_factorial(n-1);
    }
}
int main(){

    //recursion- function that calls itself
int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << find_factorial(n) << endl;

    return 0;
}