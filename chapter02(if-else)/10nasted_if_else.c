// nasted division of 3 and 5
#include<stdio.h>
int main(){
        int n;
    printf("enter a number =");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){printf("the no is divisible by 5 and 3"); 

        }
        else{ 
            printf("the no is not divisible by 3 and 5");
        }
    }
else{
    printf("the no is not divisible by 3 and 5");
}
    return 0;
}