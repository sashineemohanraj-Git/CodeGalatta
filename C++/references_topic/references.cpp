#include <iostream>

using namespace std;
int main(){

int num=10;
// pointer variable- variable that stores the address of another variable
int *ptr=&num;

cout<< "Value of num: "<< *ptr << endl;
    return 0;
}