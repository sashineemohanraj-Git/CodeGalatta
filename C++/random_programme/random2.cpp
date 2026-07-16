#include <iostream>

using namespace std;

int findgcd( int a , int b=16){

    int gcd = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int gcd = findgcd(10);
    cout<< gcd<< endl; //error: 'gcd' was not declared in this scope
    return 0;
}