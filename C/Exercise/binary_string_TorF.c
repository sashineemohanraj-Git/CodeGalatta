#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_binary(const char *s) {
    // write your solution below
    for(int i=0;i< strlen(s); i++){
        if(s[i]== '0' || s[i]== '1'){
            continue;
        } else {
            return false;
        }
        
    }
    return true;
}



// --------------------------------------------------------------
int main() {
    char s[100005];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    printf("%s", is_binary(s) ? "True" : "False");

    return 0;
}