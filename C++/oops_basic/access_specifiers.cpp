#include <iostream>
using namespace std;

//class variable
class person{
//access specifiers: public, private and protected. controls how class of members can be accessed.
    public: //accessed and modified from outside the class.( class variable{}; )it can accessed outside this.
    
   string name;
   int age;
   float height;

   
      person(string n, int a, float h){
        name= n;
        age =a;
        height = h;

      } 

      void display(){
        cout<< "Name:"<< name<< endl;
        cout<< "Age:"<< age<< endl;
        cout<< "height:"<< height<< endl;
        
      }

      private: //cannot be accessed outside class
        string skin;

        void walk(){
          cout<< "person is walking"<< endl;
        }

      
      
} ;

int main(){
    
    person person1("sashinee", 18, 154);
    person1.display();
    cout<<endl;
    
    return 0;
}