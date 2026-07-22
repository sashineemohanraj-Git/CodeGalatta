#include <iostream>
using namespace std;

//class variable
class employee{
   
///encapsulation: sensitive data hidden from users(in private)
//example: salary cannot be accesssed by employee but can be accessed by manager
      private: 
       int salary;

      public: 
       string empID;

       //to access salary in private access specifier using get and set method

       //setter
        void setsalary(int s){
         salary=s;
        }        
        //getter
        
        int getsalary(){
         return salary;
        }      
      
} ;

int main(){
    
    employee emp1;
    //emp1.salary= 10000; (we get error as salary is private)
    emp1.setsalary(70000);
    emp1.empID= "HGAJIW001";
    cout<< emp1.empID<< endl;
    
    return 0;
}