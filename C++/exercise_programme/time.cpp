#include <iostream>
#include <ctime>
using namespace std;

int main(){

    time_t now= time(0); //time_t is a data type here
    cout<< ctime(&now)<< endl; // ctime makes the time readable if only cout<< now<< endl; is printed we get some random no;

    return 0;
}

