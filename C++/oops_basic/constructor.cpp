#include <iostream>
using namespace std;

//class variable
class person{

    public:
    
   string name;
   int age;
   int height;
    /*constructor- spl method that is automatically called when object of class is created(only in public)
    no return type like no void int or anything
    */
   //use of constructor
   //classvariable(parameters){}
   
      person(){
    cout<< "sashinee constructor"<< endl;
      } 
} ;

int main(){

    person person1;
    person1.name= "sashinee";
    person1.age= 18;
    person1.height= 154;
    

    return 0;
}