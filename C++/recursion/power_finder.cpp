#include <iostream>
#include <cmath>

using namespace std;
int power(int base, int exp){
    //using recursion
    if(exp == 0){
        return 1;
    }
    else{
        return base * power(base, exp-1);
    }
}
/* power of a number 
base =7
exp =3 */

int main(){
int base, exp;
cin >> base >> exp;
cout << power(base, exp) << endl;
    

    return 0;
}