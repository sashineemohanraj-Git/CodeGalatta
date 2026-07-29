#include <iostream>
#include <string>
using namespace std;

int main(){

    //structures- several similar variable at one place

    struct person{
        int myAge;
        string myName;
    } ;
    person person1;

    person1.myName = "SASHINEE";
    cout<< person1.myName<< endl;
    
    return 0;
}

