#include <iostream>
using namespace std;

//class variable
class person{

    public:
    
   string name;
   int age;
   float height;
   person(string n, int a, float h){
        name= n;
        age =a;
        height = h;

      } 
    
   
      person(string n, int a, int h){
        name= n;
        age =a;
        height = h;
      } 

      
      void display(){
        cout<< "Name:"<< name<< endl;
        cout<< "Age:"<< age<< endl;
        cout<< "height:"<< height<< endl;
      }
} ;

int main(){

    person person1("sashinee", 18, 154);
    person person2("mohan", 48, 167.54f);
    
    
    person1.display();
    cout<<endl;
    person2.display();
    cout<<endl;

    return 0;
}