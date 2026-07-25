#include <iostream>
#include <vector>

using namespace std;
//vector- resizeable array;
int main(){
//vector<type> vectorname;

     vector<int> arr= {45, 374, 383};
     arr.pop_back();// to remove an element at the end
     arr.push_back(907);//to add an element at the end
     
     cout<<arr.size()<< endl;
     cout<<arr.front()<< endl;// first element
     cout<<arr.back()<< endl;// last element
     cout<<arr.at(2)<< endl;// access particular elements from array when index mentioned.
      arr.clear();//to clear everything in the array
      cout<< arr.size()<< endl;
    return 0;
}

