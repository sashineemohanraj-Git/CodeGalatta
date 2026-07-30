#include <iostream>

using namespace std;

int main(){

    try{
        float num = 3.14f;
        throw num;
    }
    catch(int x){
        cout<< "int exception" << endl;
    }
    catch(double x){
        cout<< "double exception"<< endl;
    }
    catch(...){
        cout<< "unknown exception"<< endl;
    }
    return 0;
}

