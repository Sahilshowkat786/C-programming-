#include <stdio.h>
// take positive integer input and tell if it is divisible by 5 and 3

int main(){

    int n;
printf("enter a number =");
scanf("%d",&n);
if(n%5==0 && n%3==0){
    printf("it is divisible by 3 and 5");
}
else{ 
    printf("it is not divisible");
}

    return 0;
}