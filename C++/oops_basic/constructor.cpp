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
   //use of constructor- to give properties and arguments for the class instead of assigning every for every single object
   //classvariable(parameters){}
   
      person(string n, int a, int h){
        name= n;
        age =a;
        height = h;

    cout<< "sashinee constructor"<< endl;
      } 

      //to print the properties in the object
      void display(){
        cout<< "Name:"<< name<< endl;
        cout<< "Age:"<< age<< endl;
        cout<< "height:"<< height<< endl;
      }
} ;

int main(){

    person person1("sashinee", 18, 154);
    person person2("mohan", 48, 167);
    
    /*to print the data inside the object
    person1.display();
    cout<< endl;
    */
    person1.display();
    cout<<endl;

    return 0;
}