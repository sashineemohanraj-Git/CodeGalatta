#include <iostream>
#include <map>
using namespace std;

int main(){

    //map -store elements in key/points.
    //map<key type, value type> mapname;

    //accessible by keys not index

    map<string,int> fruits= {{"apple",16}, {"banana",9}, {"carrot",13}};

    fruits.at("apple")= 12;//to change value of an item
    fruits["cherry"]= 64; //to add a element
    fruits.insert({{"orange",10}}); //alterante way to add an element

    fruits.erase("cherry"); //to erase an element

    cout<< fruits.at("apple")<<endl;
    cout<< fruits.size()<<endl;

    
    return 0;
}

