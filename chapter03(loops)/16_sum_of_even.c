// WAP to print sum of even digits of a given no
#include<stdio.h>
int main(){
int n,sum=0,last_digit =0;
printf("enter a number =");
scanf("%d",&n);
while(n!=0){  // also ==>> n>0/n!=0
    last_digit = n%10; 
    if(last_digit %2==0)
    sum = sum +last_digit;
    n =n/10;
}
printf("the sum even digits are %d",sum);
    return 0;
}