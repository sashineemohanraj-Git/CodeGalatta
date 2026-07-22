//c++ - objective oriented programming (OOP) concepts

// what is object? - object is something that has state and behavior.( example: car, bike, pen, etc. are the objects) 
// what are the propertires of object? - it has state, behavior and identity. (example: color, size, shape, etc. are the properties of object)
// what are the behaviors of object? - the behaviors of object are the functions that can be performed on the object and how it responds to the function calls.(example: if we have a car object, the behaviors of car object are start(), stop(), accelerate(), brake(), etc.)
// what is class? - class is a blueprint/template for creating objects. (example: a class Car can have properties like color, model, and behaviors like start(), stop(), etc.)


/*flow of oop in every language programming

define class
create multiple objects using same class
assign values to the properties of the objects
access members */

//syntax
#include <iostream>
using namespace std;

//class variable
class person{

    
    public:
    string name;
    int age;
    float height;

    

} ;

int main(){

    person person1;
    //objectname.property= value;(to change the value or to assign a value to the property of the class)
    person1.name= "sashu";
    person1.age= 18;
    person1.height= 154;
    
    cout<< person1.name<< endl;
    cout<< person1.age<< endl;
    cout<< person1.height<< endl;
    

    return 0;
}

/*int
short 
long
float
double
char
bool    
for 
while 
do 
switch
case
break
continue
return
string
default
const
auto
void
class*/
