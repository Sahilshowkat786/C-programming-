#include <stdio.h>

int main(){
    int n;
    printf("entre a number=");
    scanf("%d",&n);
    if(n%2==0){
        printf("even no");
    }
   /* if(n%2!=0){  
        printf("odd no");
    }*/  

   // alternative 
    else{ 
        printf("odd no");
    }
    
    return 0;
}