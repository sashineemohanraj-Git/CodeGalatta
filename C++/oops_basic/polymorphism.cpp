#include <iostream>

using namespace std;
//polymorphism- many forms, occurs when there are many classes. Helps to perform single action in diff ways.
//example: for classes of animals which makes sound there are pigs, cat, dog . Soo same action behaves diff.
//base class(parent)

class animal{
    public:
    void animalsound(){
        cout<<" animal makes sound"<< endl;
    }
};
   //child
    class pig : public animal{
        public:
        void animalsound(){
            cout<<" pig makes wee wee sound"<< endl;
        }
    };
    //child
    class dog : public animal{
        public:
        void animalsound(){
            cout<<" pig makes bow bow sound"<< endl;
        }
    };
    

int main(){

    

    animal myanimal;
    pig mypig;
    dog mydog;

    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;
}

