#include <iostream>

using namespace std;

int main(){

    //exceptions not in c programming.
    //exceptions- instead of errror occuring we handle it by other ways. prevents from crashing the program.
    // ;{} are compilation errors; but while executing the programme some errors ocuur those are called runtime error.
    /*
    try- might cause an error
    throw- stops the error from occuring
    catch- code which handles the error
    */

    // syntax; 
    /*try{
    throw" "}
     
    catch (dataType variable){
    cout << " "<< 
    }
    */


    int a= 6 ; 
    int b =2;
try{
   if (b ==0){
    char error[ ]= "b is zero";
   throw error;
   } else {
    int num = a/b;
    cout<< num << endl;
   } 
    }
   catch (char* errorMsg){
    cout<< errorMsg << endl;
   }
   
    return 0;
   }

