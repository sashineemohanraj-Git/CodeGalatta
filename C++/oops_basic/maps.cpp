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
    cout<< fruits.count("cherry")<< endl; //if a key is present 1 comes if not 0 comes

    cout<< fruits.at("apple")<<endl;
    cout<< fruits.size()<<endl;

    for(auto num :fruits){
        cout<< num.first << "is"<< num.second << endl;
    }

    
    return 0;
}

