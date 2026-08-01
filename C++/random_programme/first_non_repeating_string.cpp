#include <iostream>
#include <vector>
#include <string>
using namespace std;

char firstNonRepeatingElement(string s) {
    // write your solution below
    
    for(int i=0; i<s.length(); i++){
        bool isRepeated = false;
        for(int j=i +1 ; j< s.length(); j++){
            if(i !=j && s[i] == s[j]){
                isRepeated = true;
                break;
            }
        }
        if(!isRepeated){
            return s[i];
        }
    }
return '\0';

}



// --------------------------------------------------------------
int main() {
    string s;
    cin >> s;
    cout << firstNonRepeatingElement(s) << endl;
}
    