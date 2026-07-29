#include <iostream>

using namespace std;

int main(){

    try{
        float num = 3.14f;
        throw num;
    }
    catch(int x){
        cout<< "int exception";
    }
    catch(double x){
        cout<< "double exception";
    }
    catch(...){
        cout<< "unknown exception";
    }
    return 0;
}

