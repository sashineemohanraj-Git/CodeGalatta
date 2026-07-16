#include <iostream>

using namespace std;
int main(){

int num=10;
// pointer variable- variable that stores the address of another variable
int *ptr=&num;
// dereferencing pointer variable- accessing the value of the variable whose address is stored in the pointer variable(*ptr)
cout<< "Value of num: "<< *ptr << endl;
    return 0;
}