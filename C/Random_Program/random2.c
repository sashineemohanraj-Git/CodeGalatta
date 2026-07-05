#include <stdio.h>

int main(){
    
    int i= 0;
    while(i<5){
        for(int j=1; j<3; j++){
            printf("%d ", j);
        }
        while(i<5){
            printf("%d ", i);
            i++;
        }
        i++;
        printf("%d ", i);
        printf("\n");
    }
        
    
    return 0;
}
