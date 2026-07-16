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
    
    findgcd(10);
    cout <<  findgcd(10) << endl;
    return 0;
}