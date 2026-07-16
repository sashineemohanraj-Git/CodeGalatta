#include <stdio.h>

int findLCM(int a, int b){
int max= 1;
    if (a>b){
        max =a;
    }
    else{
        max =b;
    }
   while(1){
      if( max%a ==0 && max%b==0){
        return max;
    
      } 
      else {
        max++;
      }
   }
}

int main(){
    
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("LCM of %d and %d is %d",a,b,findLCM(a,b));
    return 0;
}