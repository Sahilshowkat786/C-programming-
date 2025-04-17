#include <stdio.h>
// take +ve integer input and tell if it is divisible by 5 or not
int main(){
    int z;
   printf("entre +ve integer(z)=") ;
   scanf("%d",&z);
   if(z%5==0){
    printf("%d divisible by 5",z);
   }
   else{ printf("not divisible by 5");
}

    return 0;
}