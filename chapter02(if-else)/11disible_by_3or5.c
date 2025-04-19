// take +ve integers from input and tell if it is divisible by 5 or 3 but not divisible by 15 
#include<stdio.h>
int main(){

    int n;
    printf("enter a number =");
    scanf("%d",&n);
    if((n%5==0 || n%3==0))
        if(n%15!=0){
            printf("the no is divisible by 5 or 3 but not 15"); 
        }
        else{
            printf("divisible by 15");
        }
    else{ 
        printf("it is not divisible by 3 or 5");
    }
    
    return 0;
}