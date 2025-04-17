#include<stdio.h> 
// take +ve integer input and tell if it is a three digit no or not
int main(){
// use of &&
int n;
printf("enter a number =");
scanf("%d",&n);
if(n>99 && n<1000){
    printf("it is a 3 digit n0");
}
else{ 
    printf("it is not a 3 digit no");
}



    return 0;
}