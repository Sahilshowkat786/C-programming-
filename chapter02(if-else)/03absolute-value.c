#include <stdio.h>
// to print absolute value of a given integer
int main(){
    int n;
   printf("entre integer(z)=") ;
   scanf("%d",&n);
   if(n<0){    //if n is negative
    n =n*(-1);
    printf("absolute value of z is  %d",n);

   }

    return 0;
}