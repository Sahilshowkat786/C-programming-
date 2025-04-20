// we use ternary operator in place of simple if_else statements
//  exp1 ? exp2 :exp3
#include <stdio.h>

int main(){
    int n;
    printf("entre a number=");
    scanf("%d",&n);
   /* if(n%2==0){
        printf("even no");
    }
   
    else{ 
        printf("odd no");*/
    // use of ternary operator
    n%2==0 ? printf("even no") : printf("odd no");
    
    return 0;
}