#include <iostream>

using namespace std;
int main(){

    string randomString = "Hello, World!";
    string vowels ="";

    for(int i = 0; i < randomString.length(); i++){
        if (randomString[i] == 'a' || randomString[i] == 'e' || randomString[i] == 'i' || randomString[i] == 'o' || randomString[i] == 'u' || randomString[i] == 'A' || randomString[i] == 'E' || randomString[i] == 'I' || randomString[i] == 'O' || randomString[i] == 'U'){
            vowels += randomString[i];
        }
    }
    cout << "Vowels in the string: " << vowels << endl;

    return 0;
}