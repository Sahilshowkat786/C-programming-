#include <stdio.h>
// tell if it is divisible by 5 or 3
// use of || or
int main(){
    int n;
printf("enter a number =");
scanf("%d",&n);
if(n%5==0 || n%3==0){
    printf("it is divisible by 3 or 5");
}
else{ 
    printf("it is not divisible");
}

    return 0;
}